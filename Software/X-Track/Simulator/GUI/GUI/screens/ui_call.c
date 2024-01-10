// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.4
// Project name: Smartwatch

#include "../ui.h"

void ui_call_screen_init(void)
{
    ui_call = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_call, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_call, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_call, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bg_3 = lv_img_create(ui_call);
    lv_img_set_src(ui_bg_3, &ui_img_bg3_png);
    lv_obj_set_width(ui_bg_3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_bg_3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_bg_3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_bg_3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_bg_3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_avatar_label = lv_label_create(ui_call);
    lv_obj_set_width(ui_avatar_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_avatar_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_avatar_label, 0);
    lv_obj_set_y(ui_avatar_label, 10);
    lv_obj_set_align(ui_avatar_label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_avatar_label, "SAMANTHA");
    lv_obj_set_style_text_color(ui_avatar_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_avatar_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_avatar_label, &ui_font_H1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_call_time = lv_label_create(ui_call);
    lv_obj_set_width(ui_call_time, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_call_time, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_call_time, 0);
    lv_obj_set_y(ui_call_time, 46);
    lv_obj_set_align(ui_call_time, LV_ALIGN_CENTER);
    lv_label_set_text(ui_call_time, "01:25.18");
    lv_obj_set_style_text_color(ui_call_time, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_call_time, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_call_time, &ui_font_Subtitle, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_mute = lv_obj_create(ui_call);
    lv_obj_set_width(ui_mute, 68);
    lv_obj_set_height(ui_mute, 50);
    lv_obj_set_x(ui_mute, 0);
    lv_obj_set_y(ui_mute, 100);
    lv_obj_set_align(ui_mute, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_mute, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_mute, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_mute, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_mute, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_mute, &ui_img_mute_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_mute, &ui_img_unmute_png, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_button_down2 = ui_buttondown_create(ui_call);
    lv_obj_set_x(ui_button_down2, 89);
    lv_obj_set_y(ui_button_down2, 183);

    lv_img_set_src(ui_comp_get_child(ui_button_down2, UI_COMP_BUTTONDOWN_BUTTON_DOWN_ICON), &ui_img_house_png);

    ui_volume_group = lv_obj_create(ui_call);
    lv_obj_set_width(ui_volume_group, 283);
    lv_obj_set_height(ui_volume_group, 185);
    lv_obj_set_x(ui_volume_group, -26);
    lv_obj_set_y(ui_volume_group, 23);
    lv_obj_set_align(ui_volume_group, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_clear_flag(ui_volume_group, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_volume_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_volume_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_volume_percent = lv_label_create(ui_volume_group);
    lv_obj_set_width(ui_volume_percent, LV_SIZE_CONTENT);   /// 90
    lv_obj_set_height(ui_volume_percent, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_volume_percent, 207);
    lv_obj_set_y(ui_volume_percent, -17);
    lv_obj_set_align(ui_volume_percent, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_text(ui_volume_percent, "87%");
    lv_obj_set_style_text_color(ui_volume_percent, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_volume_percent, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_volume_percent, &ui_font_Subtitle, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_volume_image = lv_img_create(ui_volume_group);
    lv_img_set_src(ui_volume_image, &ui_img_volume_png);
    lv_obj_set_width(ui_volume_image, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_volume_image, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_volume_image, 20);
    lv_obj_set_y(ui_volume_image, 39);
    lv_obj_set_align(ui_volume_image, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_volume_image, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_volume_image, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_volume_arc = lv_arc_create(ui_volume_group);
    lv_obj_set_width(ui_volume_arc, 330);
    lv_obj_set_height(ui_volume_arc, 330);
    lv_obj_set_x(ui_volume_arc, 50);
    lv_obj_set_y(ui_volume_arc, -98);
    lv_obj_set_align(ui_volume_arc, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_volume_arc, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_arc_set_value(ui_volume_arc, 87);
    lv_arc_set_bg_angles(ui_volume_arc, 88, 170);
    lv_obj_set_style_arc_color(ui_volume_arc, lv_color_hex(0x303030), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_volume_arc, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_volume_arc, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_volume_arc, lv_color_hex(0xEF1E1E), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_volume_arc, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_volume_arc, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_volume_arc, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_volume_arc, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_button_top2 = ui_buttontop_create(ui_call);
    lv_obj_set_x(ui_button_top2, 73);
    lv_obj_set_y(ui_button_top2, -188);
    lv_obj_add_state(ui_button_top2, LV_STATE_CHECKED);       /// States

    lv_img_set_src(ui_comp_get_child(ui_button_top2, UI_COMP_BUTTONTOP_BUTTON_TOP_ICON), &ui_img_call2_png);

    lv_obj_add_flag(ui_comp_get_child(ui_button_top2, UI_COMP_BUTTONTOP_LINE), LV_OBJ_FLAG_HIDDEN);     /// Flags

    lv_obj_add_event_cb(ui_button_down2, ui_event_button_down2_buttondown, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_button_top2, ui_event_button_top2_buttontop, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_call, ui_event_call, LV_EVENT_ALL, NULL);

}
