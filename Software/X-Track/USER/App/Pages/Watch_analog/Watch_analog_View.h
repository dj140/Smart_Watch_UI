#ifndef __WATCH_ANALOG_VIEW_H
#define __WATCH_ANALOG_VIEW_H

#include "../Page.h"

namespace Page
{

class Watch_analog_View
{
public:
    void Create(lv_obj_t* root);

public:
    struct
    {
        lv_obj_t* labelTitle;
        lv_obj_t* labelTick;
        lv_obj_t* cont;
        lv_obj_t* image;
        lv_obj_t* ui_bg_2;
        lv_obj_t* ui_clock;
        lv_obj_t* ui_dots;

    } ui;

private:

};

}

#endif // !__VIEW_H
