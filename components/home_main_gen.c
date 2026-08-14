/**
 * @file home_main_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "home_main_gen.h"
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

lv_obj_t * home_main_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(parent);
        lv_obj_set_name_static(lv_obj_0, "home_main_#");
        lv_obj_set_width(lv_obj_0, 800);
        lv_obj_set_height(lv_obj_0, 480);
        lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_flex_main_place(lv_obj_0, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
        lv_obj_set_style_pad_top(lv_obj_0, 36, 0);
        lv_obj_set_style_pad_bottom(lv_obj_0, 30, 0);
        lv_obj_set_style_pad_left(lv_obj_0, 48, 0);
        lv_obj_set_style_pad_right(lv_obj_0, 48, 0);

        lv_obj_add_style(lv_obj_0, &screen_root, 0);
        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_1, lv_pct(100));
        lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_main_place(lv_obj_1, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
        lv_obj_set_style_flex_cross_place(lv_obj_1, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_add_style(lv_obj_1, &plain, 0);
        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
        lv_obj_set_width(lv_obj_2, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_2, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_2, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(lv_obj_2, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_2, 10, 0);
        lv_obj_add_style(lv_obj_2, &plain, 0);
        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_2);
        lv_obj_set_width(lv_obj_3, 7);
        lv_obj_set_height(lv_obj_3, 7);
        lv_obj_set_style_radius(lv_obj_3, 4, 0);
        lv_obj_set_style_bg_color(lv_obj_3, ACCENT_WARM, 0);
        lv_obj_set_style_bg_opa(lv_obj_3, 255, 0);
        lv_obj_set_style_border_width(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_2);
        lv_label_set_text(lv_label_0, "BBS");
        lv_obj_set_style_text_font(lv_label_0, mono_15, 0);
        lv_obj_set_style_text_color(lv_label_0, TEXT_2, 0);
        lv_obj_set_style_text_letter_space(lv_label_0, 3, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_4, lv_pct(100));
        lv_obj_set_height(lv_obj_4, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_4, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_main_place(lv_obj_4, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
        lv_obj_set_style_flex_cross_place(lv_obj_4, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_add_style(lv_obj_4, &plain, 0);
        lv_obj_t * clock_block = lv_obj_create(lv_obj_4);
        lv_obj_set_name(clock_block, "clock_block");
        lv_obj_set_width(clock_block, LV_SIZE_CONTENT);
        lv_obj_set_height(clock_block, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(clock_block, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_row(clock_block, 0, 0);
        lv_obj_add_style(clock_block, &plain, 0);
        lv_obj_t * clock = lv_label_create(clock_block);
        lv_obj_set_name(clock, "clock");
        lv_label_bind_text(clock, &clock_time, NULL);
        lv_obj_set_style_text_font(clock, disp_142, 0);
        lv_obj_set_style_text_color(clock, TEXT_1, 0);
        lv_obj_set_style_text_letter_space(clock, -3, 0);

        lv_obj_t * date = lv_label_create(clock_block);
        lv_obj_set_name(date, "date");
        lv_label_bind_text(date, &clock_date, NULL);
        lv_obj_set_style_text_font(date, mono_17, 0);
        lv_obj_set_style_text_color(date, TEXT_2, 0);
        lv_obj_set_style_text_letter_space(date, 2, 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_4);
        lv_obj_set_width(lv_obj_5, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_5, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_5, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(lv_obj_5, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_5, 10, 0);
        lv_obj_add_style(lv_obj_5, &plain, 0);
        lv_obj_t * gauge_temp = stat_gauge_create(lv_obj_5, 22, 0, 60, "22", "°C", "", ACCENT_WARM);
        lv_obj_set_name(gauge_temp, "gauge_temp");

        lv_obj_t * gauge_hum = stat_gauge_create(lv_obj_5, 50, 0, 100, "48", "%", "", ACCENT_COOL);
        lv_obj_set_name(gauge_hum, "gauge_hum");

        lv_obj_t * daily_strip = lv_obj_create(lv_obj_0);
        lv_obj_set_name(daily_strip, "daily_strip");
        lv_obj_set_width(daily_strip, lv_pct(100));
        lv_obj_set_height(daily_strip, 132);
        lv_obj_set_flex_flow(daily_strip, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_track_place(daily_strip, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_gap(daily_strip, 10, 0);
        lv_obj_set_style_pad_hor(daily_strip, 12, 0);
        lv_obj_add_style(daily_strip, &panel, 0);
        day_slot_create(daily_strip, wx_partly_46, "SABAH");

        lv_obj_t * lv_obj_6 = lv_obj_create(daily_strip);
        lv_obj_set_width(lv_obj_6, 1);
        lv_obj_set_height(lv_obj_6, 56);
        lv_obj_add_style(lv_obj_6, &divider, 0);

        day_slot_create(daily_strip, wx_sun_46, "ÖĞLE");

        lv_obj_t * lv_obj_7 = lv_obj_create(daily_strip);
        lv_obj_set_width(lv_obj_7, 1);
        lv_obj_set_height(lv_obj_7, 56);
        lv_obj_add_style(lv_obj_7, &divider, 0);

        day_slot_create(daily_strip, wx_partly_46, "İKİNDİ");

        lv_obj_t * lv_obj_8 = lv_obj_create(daily_strip);
        lv_obj_set_width(lv_obj_8, 1);
        lv_obj_set_height(lv_obj_8, 56);
        lv_obj_add_style(lv_obj_8, &divider, 0);

        day_slot_create(daily_strip, wx_rain_46, "AKŞAM");

        lv_obj_t * lv_obj_9 = lv_obj_create(daily_strip);
        lv_obj_set_width(lv_obj_9, 1);
        lv_obj_set_height(lv_obj_9, 56);
        lv_obj_add_style(lv_obj_9, &divider, 0);

        day_slot_create(daily_strip, wx_moon_46, "GECE");

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

