/**
 * @file day_slot_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "day_slot_gen.h"
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

lv_obj_t * day_slot_create(lv_obj_t * parent, const void * icon, const char * label)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(parent);
        lv_obj_set_name_static(lv_obj_0, "day_slot_#");
        lv_obj_set_flex_grow(lv_obj_0, 1);
        lv_obj_set_height(lv_obj_0, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_flex_main_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_flex_track_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_row(lv_obj_0, 12, 0);

        lv_obj_add_style(lv_obj_0, &plain, 0);
        lv_obj_t * period_icon = lv_image_create(lv_obj_0);
        lv_obj_set_name(period_icon, "period_icon");
        lv_image_set_src(period_icon, icon);

        lv_obj_t * period_label = lv_label_create(lv_obj_0);
        lv_obj_set_name(period_label, "period_label");
        lv_label_set_text(period_label, label);
        lv_obj_set_style_text_font(period_label, mono_12, 0);
        lv_obj_set_style_text_color(period_label, TEXT_2, 0);
        lv_obj_set_style_text_letter_space(period_label, 2, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

