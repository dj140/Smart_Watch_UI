﻿// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.4
// Project name: Smartwatch

#ifndef _SMARTWATCH_UI_H
#define _SMARTWATCH_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"

#include "ui_helpers.h"
#include "components/ui_comp.h"
#include "components/ui_comp_hook.h"
#include "ui_events.h"
void sec_Animation(lv_obj_t * TargetObject, int delay);
void min_Animation(lv_obj_t * TargetObject, int delay);
void hour_Animation(lv_obj_t * TargetObject, int delay);
void left_Animation(lv_obj_t * TargetObject, int delay);
void right_Animation(lv_obj_t * TargetObject, int delay);
void opa_on_Animation(lv_obj_t * TargetObject, int delay);
void dots_Animation(lv_obj_t * TargetObject, int delay);
void top_Animation(lv_obj_t * TargetObject, int delay);
void cloud_Animation(lv_obj_t * TargetObject, int delay);
void blood2_Animation(lv_obj_t * TargetObject, int delay);
void blood1_Animation(lv_obj_t * TargetObject, int delay);
void heart_Animation(lv_obj_t * TargetObject, int delay);
// SCREEN: ui_watch_digital
void ui_watch_digital_screen_init(void);
void ui_event_watch_digital(lv_event_t * e);
extern lv_obj_t * ui_watch_digital;
extern lv_obj_t * ui_bg_1;
extern lv_obj_t * ui_hour_group;
extern lv_obj_t * ui_label_hour_1;
extern lv_obj_t * ui_label_hour_2;
extern lv_obj_t * ui_label_min;
extern lv_obj_t * ui_battery_group;
extern lv_obj_t * ui_date_group;
extern lv_obj_t * ui_step_group;
void ui_event_button_top_buttontop(lv_event_t * e);
extern lv_obj_t * ui_button_top;
void ui_event_button_down_buttondown(lv_event_t * e);
extern lv_obj_t * ui_button_down;
extern lv_obj_t * ui_sec_dot;
extern lv_obj_t * ui_weather_dots_group2;
extern lv_obj_t * ui_dot14;
extern lv_obj_t * ui_dot15;
extern lv_obj_t * ui_day1;
extern lv_obj_t * ui_month1;
extern lv_obj_t * ui_year1;
extern lv_obj_t * ui_step_label;
extern lv_obj_t * ui_step_labe2;

