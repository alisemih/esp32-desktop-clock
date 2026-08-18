/**
 * @file main_screen_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "main_screen_gen.h"
#include "../lvgl_ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * main_screen_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        if (main_screen == NULL) main_screen = lv_obj_create(NULL);
        lv_obj_t * lv_obj_0 = main_screen;
        lv_obj_set_name_static(lv_obj_0, "main_screen_#");
        lv_obj_set_width(lv_obj_0, 800);
        lv_obj_set_height(lv_obj_0, 480);
        lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW);
        lv_obj_set_scroll_snap_x(lv_obj_0, LV_SCROLL_SNAP_CENTER);
        lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLL_ONE, true);
        lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLL_ELASTIC, false);
        lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_AUTO);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
        lv_obj_set_style_pad_column(lv_obj_0, 0, 0);

        lv_obj_add_style(lv_obj_0, &screen_root, 0);
        lv_obj_add_style(lv_obj_0, &scroll_pill, LV_PART_SCROLLBAR);
        lv_obj_t * col_home = lv_obj_create(lv_obj_0);
        lv_obj_set_name(col_home, "col_home");
        lv_obj_set_width(col_home, 800);
        lv_obj_set_height(col_home, 480);
        lv_obj_set_flex_flow(col_home, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_scroll_snap_y(col_home, LV_SCROLL_SNAP_CENTER);
        lv_obj_set_flag(col_home, LV_OBJ_FLAG_SCROLL_ONE, true);
        lv_obj_set_flag(col_home, LV_OBJ_FLAG_SCROLL_ELASTIC, false);
        lv_obj_set_scrollbar_mode(col_home, LV_SCROLLBAR_MODE_OFF);
        lv_obj_add_style(col_home, &page_col, 0);
        home_main_create(col_home);

        clock_full_create(col_home);

        lv_obj_t * col_weather = lv_obj_create(lv_obj_0);
        lv_obj_set_name(col_weather, "col_weather");
        lv_obj_set_width(col_weather, 800);
        lv_obj_set_height(col_weather, 480);
        lv_obj_set_flex_flow(col_weather, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_scroll_snap_y(col_weather, LV_SCROLL_SNAP_CENTER);
        lv_obj_set_flag(col_weather, LV_OBJ_FLAG_SCROLL_ONE, true);
        lv_obj_set_flag(col_weather, LV_OBJ_FLAG_SCROLL_ELASTIC, false);
        lv_obj_set_scrollbar_mode(col_weather, LV_SCROLLBAR_MODE_OFF);
        lv_obj_add_style(col_weather, &page_col, 0);
        weather_hourly_create(col_weather);

        weather_daily_create(col_weather);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

