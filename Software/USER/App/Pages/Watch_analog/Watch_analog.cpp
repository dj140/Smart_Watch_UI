#include "Watch_analog.h"

using namespace Page;

Watch_analog::Watch_analog()
    : timer(nullptr)
{
}

Watch_analog::~Watch_analog()
{

}

void Watch_analog::onCustomAttrConfig()
{
    LV_LOG_USER("begin");  
    SetCustomCacheEnable(true);
    SetCustomLoadAnimType(PageManager::LOAD_ANIM_OVER_RIGHT, 200, lv_anim_path_ease_in);
}

void Watch_analog::onViewLoad()
{
    LV_LOG_USER("begin");  
    Model.Init();
    View.Create(_root);
    AttachEvent(_root);
    AttachEvent(View.ui.cont);
}

void Watch_analog::onViewDidLoad()
{
    LV_LOG_USER("begin");
}

void Watch_analog::onViewWillAppear()
{
    LV_LOG_USER("begin");
    View.AppearAnimStart();
    lv_obj_set_style_opa(_root, LV_OPA_TRANSP, 0);
    lv_obj_fade_in(_root, 500, 0);
}

void Watch_analog::onViewDidAppear()
{
    LV_LOG_USER("begin"); 
    timer = lv_timer_create(onTimerUpdate, 1000, this);

}

void Watch_analog::onViewWillDisappear()
{
    LV_LOG_USER("begin");
}

void Watch_analog::onViewDidDisappear()
{
    LV_LOG_USER("begin");
    lv_timer_del(timer);
    View.Delete();

}

void Watch_analog::onViewUnload()
{
    LV_LOG_USER("begin");
    View.Delete();
    Model.Deinit();

}

void Watch_analog::onViewDidUnload()
{
    LV_LOG_USER("begin");
}

void Watch_analog::AttachEvent(lv_obj_t* obj)
{
    //lv_obj_set_user_data(obj, this);
    lv_obj_add_event_cb(obj, onEvent, LV_EVENT_ALL, this);
}

void Watch_analog::Update()
{
    HAL::Clock_Info_t clockInfo;
    Model.GetClockinfo(&clockInfo);
    lv_label_set_text_fmt(View.ui.ui_clock, "%02d   %02d", clockInfo.hour, clockInfo.minute);
    lv_label_set_text_fmt(View.ui.ui_year, "%04d", clockInfo.year);
    //lv_label_set_text_fmt(View.ui.ui_month, "%03S", clockInfo.month);
    //LV_LOG_USER("month: %d", clockInfo.month);
    //LV_LOG_USER("week: %d", clockInfo.week);

    //lv_label_set_text_fmt(View.ui.ui_year, );
    lv_img_set_angle(View.ui.ui_hour, clockInfo.hour * 300);
    lv_img_set_angle(View.ui.ui_min, clockInfo.minute * 60);
    lv_img_set_angle(View.ui.ui_sec, clockInfo.second * 60);

}

void Watch_analog::onTimerUpdate(lv_timer_t* timer)
{
    Watch_analog* instance = (Watch_analog*)timer->user_data;

    instance->Update();
}

void Watch_analog::onEvent(lv_event_t* event)
{
    Watch_analog* instance = (Watch_analog*)lv_event_get_user_data(event);
    LV_ASSERT_NULL(instance);

    lv_obj_t* obj = lv_event_get_current_target(event);
    lv_event_code_t code = lv_event_get_code(event);


 /*       if (code == LV_EVENT_PRESSED)
        {    

            instance->_Manager->Pop();
        }*/
    
    if (code == LV_EVENT_GESTURE)
    {
        LV_LOG_USER("LV_EVENT_GESTURE %d", code);

        if (lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
            instance->_Manager->Push("Pages/SystemInfos");
        }
        if (lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
            instance->_Manager->Push("Pages/Blood_oxy");
        }
        if (lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM) {
            instance->_Manager->Push("Pages/Setting");
        }
        if (lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
            instance->_Manager->Replace("Pages/Watch_cxk");
        }
        //if (lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        //    instance->_Manager->Pop();
        //}
    }

}
