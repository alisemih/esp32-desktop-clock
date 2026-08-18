/**
 * @file stat_gauge_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "stat_gauge_gen.h"
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

lv_obj_t * stat_gauge_create(lv_obj_t * parent, int32_t value, int32_t min_value, int32_t max_value, const char * text, const char * unit, const char * caption, lv_color_t accent)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(parent);
        lv_obj_set_name_static(lv_obj_0, "stat_gauge_#");
        lv_obj_set_width(lv_obj_0, 140);
        lv_obj_set_height(lv_obj_0, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);

        lv_obj_add_style(lv_obj_0, &plain, 0);
        lv_obj_t * dial = lv_arc_create(lv_obj_0);
        lv_obj_set_name(dial, "dial");
        lv_obj_set_width(dial, 140);
        lv_obj_set_height(dial, 140);
        lv_arc_set_min_value(dial, min_value);
        lv_arc_set_max_value(dial, max_value);
        lv_arc_set_value(dial, value);
        lv_arc_set_bg_start_angle(dial, 135);
        lv_arc_set_bg_end_angle(dial, 45);
        lv_obj_set_flag(dial, LV_OBJ_FLAG_CLICKABLE, false);
        lv_obj_set_style_arc_color(dial, accent, LV_PART_INDICATOR);
        lv_obj_set_style_arc_width(dial, 12, LV_PART_INDICATOR);
        lv_obj_set_style_arc_rounded(dial, true, LV_PART_INDICATOR);
        lv_obj_add_style(dial, &gauge_track, 0);
        lv_obj_add_style(dial, &no_knob, LV_PART_KNOB);
        lv_obj_t * readout_box = lv_obj_create(dial);
        lv_obj_set_name(readout_box, "readout_box");
        lv_obj_set_align(readout_box, LV_ALIGN_CENTER);
        lv_obj_set_width(readout_box, LV_SIZE_CONTENT);
        lv_obj_set_height(readout_box, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(readout_box, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(readout_box, LV_FLEX_ALIGN_END, 0);
        lv_obj_set_style_pad_column(readout_box, 2, 0);
        lv_obj_add_style(readout_box, &plain, 0);
        lv_obj_t * readout = lv_label_create(readout_box);
        lv_obj_set_name(readout, "readout");
        lv_label_set_text(readout, text);
        lv_obj_set_style_text_font(readout, mono_34, 0);
        lv_obj_set_style_text_color(readout, TEXT_1, 0);

        lv_obj_t * gauge_unit = lv_label_create(readout_box);
        lv_obj_set_name(gauge_unit, "gauge_unit");
        lv_label_set_text(gauge_unit, unit);
        lv_obj_set_style_text_font(gauge_unit, mono_19, 0);
        lv_obj_set_style_text_color(gauge_unit, TEXT_1, 0);
        lv_obj_set_style_pad_bottom(gauge_unit, 4, 0);
        lv_obj_set_style_pad_left(gauge_unit, 3, 0);

        lv_obj_t * gauge_caption = lv_label_create(lv_obj_0);
        lv_obj_set_name(gauge_caption, "gauge_caption");
        lv_label_set_text(gauge_caption, caption);
        lv_obj_set_style_text_font(gauge_caption, mono_12, 0);
        lv_obj_set_style_text_color(gauge_caption, TEXT_3, 0);
        lv_obj_set_style_text_letter_space(gauge_caption, 2, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

