/*
 * MIT License
 * Copyright (c) 2018-2020 _VIFEXTech
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the follo18wing conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#include "PageManager.h"

#define IS_PAGE(page)   ((page)<(MaxPage))

#ifndef NULL
#   define NULL 0
#endif

 /**
   * @brief  ³õÊ¼»¯Ò³Ãæµ÷¶ÈÆ÷
   * @param  pageMax: Ò³Ãæ×î´óÊýÁ¿
   * @param  eventMax: ÊÂ¼þ×î´óÊýÁ¿
   * @retval ÎÞ
   */
PageManager::PageManager(uint8_t pageMax, uint8_t pageStackSize)
{
    MaxPage = pageMax;
    NewPage = 0;
    OldPage = 0;
    IsPageBusy = false;

    /* ÉêÇëÄÚ´æ£¬Çå¿ÕÁÐ±í */
    PageList = new PageList_t[MaxPage];
    for (uint8_t page = 0; page < MaxPage; page++)
    {
        Clear(page);
    }

    /*Ò³ÃæÕ»ÅäÖÃ*/
    PageStackSize = pageStackSize;
    PageStack = new uint8_t[PageStackSize];
    StackClear();
}

/**
  * @brief  Ò³Ãæµ÷¶ÈÆ÷Îö¹¹
  * @param  ÎÞ
  * @retval ÎÞ
  */
PageManager::~PageManager()
{
    delete[] PageList;
    delete[] PageStack;
}

/**
  * @brief  Çå³ýÒ»¸öÒ³Ãæ
  * @param  pageID: Ò³Ãæ±àºÅ
  * @retval true:³É¹¦ false:Ê§°Ü
  */
bool PageManager::Clear(uint8_t pageID)
{
    if (!IS_PAGE(pageID))
        return false;

    PageList[pageID].Callback = NULL;

    return true;
}

/**
  * @brief  ×¢²áÒ³Ãæ
  * @param  pageID: Ò³Ãæ±àºÅ
  * @param  Callback: ÏûÏ¢»Øµ÷º¯Êý
  * @retval true:³É¹¦ false:Ê§°Ü
  */
bool PageManager::Register(uint8_t pageID, CallbackFunction_t callback, const char* name)
{
    if (!IS_PAGE(pageID))
        return false;

    PageList[pageID].Callback = callback;
    PageList[pageID].Name = name;
    return true;
}

/**
  * @brief  Ò³ÃæÊÂ¼þ´«µÝ
  * @param  obj: ·¢ÉúÊÂ¼þµÄ¶ÔÏó
  * @param  event: ÊÂ¼þ±àºÅ
  * @retval ÎÞ
  */
void PageManager::EventTransmit(void* obj, uint8_t event)
{
    /*½«ÊÂ¼þ´«µÝµ½µ±Ç°Ò³Ãæ*/
    if (PageList[NowPage].Callback != NULL)
    {
        PageList[NowPage].Callback(obj, event);
    }
}

/**
  * @brief  ÇÐ»»µ½Ö¸¶¨Ò³Ãæ
  * @param  pageID: Ò³Ãæ±àºÅ
  * @retval ÎÞ
  */
void PageManager::ChangeTo(uint8_t pageID)
{
    if (!IS_PAGE(pageID))
        return;

    /*¼ì²éÒ³ÃæÊÇ·ñÃ¦Âµ*/
    if (!IsPageBusy)
    {
        /*ÐÂÒ³ÃæID*/
        NextPage = NewPage = pageID;

        /*±ê¼ÇÎªÃ¦Âµ×´Ì¬*/
        IsPageBusy = true;
    }
}

/**
  * @brief  Ò³ÃæÑ¹Õ»£¬Ìø×ªÖÁ¸ÃÒ³Ãæ
  * @param  pageID: Ò³Ãæ±àºÅ
  * @retval true:³É¹¦ false:Ê§°Ü
  */
