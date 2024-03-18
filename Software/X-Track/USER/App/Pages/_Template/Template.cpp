#include "Template.h"

using namespace Page;

uint32_t counter = 0;
uint8_t  ubNumberOfFiles = 10;
uint8_t str[10];
#define MAX_BMP_FILES     10
#define MAX_BMP_FILE_NAME 10
char* pDirectoryFiles[MAX_BMP_FILES];
uint8_t num = 1;

Template::Template()
    : timer(nullptr)
{
}

Template::~Template()
{

}

void Template::onCustomAttrConfig()
{
    LV_LOG_USER("begin");
    SetCustomCacheEnable(true);
    SetCustomLoadAnimType(PageManager::LOAD_ANIM_OVER_BOTTOM, 1000, lv_anim_path_bounce);
}

void Template::onViewLoad()
{
    LV_LOG_USER("begin");
    View.Create(_root);
    AttachEvent(_root);
    AttachEvent(View.ui.cont);
}

void Template::onViewDidLoad()
{
    LV_LOG_USER("begin");
}

void Template::onViewWillAppear()
{
    LV_LOG_USER("begin");
    timer = lv_timer_create(onTimerUpdate, 3000, this);
}

void Template::onViewDidAppear()
{
    LV_LOG_USER("begin");
}

void Template::onViewWillDisappear()
{
    LV_LOG_USER("begin");
}

void Template::onViewDidDisappear()
{
    LV_LOG_USER("begin");
    lv_timer_del(timer);
}

void Template::onViewUnload()
{
    LV_LOG_USER("begin");
}

void Template::onViewDidUnload()
{
    LV_LOG_USER("begin");
}

void Template::AttachEvent(lv_obj_t* obj)
{
    lv_obj_set_user_data(obj, this);
    lv_obj_add_event_cb(obj, onEvent, LV_EVENT_ALL, this);
}

void Template::Update()
{
    //lv_obj_fade_out(View.ui.image, 1000, 100);

    //lv_img_set_src(View.ui.image, ResourcePool::GetImage("image_001"));
    //lv_obj_fade_in(View.ui.image, 2000, 100);
    if (num == ubNumberOfFiles)
    {
        num = 1;
    }

    //    printf("%d: %s\r\n", num, (char*)str);
   sprintf((char*)str, "image_0%02d",num);
    lv_img_set_src(View.ui.image, ResourcePool::GetImage((char*)str));
    //lv_img_set_src(View.ui.image, ResourcePool::GetImage("image_001"));

    lv_obj_fade_in(View.ui.image, 3000, 0); 
     num++;

}

void Template::onTimerUpdate(lv_timer_t* timer)
{
    Template* instance = (Template*)timer->user_data;

    instance->Update();
}

void Template::onEvent(lv_event_t* event)
{
    Template* instance = (Template*)lv_event_get_user_data(event);
    LV_ASSERT_NULL(instance);

    lv_obj_t* obj = lv_event_get_current_target(event);
    lv_event_code_t code = lv_event_get_code(event);


        if (code == LV_EVENT_PRESSED)
        {    

            instance->_Manager->Push("Pages/Dialplate");
        }
    
    if (code == LV_EVENT_GESTURE)
    {
        LV_LOG_USER("LV_EVENT_GESTURE %d", code);

        if (lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
            instance->_Manager->Push("Pages/Dialplate");
        }
    }

    if (code == LV_EVENT_REFRESH)
    {
        LV_LOG_USER("LV_EVENT_SCREEN_LOADED %d", code);

    }
}
