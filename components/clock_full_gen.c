/**
 * @file clock_full_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "clock_full_gen.h"
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

lv_obj_t * clock_full_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(parent);
        lv_obj_set_name_static(lv_obj_0, "clock_full_#");
        lv_obj_set_width(lv_obj_0, 800);
        lv_obj_set_height(lv_obj_0, 480);
        lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_flex_main_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_row(lv_obj_0, 26, 0);

        lv_obj_add_style(lv_obj_0, &screen_root, 0);
        lv_obj_t * clock = lv_label_create(lv_obj_0);
        lv_obj_set_name(clock, "clock");
        lv_label_bind_text(clock, &clock_time, NULL);
        lv_obj_set_style_text_font(clock, disp_232, 0);
        lv_obj_set_style_text_color(clock, TEXT_1, 0);
        lv_obj_set_style_text_letter_space(clock, -5, 0);

        lv_obj_t * date = lv_label_create(lv_obj_0);
        lv_obj_set_name(date, "date");
        lv_label_bind_text(date, &clock_date_long, NULL);
        lv_obj_set_style_text_font(date, mono_19, 0);
        lv_obj_set_style_text_color(date, TEXT_2, 0);
        lv_obj_set_style_text_letter_space(date, 5, 0);

        lv_obj_t * seconds = lv_bar_create(lv_obj_0);
        lv_obj_set_name(seconds, "seconds");
        lv_obj_set_width(seconds, 240);
        lv_obj_set_height(seconds, 4);
        lv_bar_set_min_value(seconds, 0);
        lv_bar_set_max_value(seconds, 59);
        lv_bar_bind_value(seconds, &clock_second);
        lv_obj_set_style_radius(seconds, 2, LV_PART_INDICATOR);
        lv_obj_set_style_bg_color(seconds, ACCENT_WARM, LV_PART_INDICATOR);
        lv_obj_add_style(seconds, &track, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

