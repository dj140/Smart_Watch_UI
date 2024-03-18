#include "TemplateView.h"
#include <stdarg.h>
#include <stdio.h>

using namespace Page;

void TemplateView::Create(lv_obj_t* root)
{

    lv_obj_t* cont = lv_obj_create(root);
    lv_obj_remove_style_all(cont);
    lv_obj_set_size(cont, 397, 397);
    lv_obj_clear_flag(cont, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_clear_flag(cont, LV_OBJ_FLAG_GESTURE_BUBBLE);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cont, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_align(cont, LV_ALIGN_CENTER);
    ui.cont = cont;

    lv_obj_t* image = lv_img_create(cont);
    lv_img_set_src(image, ResourcePool::GetImage("SHM_Logo"));
    lv_obj_set_align(image, LV_ALIGN_CENTER);
    lv_obj_fade_in(image, 2000, 0);
    ui.image = image;

    //lv_obj_set_style_img_recolor_opa(image, 0, LV_PART_MAIN);
    
    //lv_obj_fade_in(image, 1000, 0);

}
