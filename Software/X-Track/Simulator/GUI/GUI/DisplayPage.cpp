#include "DisplayPrivate.h"

/*ÊµÀý»¯Ò³Ãæµ÷¶ÈÆ÷*/
PageManager page(PAGE_MAX);

/*Ò³Ãæµ¼Èë*/
#define PAGE_IMPORT(name)\
do{\
    extern void PageRegister_##name(PageManager* page_p, uint8_t pageID);\
    PageRegister_##name(&page, PAGE_##name);\
}while(0)

static void page_gestute_event_cb(lv_event_t* event)
{

    lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
    page.EventTransmit(NULL, dir);

}

/**
  * @brief  Ò³Ãæ³õÊ¼»¯
  * @param  ÎÞ
  * @retval ÎÞ
  */
void DisplayPage_Init()
{
    PAGE_IMPORT(EXAMPLE);        //Ö÷²Ëµ¥

    page.Push(PAGE_EXAMPLE);    //½øÈëµÚÒ»¸öÒ³Ãæ

    lv_obj_add_event_cb(lv_scr_act(), page_gestute_event_cb, LV_EVENT_GESTURE, NULL);
}

/**
  * @brief  ÏÔÊ¾¸üÐÂ
  * @param  ÎÞ
  * @retval ÎÞ
  */
void Display_Update()
{
    page.Running();
    lv_task_handler();
}

/**
  * @brief  Ò³Ãæ×èÈûÑÓÊ±£¬±£³Ölvgl¸üÐÂ
  * @param  ÎÞ
  * @retval ÎÞ
  */
void PageDelay(uint32_t ms)
{
    uint32_t lastTime = lv_tick_get();

    while (lv_tick_elaps(lastTime) <= ms)
    {
        lv_task_handler();
    }
}
