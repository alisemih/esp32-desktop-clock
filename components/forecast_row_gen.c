/**
 * @file forecast_row_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "forecast_row_gen.h"
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

lv_obj_t * forecast_row_create(lv_obj_t * parent, const char * day, const void * icon, const char * cond, const char * lo, const char * hi, int32_t lo_val, int32_t hi_val)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(parent);
        lv_obj_set_name_static(lv_obj_0, "forecast_row_#");
        lv_obj_set_width(lv_obj_0, lv_pct(100));
        lv_obj_set_height(lv_obj_0, 76);
        lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_flex_track_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_0, 20, 0);

        lv_obj_add_style(lv_obj_0, &plain, 0);
        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_1, 214);
        lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(lv_obj_1, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_1, 16, 0);
        lv_obj_add_style(lv_obj_1, &plain, 0);
        lv_obj_t * daily_icon = lv_image_create(lv_obj_1);
        lv_obj_set_name(daily_icon, "daily_icon");
        lv_image_set_src(daily_icon, icon);

        lv_obj_t * daily_label = lv_label_create(lv_obj_1);
        lv_obj_set_name(daily_label, "daily_label");
        lv_label_set_text(daily_label, day);
        lv_obj_set_style_text_font(daily_label, mono_17, 0);
        lv_obj_set_style_text_color(daily_label, TEXT_1, 0);

        lv_obj_t * daily_cond = lv_label_create(lv_obj_0);
        lv_obj_set_name(daily_cond, "daily_cond");
        lv_label_set_text(daily_cond, cond);
        lv_obj_set_flex_grow(daily_cond, 1);
        lv_obj_set_style_text_font(daily_cond, mono_15, 0);
        lv_obj_set_style_text_color(daily_cond, TEXT_2, 0);

        lv_obj_t * daily_lo = lv_label_create(lv_obj_0);
        lv_obj_set_name(daily_lo, "daily_lo");
        lv_label_set_text(daily_lo, lo);
        lv_obj_set_width(daily_lo, 40);
        lv_obj_set_style_text_align(daily_lo, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_font(daily_lo, mono_15, 0);
        lv_obj_set_style_text_color(daily_lo, ACCENT_COOL, 0);

        lv_obj_t * range = lv_bar_create(lv_obj_0);
        lv_obj_set_name(range, "range");
        lv_obj_set_width(range, 200);
        lv_obj_set_height(range, 6);
        lv_bar_set_mode(range, LV_BAR_MODE_RANGE);
        lv_bar_set_min_value(range, 16);
        lv_bar_set_max_value(range, 29);
        lv_bar_set_start_value(range, lo_val, false);
        lv_bar_set_value(range, hi_val, false);
        lv_obj_set_style_radius(range, 3, LV_PART_INDICATOR);
        lv_obj_set_style_bg_color(range, ACCENT_COOL, LV_PART_INDICATOR);
        lv_obj_set_style_bg_grad_color(range, ACCENT_WARM, LV_PART_INDICATOR);
        lv_obj_set_style_bg_grad_dir(range, LV_GRAD_DIR_HOR, LV_PART_INDICATOR);
        lv_obj_add_style(range, &track, 0);

        lv_obj_t * daily_hi = lv_label_create(lv_obj_0);
        lv_obj_set_name(daily_hi, "daily_hi");
        lv_label_set_text(daily_hi, hi);
        lv_obj_set_width(daily_hi, 40);
        lv_obj_set_style_text_font(daily_hi, mono_15, 0);
        lv_obj_set_style_text_color(daily_hi, ACCENT_WARM, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

