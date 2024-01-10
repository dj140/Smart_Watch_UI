#include "SystemInfosView.h"

using namespace Page;

#define ITEM_HEIGHT_MIN   100
#define ITEM_PAD          ((LV_VER_RES - ITEM_HEIGHT_MIN) / 2)

void SystemInfosView::Create(lv_obj_t* root)
{
    //lv_obj_set_style_pad_ver(root, ITEM_PAD, 0);
    //lv_obj_set_flex_flow(root, LV_FLEX_FLOW_COLUMN);
    //lv_obj_set_flex_align(
    //    root,
    //    LV_FLEX_ALIGN_START,
    //    LV_FLEX_ALIGN_START,
    //    LV_FLEX_ALIGN_CENTER
    //);

    //Style_Init();

    /* Item Sport */
    Item_Create(&ui.sport,root,"Sport","bluetooth_png");

    ///* Item GPS */
    //Item_Create(
    //    &ui.gps,
    //    root,
    //    "GPS",
    //    "map_location",

    //    "Latitude\n"
    //    "Longitude\n"
    //    "Altitude\n"
    //    "UTC Time\n\n"
    //    "Course\n"
    //    "Speed"
    //);

    ///* Item MAG */
    //Item_Create(
    //    &ui.mag,
    //    root,
    //    "MAG",
    //    "compass",

    //    "Compass\n"
    //    "X\n"
    //    "Y\n"
    //    "Z"
    //);

    ///* Item IMU */
    //Item_Create(
    //    &ui.imu,
    //    root,
    //    "IMU",
    //    "gyroscope",

    //    "Step\n"
    //    "Ax\n"
    //    "Ay\n"
    //    "Az\n"
    //    "Gx\n"
    //    "Gy\n"
    //    "Gz"
    //);

    ///* Item RTC */
    //Item_Create(
    //    &ui.rtc,
    //    root,
    //    "RTC",
    //    "time_info",

    //    "Date\n"
    //    "Time"
    //);

    ///* Item Battery */
    //Item_Create(
    //    &ui.battery,
    //    root,
    //    "Battery",
    //    "battery_info",

    //    "Usage\n"
    //    "Voltage\n"
    //    "Status"
    //);

    ///* Item Storage */
    //Item_Create(
    //    &ui.storage,
    //    root,
    //    "Storage",
    //    "storage",

    //    "Status\n"
    //    "Size\n"
    //    "Type\n"
    //    "Version"
    //);

    ///* Item System */
    //Item_Create(
    //    &ui.system,
    //    root,
    //    "System",
    //    "system_info",

    //    "Firmware\n"
    //    "Author\n"
    //    "LVGL\n"
    //    "SysTick\n"
    //    "Compiler\n\n"
    //    "Build\n"
    //);

    //Group_Init();
}
void SystemInfosView::create_app_panel(lv_obj_t* par)
{
//    /**
//     * @brief App panel
//     *
//     */
//
//    /* Create a panel */
//    lv_obj_t* cont = lv_obj_create(par);
//
//    lv_obj_set_size(cont, 240, 240);
//    lv_obj_align(cont, LV_ALIGN_BOTTOM_MID, 0, 0);
//
//    /* Ser style */
//    lv_obj_set_style_radius(cont, 0, LV_STATE_DEFAULT);
//    lv_obj_set_style_bg_opa(cont, 0, LV_STATE_DEFAULT);
//    lv_obj_set_style_border_opa(cont, 0, LV_STATE_DEFAULT);
//
//    /* Add scroll flags */
//    lv_obj_add_flag(cont, LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM);
//    lv_obj_set_scrollbar_mode(cont, LV_SCROLLBAR_MODE_OFF);
//
//#if SCROLL_VER
//    lv_obj_set_scroll_dir(cont, LV_DIR_VER);
//#else 
//    lv_obj_set_scroll_dir(cont, LV_DIR_HOR);
//#endif
//
//    //lv_obj_add_event_cb(cont, _lvgl_event_cb, LV_EVENT_SCROLL, (void*)this);
//
//
//    /**
//     * @brief App bubble pool
//     *
//     */
//
//     /* Update bubble config */
//    _bubble_cfg.iconColMax = LauncherData_t.appPanelHor / 108;
//    _bubble_cfg.iconRowMax = LauncherData_t.appPanelVer / 108;
//    _bubble_cfg.iconColNum = (10 - 1) / _bubble_cfg.iconRowMax;
//    if (((10 - 1) % _bubble_cfg.iconRowMax) != 0) {
//        _bubble_cfg.iconColNum++;
//    }
//    _bubble_cfg.iconSpaceX = LauncherData_t.appPanelHor / _bubble_cfg.iconColMax;
//    lv_coord_t gap_between_icon = (LauncherData_t.appPanelHor - 108 * _bubble_cfg.iconColMax) / (_bubble_cfg.iconColMax + 1);
//    _bubble_cfg.iconSpaceY = 108 - (gap_between_icon / 2);
//    _bubble_cfg.iconXoffset = -(LauncherData_t.appPanelHor / 2) + (_bubble_cfg.iconSpaceX / 2);
//    _bubble_cfg.iconYoffset = -(LauncherData_t.appPanelVer / 2) + (_bubble_cfg.iconSpaceY / 2) + gap_between_icon;
//
//
//    int icon_x = 0;
//    int icon_y = 0;
//    /* Long row first */
//    bool is_long_row = true;
//
//    /* Put App Icon into bubble pool */
//    for (auto i : _framework->getAppList()) {
//        /* If is launcher */
//        if (i.app == this) {
//            continue;
//        }
//
//        /* Create a object */
//        lv_obj_t* app = lv_img_create(cont);
//        lv_obj_center(app);
//
//        /* If App Icon is not set, use default */
//        if (i.app->getAppIcon() == nullptr) {
//            lv_img_set_src(app, &USING_ICON);
//        }
//        else {
//            lv_img_set_src(app, i.app->getAppIcon());
//        }
//
//
//
//        /**
//         * @brief Vertical
//         *
//         */
//#if SCROLL_VER
//
//         /* Put App in hexagon mesh */
//        if (!is_long_row) {
//            lv_obj_set_pos(app, icon_x + _bubble_cfg.iconSpaceX / 2 + _bubble_cfg.iconXoffset, icon_y + _bubble_cfg.iconYoffset);
//        }
//        else {
//            lv_obj_set_pos(app, icon_x + _bubble_cfg.iconXoffset, icon_y + _bubble_cfg.iconYoffset);
//        }
//
//        /* Go to next col */
//        icon_x += _bubble_cfg.iconSpaceX;
//
//        /* Go to next more Apps row */
//        if (!is_long_row && ((icon_x / _bubble_cfg.iconSpaceX) >= (_bubble_cfg.iconColMax - 1))) {
//            is_long_row = true;
//            icon_x = 0;
//            icon_y += _bubble_cfg.iconSpaceY;
//        }
//        /* Go to next less Apps row */
//        else if (is_long_row && ((icon_x / _bubble_cfg.iconSpaceX) >= _bubble_cfg.iconColMax)) {
//            is_long_row = false;
//            icon_x = 0;
//            icon_y += _bubble_cfg.iconSpaceY;
//        }
//
//        /**
//         * @brief Horizontal
//         *
//         */
//#else
//
//         /* Put App in hexagon mesh */
//        if (!is_long_row) {
//            lv_obj_set_pos(app, icon_x + _bubble_cfg.iconSpaceX / 2 + _bubble_cfg.iconXoffset, icon_y + _bubble_cfg.iconYoffset);
//        }
//        else {
//            lv_obj_set_pos(app, icon_x + _bubble_cfg.iconXoffset, icon_y + _bubble_cfg.iconYoffset);
//        }
//
//        /* Go to next col */
//        icon_x += _bubble_cfg.iconSpaceX;
//
//        /* Next row */
//        if ((icon_x / _bubble_cfg.iconSpaceX) >= _bubble_cfg.iconColNum) {
//            is_long_row = is_long_row ? false : true;
//            printf("%d\n", is_long_row);
//            icon_x = 0;
//            icon_y += _bubble_cfg.iconSpaceY;
//        }
//
//#endif
//
//
//        /* Set App pointer as user data */
//        lv_obj_set_user_data(app, (void*)i.app);
//
//        /* Add event callback */
//        lv_obj_add_flag(app, LV_OBJ_FLAG_CLICKABLE);
//        lv_obj_set_style_img_recolor(app, lv_color_hex(0x000000), LV_STATE_PRESSED);
//        lv_obj_set_style_img_recolor_opa(app, 50, LV_STATE_PRESSED);
//        //lv_obj_add_event_cb(app, _lvgl_event_cb, LV_EVENT_ALL, (void*)_framework);
//    }
//
//    /* Hit an event to update icon zoom once */
//#if SCROLL_VER
//    lv_obj_scroll_to_y(cont, 1, LV_ANIM_OFF);
//#else
//    lv_obj_scroll_to_x(cont, 1, LV_ANIM_OFF);
//#endif
}