bool PageManager::Push(uint8_t pageID)
{
    if (!IS_PAGE(pageID))
        return false;

    /*¼ì²éÒ³ÃæÊÇ·ñÃ¦Âµ*/
    if (IsPageBusy)
        return false;

    /*·ÀÖ¹Õ»Òç³ö*/
    if (PageStackTop >= PageStackSize - 1)
        return false;

    /*·ÀÖ¹ÖØ¸´Ò³ÃæÑ¹Õ»*/
    if (pageID == PageStack[PageStackTop])
        return false;

    /*Õ»¶¥Ö¸ÕëÉÏÒÆ*/
    PageStackTop++;

    /*Ò³ÃæÑ¹Õ»*/
    PageStack[PageStackTop] = pageID;

    /*Ò³ÃæÌø×ª*/
    ChangeTo(PageStack[PageStackTop]);

    return true;
}

/**
  * @brief  Ò³Ãæµ¯Õ»£¬Ìø×ªÖÁÉÏÒ»¸öÒ³Ãæ
  * @param  ÎÞ
  * @retval true:³É¹¦ false:Ê§°Ü
  */
bool PageManager::Pop()
{
    /*¼ì²éÒ³ÃæÊÇ·ñÃ¦Âµ*/
    if (IsPageBusy)
        return false;

    /*·ÀÖ¹Õ»Òç³ö*/
    if (PageStackTop == 0)
        return false;

    /*Çå¿Õµ±Ç°Ò³Ãæ*/
    PageStack[PageStackTop] = 0;

    /*µ¯Õ»£¬Õ»¶¥Ö¸ÕëÏÂÒÆ*/
    PageStackTop--;

    /*Ò³ÃæÌø×ª*/
    ChangeTo(PageStack[PageStackTop]);

    return true;
}

/**
  * @brief  Çå¿ÕÒ³ÃæÕ»
  * @param  ÎÞ
  * @retval ÎÞ
  */
void PageManager::StackClear()
{
    /*¼ì²éÒ³ÃæÊÇ·ñÃ¦Âµ*/
    if (IsPageBusy)
        return;

    /*Çå³ýÕ»ÖÐ×óÓÒÊý¾Ý*/
    for (uint8_t i = 0; i < PageStackSize; i++)
    {
        PageStack[i] = 0;
    }
    /*Õ»¶¥Ö¸Õë¸´Î»*/
    PageStackTop = 0;
}

/**
  * @brief  »ñÈ¡µ±Ç°Ò³ÃæÃû³Æ
  * @param  ÎÞ
  * @retval Ò³ÃæÃû³Æ
  */
const char* PageManager::GetCurrentName()
{
    return PageList[NowPage].Name;
}

/**
  * @brief  Ò³Ãæµ÷¶ÈÆ÷×´Ì¬»ú
  * @param  ÎÞ
  * @retval ÎÞ
  */
void PageManager::Running()
{
    /*Ò³ÃæÇÐ»»ÊÂ¼þ*/
    if (NewPage != OldPage)
    {
        /*±ê¼ÇÎªÃ¦Âµ×´Ì¬*/
        IsPageBusy = true;

        /*´¥·¢¾ÉÒ³ÃæÍË³öÊÂ¼þ*/
        if (PageList[OldPage].Callback != NULL)
        {
            PageList[OldPage].Callback(this, MSG_Exit);
        }

        /*±ê¼Ç¾ÉÒ³Ãæ*/
        LastPage = OldPage;

        /*±ê¼ÇÐÂÒ³ÃæÎªµ±Ç°Ò³Ãæ*/
        NowPage = NewPage;

        /*´¥·¢ÐÂÒ³Ãæ³õÊ¼»¯ÊÂ¼þ*/
        if (PageList[NewPage].Callback != NULL)
        {
            PageList[NewPage].Callback(this, MSG_Setup);
        }

        /*ÐÂÒ³Ãæ³õÊ¼»¯Íê³É£¬±ê¼ÇÎª¾ÉÒ³Ãæ*/
        OldPage = NewPage;

        /*±ê¼ÇÒ³Ãæ²»Ã¦Âµ£¬´¦ÓÚÑ­»·×´Ì¬*/
        IsPageBusy = false;
    }

    /*Ò³ÃæÑ­»·ÊÂ¼þ*/
    if (PageList[NowPage].Callback != NULL)
    {
        PageList[NowPage].Callback(this, MSG_Loop);
    }
}
