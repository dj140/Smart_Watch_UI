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

 /**
   ******************************************************************************
   * @file    PageManager.h
   * @author  _VIFEXTech
   * @version v1.4
   * @date    2020-7-28
   * @brief   »ùÓÚ×´Ì¬»úµÄÒì²½Ò³Ãæµ÷¶ÈÆ÷£¬²»ÒÀÀµÈÎºÎGUI¿ò¼Ü£¬Ö§³Ö²Ù×÷ÏµÍ³
   * @finished: 2018.10.6  - v1.0 ÓµÓÐ¼òµ¥µÄÒ³ÃæÇÐ»»¹ÜÀí£¬ÊÂ¼þ´«µÝµ÷¶È
   * @upgrade:  2019.4.1   - v1.1 Ôö¼Ó×¢ÊÍ£¬ÖØÐ´ÊÂ¼þ´«µÝµ÷¶È£¬¼õÉÙÖØ¸´´úÂë
   * @upgrade:  2019.10.5  - v1.2 Ê¹ÓÃÕ»½á¹¹¹ÜÀíÒ³ÃæÇ¶Ì×£¬Ä¬ÈÏÕ»Éî¶È10²ã(¿Éµ÷)
   * @upgrade:  2019.12.4  - v1.3 ÐÞ¸´ÔÚSetupºÍExit×èÈûÇé¿öÏÂÒ³ÃæÇÐ»»µÄBUG£¬Ìí¼ÓÎö¹¹
   * @upgrade:  2020.7.28  - v1.4 ÐÞ¸ÄEventFunction_tÐÎ²ÎË³Ðò£¬ÅÐ¶ÏÖ¸ÕëÊ¹ÓÃ "ptr != NULL" µÄÐÎÊ½£¬Ìí¼ÓMIT¿ªÔ´Ð­Òé
   * @upgrade:  2020.11.3  - v1.5 ½«ÊÂ¼þ»Øµ÷¸Ä³ÉÏûÏ¢»úÖÆ£¬Í³Ò»Ê¹ÓÃÒ»¸ö»Øµ÷º¯Êý´¦Àí£»
   *                              ÐÞ¸Äº¯ÊýÃüÃû£¬È¥³ýPageÇ°×º£»
   *                              ÎªÃ¿¸öÒ³ÃæÌí¼ÓName£¬¿ÉÊ¹ÓÃGetCurrentName()·ÃÎÊµ±Ç°Ò³ÃæµÄÃû×Ö
   * @upgrade:  2020.11.6  - v1.6 ÓÅ»¯Runningº¯Êý£¬È¥³ýÆäÖÐµÄIS_PAGEÅÐ¶Ï
   */

   /* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __PAGEMANAGER_H
#define __PAGEMANAGER_H

#include <stdint.h>

class PageManager {
    typedef void(*CallbackFunction_t)(void*, uint8_t);
    typedef struct PageList {
        CallbackFunction_t Callback;
        const char* Name;
    } PageList_t;
public:
    PageManager(uint8_t pageMax, uint8_t pageStackSize = 10);
    ~PageManager();
    uint8_t NowPage, LastPage, NextPage;
    uint8_t NewPage, OldPage;
    typedef enum {
        MSG_NONE,
        MSG_Setup,
        MSG_Exit,
        MSG_Loop,
        MSG_MAX
    }MSG_t;

    bool Register(uint8_t pageID, CallbackFunction_t callback, const char* name);
    bool Clear(uint8_t pageID);
    bool Push(uint8_t pageID);
    bool Pop();
    void ChangeTo(uint8_t pageID);
    void EventTransmit(void* obj, uint8_t event);
    void StackClear();
    const char* GetCurrentName();
    void Running();
private:
    PageList_t* PageList;
    uint8_t* PageStack;
    uint8_t PageStackSize;
    uint8_t PageStackTop;
    uint8_t MaxPage;
    bool IsPageBusy;
};

#endif