void SystemInfosView::Group_Init()
{
    lv_group_t* group = lv_group_get_default();
    lv_group_set_wrap(group, true);
    lv_group_set_focus_cb(group, onFocus);

    item_t* item_grp = ((item_t*)&ui);

    /* Reverse adding to group makes encoder operation more comfortable */
    //for (int i = sizeof(ui) / sizeof(item_t) - 1; i >= 0; i--)
    //{
    //    lv_group_add_obj(group, item_grp[i].icon);
    //}

    //lv_group_focus_obj(item_grp[0].icon);
}

void SystemInfosView::Delete()
{
 /*   lv_group_set_focus_cb(lv_group_get_default(), nullptr);
    Style_Reset();*/
}

void SystemInfosView::SetScrollToY(lv_obj_t* obj, lv_coord_t y, lv_anim_enable_t en)
{
    lv_coord_t scroll_y = lv_obj_get_scroll_y(obj);
    lv_coord_t diff = -y + scroll_y;

    lv_obj_scroll_by(obj, 0, diff, en);
}

void SystemInfosView::onFocus(lv_group_t* g)
{
    lv_obj_t* icon = lv_group_get_focused(g);
    lv_obj_t* cont = lv_obj_get_parent(icon);
    lv_coord_t y = lv_obj_get_y(cont);
    lv_obj_scroll_to_y(lv_obj_get_parent(cont), y, LV_ANIM_ON);
}