// SCREEN: ui_watch_analog
void ui_watch_analog_screen_init(void);
void ui_event_watch_analog(lv_event_t * e);
extern lv_obj_t * ui_watch_analog;
extern lv_obj_t * ui_bg_2;
extern lv_obj_t * ui_clock;
extern lv_obj_t * ui_clock_min;
extern lv_obj_t * ui_dots;
extern lv_obj_t * ui_battery_group1;
extern lv_obj_t * ui_date_group2;
extern lv_obj_t * ui_day2;
extern lv_obj_t * ui_month2;
extern lv_obj_t * ui_year2;
extern lv_obj_t * ui_weather_group_5;
extern lv_obj_t * ui_degree_7;
extern lv_obj_t * ui_cloud_fog_3;
extern lv_obj_t * ui_step_group2;
void ui_event_button_top1_buttontop(lv_event_t * e);
extern lv_obj_t * ui_button_top1;
void ui_event_button_down1_buttondown(lv_event_t * e);
extern lv_obj_t * ui_button_down1;
extern lv_obj_t * ui_clock_group;
extern lv_obj_t * ui_sec;
extern lv_obj_t * ui_min;
extern lv_obj_t * ui_hour;
extern lv_obj_t * ui_dots_group;
extern lv_obj_t * ui_dot16;
extern lv_obj_t * ui_dot17;
// SCREEN: ui_call
void ui_call_screen_init(void);
void ui_event_call(lv_event_t * e);
extern lv_obj_t * ui_call;
extern lv_obj_t * ui_bg_3;
extern lv_obj_t * ui_avatar_label;
extern lv_obj_t * ui_call_time;
extern lv_obj_t * ui_mute;
void ui_event_button_down2_buttondown(lv_event_t * e);
extern lv_obj_t * ui_button_down2;
extern lv_obj_t * ui_volume_group;
extern lv_obj_t * ui_volume_percent;
extern lv_obj_t * ui_volume_image;
extern lv_obj_t * ui_volume_arc;
void ui_event_button_top2_buttontop(lv_event_t * e);
extern lv_obj_t * ui_button_top2;
// SCREEN: ui_weather_1
void ui_weather_1_screen_init(void);
void ui_event_weather_1(lv_event_t * e);
extern lv_obj_t * ui_weather_1;
extern lv_obj_t * ui_bg_4;
extern lv_obj_t * ui_city_gruop_1;
extern lv_obj_t * ui_weather_title_group_3;
extern lv_obj_t * ui_label_degree;
extern lv_obj_t * ui_rain_group;
extern lv_obj_t * ui_rain_icon;
extern lv_obj_t * ui_rain_percent;
extern lv_obj_t * ui_wind_group;
extern lv_obj_t * ui_wind_icon;
extern lv_obj_t * ui_wind_speed;
extern lv_obj_t * ui_weather_dots_group;
extern lv_obj_t * ui_dot1;
extern lv_obj_t * ui_dot2;
extern lv_obj_t * ui_weather_image_group;
extern lv_obj_t * ui_sun;
extern lv_obj_t * ui_clouds;
void ui_event_button_down3_buttondown(lv_event_t * e);
extern lv_obj_t * ui_button_down3;
// SCREEN: ui_weather_2
void ui_weather_2_screen_init(void);
void ui_event_weather_2(lv_event_t * e);
extern lv_obj_t * ui_weather_2;
extern lv_obj_t * ui_bg5;
extern lv_obj_t * ui_weather_dots_group1;
extern lv_obj_t * ui_dot3;
extern lv_obj_t * ui_dot4;
extern lv_obj_t * ui_content;
extern lv_obj_t * ui_city_gruop_2;
extern lv_obj_t * ui_todady_weather_content;
extern lv_obj_t * ui_today_weather_group;
extern lv_obj_t * ui_today_weather_group1;
extern lv_obj_t * ui_today_weather_group2;
extern lv_obj_t * ui_today_weather_group3;
extern lv_obj_t * ui_today_weather_group4;
extern lv_obj_t * ui_today_weather_group5;
extern lv_obj_t * ui_today_weather_group6;
extern lv_obj_t * ui_today_weather_group7;
extern lv_obj_t * ui_today_weather_group8;
void ui_event_button_down4_buttondown(lv_event_t * e);
extern lv_obj_t * ui_button_down4;
// SCREEN: ui_blood_oxy
void ui_blood_oxy_screen_init(void);
void ui_event_blood_oxy(lv_event_t * e);
extern lv_obj_t * ui_blood_oxy;
extern lv_obj_t * ui_bg6;
extern lv_obj_t * ui_title_group_1;
void ui_event_button_down5_buttondown(lv_event_t * e);
extern lv_obj_t * ui_button_down5;
void ui_event_button_round_buttonround(lv_event_t * e);
extern lv_obj_t * ui_button_round;
extern lv_obj_t * ui_blood_presure_group;
extern lv_obj_t * ui_blood_oxygen;
extern lv_obj_t * ui_percent;
extern lv_obj_t * ui_pulse_group;
extern lv_obj_t * ui_arc_spo2;
extern lv_obj_t * ui_precent_70;
extern lv_obj_t * ui_precent_100;
extern lv_obj_t * ui_health_dots_group;
extern lv_obj_t * ui_dot7;
extern lv_obj_t * ui_dot6;
extern lv_obj_t * ui_dot5;
extern lv_obj_t * ui_dots_group1;
extern lv_obj_t * ui_dot18;
extern lv_obj_t * ui_dot19;
// SCREEN: ui_ecg
void ui_ecg_screen_init(void);
void ui_event_ecg(lv_event_t * e);
extern lv_obj_t * ui_ecg;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_bg1;
extern lv_obj_t * ui_title_group_2;
void ui_event_button_down6_buttondown(lv_event_t * e);
extern lv_obj_t * ui_button_down6;
void ui_event_button_round1_buttonround(lv_event_t * e);
extern lv_obj_t * ui_button_round1;
extern lv_obj_t * ui_pulse_group1;
extern lv_obj_t * ui_health_dots_group1;
extern lv_obj_t * ui_dot9;
extern lv_obj_t * ui_dot8;
extern lv_obj_t * ui_dot10;
extern lv_obj_t * ui_chart_group;
extern lv_obj_t * ui_chart_ecg;
// SCREEN: ui_blood_pressure
void ui_blood_pressure_screen_init(void);
void ui_event_blood_pressure(lv_event_t * e);
extern lv_obj_t * ui_blood_pressure;
extern lv_obj_t * ui_bg2;
extern lv_obj_t * ui_Image3;
extern lv_obj_t * ui_title_group_3;
void ui_event_button_down7_buttondown(lv_event_t * e);
extern lv_obj_t * ui_button_down7;
void ui_event_button_round2_buttonround(lv_event_t * e);
extern lv_obj_t * ui_button_round2;
extern lv_obj_t * ui_blood_presure_group1;
extern lv_obj_t * ui_sys_group;
extern lv_obj_t * ui_sys;
extern lv_obj_t * ui_mmhg1;
extern lv_obj_t * ui_blood_oxygen1;
extern lv_obj_t * ui_pulse_group2;
extern lv_obj_t * ui_blood_presure_group2;
extern lv_obj_t * ui_dia_group;
extern lv_obj_t * ui_dia;
extern lv_obj_t * ui_mmhg2;
extern lv_obj_t * ui_blood_oxygen2;
extern lv_obj_t * ui_health_dots_group2;
extern lv_obj_t * ui_dot12;
extern lv_obj_t * ui_dot13;
extern lv_obj_t * ui_dot11;
// SCREEN: ui_measuing
void ui_measuing_screen_init(void);
void ui_event_measuing(lv_event_t * e);
extern lv_obj_t * ui_measuing;
extern lv_obj_t * ui_bg7;
extern lv_obj_t * ui_pulse_group3;
extern lv_obj_t * ui_measuring;
extern lv_obj_t * ui_Spinner2;
extern lv_obj_t * ui_blood_group;
extern lv_obj_t * ui_blood1;
extern lv_obj_t * ui_blood_fill;
extern lv_obj_t * ui_blood2;
void ui_event_x_button(lv_event_t * e);
extern lv_obj_t * ui_x_button;
extern lv_obj_t * ui_x;
void ui_event____initial_actions0(lv_event_t * e);
extern lv_obj_t * ui____initial_actions0;

