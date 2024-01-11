#include "SystemInfosView.h"

using namespace Page;

#define ITEM_HEIGHT_MIN   100
#define ITEM_PAD          ((LV_VER_RES - ITEM_HEIGHT_MIN) / 2)

void SystemInfosView::Create(lv_obj_t* root)
{
    LauncherData_t.icon_x = 0;
    LauncherData_t.icon_y = 0;
    LauncherData_t.is_long_row = true;  
    lv_obj_t* appPanel = lv_obj_create(root);
    lv_obj_remove_style_all(appPanel);

    lv_obj_set_size(appPanel, 397, 397);
    //lv_obj_clear_flag(root, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_clear_flag(appPanel, LV_OBJ_FLAG_GESTURE_BUBBLE);      /// Flags
    lv_obj_align(appPanel, LV_ALIGN_BOTTOM_MID, 0, 0);
    LauncherData_t.appPanel = appPanel;
    /* Ser style */
    lv_obj_set_style_radius(appPanel, 0, LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(appPanel, 0, LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(appPanel, 0, LV_STATE_DEFAULT);

    /* Add scroll flags */
    lv_obj_add_flag(appPanel, LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM);
    lv_obj_set_scrollbar_mode(appPanel, LV_SCROLLBAR_MODE_ON);
    lv_obj_set_scroll_dir(appPanel, LV_DIR_VER);
        /* Update bubble config */
    _bubble_cfg.iconColMax = 400 / 108;
    _bubble_cfg.iconRowMax = 400 / 108;
    _bubble_cfg.iconColNum = (13 - 1) / _bubble_cfg.iconRowMax;
    if (((13 - 1) % _bubble_cfg.iconRowMax) != 0) {
        _bubble_cfg.iconColNum++;
    }
    _bubble_cfg.iconSpaceX = 400 / _bubble_cfg.iconColMax;
    lv_coord_t gap_between_icon = (400 - 108 * _bubble_cfg.iconColMax) / (_bubble_cfg.iconColMax + 1);
    _bubble_cfg.iconSpaceY = 108 - (gap_between_icon / 2);
    _bubble_cfg.iconXoffset = -(400 / 2) + (_bubble_cfg.iconSpaceX / 2);
    _bubble_cfg.iconYoffset = -(400 / 2) + (_bubble_cfg.iconSpaceY / 2) + gap_between_icon;
    /* Item Sport */
    Item_Create(&ui.sport, appPanel,"Sport","app_icon_hdpi_settings_png");
    Item_Create(&ui.battery, appPanel, "Battery", "app_icon_hdpi_settings_png");
    Item_Create(&ui.gps, appPanel, "Battery", "app_icon_hdpi_settings_png");
    Item_Create(&ui.imu, appPanel, "Battery", "app_icon_hdpi_settings_png");
    Item_Create(&ui.mag, appPanel, "Battery", "app_icon_hdpi_settings_png");
    Item_Create(&ui.rtc, appPanel, "Battery", "app_icon_hdpi_settings_png");
    Item_Create(&ui.storage, appPanel, "Battery", "app_icon_hdpi_settings_png");
    Item_Create(&ui.system, appPanel, "Battery", "app_icon_hdpi_settings_png");
    Item_Create(&ui.battery, appPanel, "Battery", "app_icon_hdpi_settings_png");
    Item_Create(&ui.battery, appPanel, "Battery", "app_icon_hdpi_settings_png");
    Item_Create(&ui.battery, appPanel, "Battery", "app_icon_hdpi_settings_png");
    Item_Create(&ui.battery, appPanel, "Battery", "app_icon_hdpi_settings_png");
    Item_Create(&ui.battery, appPanel, "Battery", "app_icon_hdpi_settings_png");
    lv_obj_scroll_to_y(appPanel, 1, LV_ANIM_OFF);

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
void SystemInfosView::updateAppIconZoom(lv_obj_t* obj)
{
    /* Zoom the Icons when reach edge */
    lv_coord_t scroll_bar_y = lv_obj_get_scroll_y(obj);
    lv_coord_t zoom_area_half_height = 400 / 4;
    lv_coord_t zoom_area_edge_t = scroll_bar_y + 400 / 4;
    lv_coord_t zoom_area_edge_m = scroll_bar_y + 400 / 2;
    lv_coord_t zoom_area_edge_b = scroll_bar_y + 400 / 4 * 3;
    lv_coord_t icon_y = 0;
    int icon_zoom = 256;

    /* Iterate all Icons */
    for (int i = 0; i < lv_obj_get_child_cnt(obj); i++) {
        /* Update Icon y */
        icon_y = lv_obj_get_y2(lv_obj_get_child(obj, i));
        /* If at not zoom area */
        if ((icon_y >= zoom_area_edge_t) && (icon_y <= zoom_area_edge_b)) {
            /* Zoom to normal */
            icon_zoom = 256;
        }
        else {
            /* Get how far Icon is out of edge */
            icon_zoom = abs(icon_y - zoom_area_edge_m) - zoom_area_half_height;
            /* Smaller it */
            icon_zoom = 256 - icon_zoom;
            /* If hit limit */
            if (icon_zoom < 32) {
                icon_zoom = 32;
            }
        }
        /* Set zoom */
        lv_img_set_zoom(lv_obj_get_child(obj, i), icon_zoom);
    }

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

    lv_obj_t* app = lv_img_create(par);
    lv_obj_center(app);

    lv_img_set_src(app, ResourcePool::GetImage(img_src));
    lv_obj_set_width(app, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(app, LV_SIZE_CONTENT);    /// 1
    //lv_obj_set_align(app, LV_ALIGN_CENTER);
    item->cont = app;

    /* Put App in hexagon mesh */
    if (!LauncherData_t.is_long_row) {
        lv_obj_set_pos(app, LauncherData_t.icon_x + _bubble_cfg.iconSpaceX / 2 + _bubble_cfg.iconXoffset, LauncherData_t.icon_y + _bubble_cfg.iconYoffset);
        LV_LOG_USER("lv_obj_set_pos x��%d��y: %d", LauncherData_t.icon_x + _bubble_cfg.iconSpaceX / 2 + _bubble_cfg.iconXoffset, LauncherData_t.icon_y + _bubble_cfg.iconYoffset);
    }
    else {
        lv_obj_set_pos(app, LauncherData_t.icon_x + _bubble_cfg.iconXoffset, LauncherData_t.icon_y + _bubble_cfg.iconYoffset);
    }
    LauncherData_t.icon_x += _bubble_cfg.iconSpaceX;

    /* Go to next more Apps row */
    if (!LauncherData_t.is_long_row && ((LauncherData_t.icon_x / _bubble_cfg.iconSpaceX) >= (_bubble_cfg.iconColMax - 1))) {
        LauncherData_t.is_long_row = true;
        LauncherData_t.icon_x = 0;
        LauncherData_t.icon_y += _bubble_cfg.iconSpaceY;
    }
    /* Go to next less Apps row */
    else if (LauncherData_t.is_long_row && ((LauncherData_t.icon_x / _bubble_cfg.iconSpaceX) >= _bubble_cfg.iconColMax)) {
        LauncherData_t.is_long_row = false;
        LauncherData_t.icon_x = 0;
        LauncherData_t.icon_y += _bubble_cfg.iconSpaceY;
    }

    lv_obj_add_flag(app, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    //lv_obj_clear_flag(app, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    /* Add event callback */
    lv_obj_add_flag(app, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_style_img_recolor(app, lv_color_hex(0x000000), LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(app, 50, LV_STATE_PRESSED);
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