void SystemInfosView::Style_Init()
{
    lv_style_init(&style.icon);
    lv_style_set_width(&style.icon, 220);
    lv_style_set_bg_color(&style.icon, lv_color_black());
    lv_style_set_bg_opa(&style.icon, LV_OPA_COVER);
    lv_style_set_text_font(&style.icon, ResourcePool::GetFont("bahnschrift_17"));
    lv_style_set_text_color(&style.icon, lv_color_white());

    lv_style_init(&style.focus);
    lv_style_set_width(&style.focus, 70);
    lv_style_set_border_side(&style.focus, LV_BORDER_SIDE_RIGHT);
    lv_style_set_border_width(&style.focus, 2);
    lv_style_set_border_color(&style.focus, lv_color_hex(0xff931e));

    static const lv_style_prop_t style_prop[] =
    {
        LV_STYLE_WIDTH,
        LV_STYLE_PROP_INV
    };

    static lv_style_transition_dsc_t trans;
    lv_style_transition_dsc_init(
        &trans,
        style_prop,
        lv_anim_path_overshoot,
        200,
        0,
        nullptr
    );
    lv_style_set_transition(&style.focus, &trans);
    lv_style_set_transition(&style.icon, &trans);

    lv_style_init(&style.info);
    lv_style_set_text_font(&style.info, ResourcePool::GetFont("bahnschrift_13"));
    lv_style_set_text_color(&style.info, lv_color_hex(0x999999));

    lv_style_init(&style.data);
    lv_style_set_text_font(&style.data, ResourcePool::GetFont("bahnschrift_13"));
    lv_style_set_text_color(&style.data, lv_color_white());
}

void SystemInfosView::Style_Reset()
{
    lv_style_reset(&style.icon);
    lv_style_reset(&style.info);
    lv_style_reset(&style.data);
    lv_style_reset(&style.focus);
}