LV_IMG_DECLARE(ui_img_bg1_png);    // assets\bg1.png
LV_IMG_DECLARE(ui_img_flash_png);    // assets\flash.png
LV_IMG_DECLARE(ui_img_step_png);    // assets\step.png
LV_IMG_DECLARE(ui_img_call1_png);    // assets\call1.png
LV_IMG_DECLARE(ui_img_btn_bg_1_png);    // assets\btn_bg_1.png
LV_IMG_DECLARE(ui_img_weather_png);    // assets\weather.png
LV_IMG_DECLARE(ui_img_btn_bg_3_png);    // assets\btn_bg_3.png
LV_IMG_DECLARE(ui_img_sec_dot_png);    // assets\sec_dot.png
LV_IMG_DECLARE(ui_img_weather_sun_cloud_png);    // assets\weather_sun_cloud.png
LV_IMG_DECLARE(ui_img_clockwise_sec_png);    // assets\clockwise_sec.png
LV_IMG_DECLARE(ui_img_clockwise_min_png);    // assets\clockwise_min.png
LV_IMG_DECLARE(ui_img_clockwise_hour_png);    // assets\clockwise_hour.png
LV_IMG_DECLARE(ui_img_bg3_png);    // assets\bg3.png
LV_IMG_DECLARE(ui_img_mute_png);    // assets\mute.png
LV_IMG_DECLARE(ui_img_unmute_png);    // assets\unmute.png
LV_IMG_DECLARE(ui_img_house_png);    // assets\house.png
LV_IMG_DECLARE(ui_img_volume_png);    // assets\volume.png
LV_IMG_DECLARE(ui_img_call2_png);    // assets\call2.png
LV_IMG_DECLARE(ui_img_rain_png);    // assets\rain.png
LV_IMG_DECLARE(ui_img_wind_png);    // assets\wind.png
LV_IMG_DECLARE(ui_img_sun_png);    // assets\sun.png
LV_IMG_DECLARE(ui_img_clouds_png);    // assets\clouds.png
LV_IMG_DECLARE(ui_img_weather_sun_png);    // assets\weather_sun.png
LV_IMG_DECLARE(ui_img_weather_cloud_png);    // assets\weather_cloud.png
LV_IMG_DECLARE(ui_img_weather_cloud_fog_png);    // assets\weather_cloud_fog.png
LV_IMG_DECLARE(ui_img_measure_png);    // assets\measure.png
LV_IMG_DECLARE(ui_img_heart_png);    // assets\heart.png
LV_IMG_DECLARE(ui_img_s8_png);    // assets\s8.png
LV_IMG_DECLARE(ui_img_s9_png);    // assets\s9.png
LV_IMG_DECLARE(ui_img_wave2_png);    // assets\wave2.png
LV_IMG_DECLARE(ui_img_wave1_png);    // assets\wave1.png
LV_IMG_DECLARE(ui_img_x_png);    // assets\x.png
LV_IMG_DECLARE(ui_img_bg1_png);    // assets\bg1.png
LV_IMG_DECLARE(ui_img_bg2_png);    // assets\bg2.png
LV_IMG_DECLARE(ui_img_bg3_png);    // assets\bg3.png
LV_IMG_DECLARE(ui_img_btn_bg_1_png);    // assets\btn_bg_1.png
LV_IMG_DECLARE(ui_img_btn_bg_2_png);    // assets\btn_bg_2.png
LV_IMG_DECLARE(ui_img_btn_bg_3_png);    // assets\btn_bg_3.png
LV_IMG_DECLARE(ui_img_call1_png);    // assets\call1.png
LV_IMG_DECLARE(ui_img_call2_png);    // assets\call2.png
LV_IMG_DECLARE(ui_img_heart2_png);    // assets\heart2.png
LV_IMG_DECLARE(ui_img_s1_png);    // assets\s1.png
LV_IMG_DECLARE(ui_img_s2_png);    // assets\s2.png
LV_IMG_DECLARE(ui_img_s3_png);    // assets\s3.png
LV_IMG_DECLARE(ui_img_s4_png);    // assets\s4.png
LV_IMG_DECLARE(ui_img_s5_png);    // assets\s5.png
LV_IMG_DECLARE(ui_img_s6_png);    // assets\s6.png
LV_IMG_DECLARE(ui_img_s7_png);    // assets\s7.png
LV_IMG_DECLARE(ui_img_s8_png);    // assets\s8.png
LV_IMG_DECLARE(ui_img_s9_png);    // assets\s9.png
LV_IMG_DECLARE(ui_img_wave1_png);    // assets\wave1.png
LV_IMG_DECLARE(ui_img_wave2_png);    // assets\wave2.png

LV_FONT_DECLARE(ui_font_Font1);
LV_FONT_DECLARE(ui_font_H1);
LV_FONT_DECLARE(ui_font_Number_big);
LV_FONT_DECLARE(ui_font_Number_extra);
LV_FONT_DECLARE(ui_font_Subtitle);
LV_FONT_DECLARE(ui_font_Title);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
