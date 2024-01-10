#include "DisplayPrivate.h"
#include "../ui.h"

/*导出页面*/
PAGE_EXPORT(EXAMPLE);

//LV_IMG_DECLARE(ui_img_bg1_png);    // assets\bg1.png


static void ui_watch_digital_screen_init(lv_obj_t* par)
{
    ui_watch_digital = lv_obj_create(par);
    //    lv_obj_clear_flag(ui_watch_digital, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_watch_digital, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_watch_digital, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bg_1 = lv_img_create(ui_watch_digital);
    lv_img_set_src(ui_bg_1, &ui_img_bg1_png);
    lv_obj_set_width(ui_bg_1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_bg_1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_bg_1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_bg_1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_bg_1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
/**
  * @brief  页面初始化事件
  * @param  无
  * @retval 无
  */
static void Setup()
{
    /*将此页面移到前台*/
    lv_obj_move_foreground(appWindow);

	ui_watch_digital_screen_init(appWindow);

}

/**
  * @brief  页面退出事件
  * @param  无
  * @retval 无
  */
static void Exit()
{
    lv_obj_clean(appWindow);
}

/**
  * @brief  页面事件
  * @param  obj:发生事件的对象
  * @param  event:事件编号
  * @retval 无
  */
static void Event(void* obj, uint8_t event)
{
    (void)Page;
}