void SystemInfosView::Item_Create(
    item_t* item,
    lv_obj_t* par,
    const char* name,
    const char* img_src
)
{
    lv_obj_t* cont = lv_obj_create(par);
    lv_obj_remove_style_all(cont);
    lv_obj_set_size(cont, 397, 397);
    lv_obj_clear_flag(cont, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_clear_flag(cont, LV_OBJ_FLAG_GESTURE_BUBBLE);      /// Flags
    ui.sport.cont = cont;
    lv_obj_set_style_bg_color(cont, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cont, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t* app = lv_img_create(cont);
    lv_img_set_src(app, ResourcePool::GetImage(img_src));
    lv_obj_set_width(app, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(app, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(app, LV_ALIGN_CENTER);
    lv_obj_add_flag(app, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(app, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    //lv_obj_t* cont = lv_obj_create(par);
    //lv_obj_enable_style_refresh(false);
    //lv_obj_remove_style_all(cont);
    //lv_obj_set_width(cont, 220);
    //lv_obj_clear_flag(cont, LV_OBJ_FLAG_GESTURE_BUBBLE);
    //lv_obj_clear_flag(cont, LV_OBJ_FLAG_SCROLLABLE);
    //lv_img_set_src(cont, ResourcePool::GetImage(img_src));
    //lv_obj_set_align(cont, LV_ALIGN_CENTER);
    //item->cont = cont;

    //lv_obj_t* label = lv_label_create(icon);
    //lv_obj_enable_style_refresh(false);
    //lv_label_set_text(label, name);
    //item->icon = icon;

    ///* infos */
    //label = lv_label_create(cont);
    //lv_obj_enable_style_refresh(false);
    //lv_label_set_text(label, infos);
    //lv_obj_add_style(label, &style.info, 0);
    //lv_obj_align(label, LV_ALIGN_LEFT_MID, 75, 0);
    //item->labelInfo = label;

    ///* datas */
    //label = lv_label_create(cont);
    //lv_obj_enable_style_refresh(false);
    //lv_label_set_text(label, "-");
    //lv_obj_add_style(label, &style.data, 0);
    //lv_obj_align(label, LV_ALIGN_CENTER, 60, 0);
    //item->labelData = label;

    //lv_obj_move_foreground(icon);
    //lv_obj_enable_style_refresh(true);

    ///* get real max height */
    //lv_obj_update_layout(item->labelInfo);
    //lv_coord_t height = lv_obj_get_height(item->labelInfo);
    //height = LV_MAX(height, ITEM_HEIGHT_MIN);
    //lv_obj_set_height(cont, height);
    //lv_obj_set_height(icon, height);
}

void SystemInfosView::SetSport(
    float trip,
    const char* time,
    float maxSpd
)
{
    lv_label_set_text_fmt(
        ui.sport.labelData,
        "%0.2fkm\n"
        "%s\n"
        "%0.1fkm/h",
        trip,
        time,
        maxSpd
    );
}

void SystemInfosView::SetGPS(
    float lat,
    float lng,
    float alt,
    const char* utc,
    float course,
    float speed
)
{
  /*  lv_label_set_text_fmt(
        ui.gps.labelData,
        "%0.6f\n"
        "%0.6f\n"
        "%0.2fm\n"
        "%s\n"
        "%0.1f deg\n"
        "%0.1fkm/h",
        lat,
        lng,
        alt,
        utc,
        course,
        speed
    );*/
}

void SystemInfosView::SetMAG(
    float dir,
    int x,
    int y,
    int z
)
{
   /* lv_label_set_text_fmt(
        ui.mag.labelData,
        "%0.1f deg\n"
        "%d\n"
        "%d\n"
        "%d",
        dir,
        x,
        y,
        z
    );*/
}

void SystemInfosView::SetIMU(
    int step,
    const char* info
)
{
    /*lv_label_set_text_fmt(
        ui.imu.labelData,
        "%d\n"
        "%s",
        step,
        info
    );*/
}

void SystemInfosView::SetRTC(
    const char* dateTime
)
{
 /*   lv_label_set_text(
        ui.rtc.labelData,
        dateTime
    );*/
}

void SystemInfosView::SetBattery(
    int usage,
    float voltage,
    const char* state
)
{
 /*   lv_label_set_text_fmt(
        ui.battery.labelData,
        "%d%%\n"
        "%0.2fV\n"
        "%s",
        usage,
        voltage,
        state
    );*/
}

void SystemInfosView::SetStorage(
    const char* detect,
    const char* size,
    const char* type,
    const char* version
)
{
  /*  lv_label_set_text_fmt(
        ui.storage.labelData,
        "%s\n"
        "%s\n"
        "%s\n"
        "%s",
        detect,
        size,
        type,
        version
    );*/
}

void SystemInfosView::SetSystem(
    const char* firmVer,
    const char* authorName,
    const char* lvglVer,
    const char* bootTime,
    const char* compilerName,
    const char* bulidTime
)
{
   /* lv_label_set_text_fmt(
        ui.system.labelData,
        "%s\n"
        "%s\n"
        "%s\n"
        "%s\n"
        "%s\n"
        "%s",
        firmVer,
        authorName,
        lvglVer,
        bootTime,
        compilerName,
        bulidTime
    );*/
}
