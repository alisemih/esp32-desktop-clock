/**
 * @file hour_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "hour_card_gen.h"
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

lv_obj_t * hour_card_create(lv_obj_t * parent, const char * time, const void * icon, const char * temp, const char * pop, lv_color_t accent, lv_color_t pop_color)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(parent);
        lv_obj_set_name_static(lv_obj_0, "hour_card_#");
        lv_obj_set_width(lv_obj_0, 84);
        lv_obj_set_height(lv_obj_0, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_row(lv_obj_0, 11, 0);

        lv_obj_add_style(lv_obj_0, &card, 0);
        lv_obj_t * hourly_time = lv_label_create(lv_obj_0);
        lv_obj_set_name(hourly_time, "hourly_time");
        lv_label_set_text(hourly_time, time);
        lv_obj_set_style_text_font(hourly_time, mono_13, 0);
        lv_obj_set_style_text_color(hourly_time, accent, 0);

        lv_obj_t * hourly_icon = lv_image_create(lv_obj_0);
        lv_obj_set_name(hourly_icon, "hourly_icon");
        lv_image_set_src(hourly_icon, icon);

        lv_obj_t * hourly_temp = lv_label_create(lv_obj_0);
        lv_obj_set_name(hourly_temp, "hourly_temp");
        lv_label_set_text(hourly_temp, temp);
        lv_obj_set_style_text_font(hourly_temp, mono_19, 0);
        lv_obj_set_style_text_color(hourly_temp, TEXT_1, 0);

        lv_obj_t * hourly_pop = lv_label_create(lv_obj_0);
        lv_obj_set_name(hourly_pop, "hourly_pop");
        lv_label_set_text(hourly_pop, pop);
        lv_obj_set_style_text_font(hourly_pop, mono_12, 0);
        lv_obj_set_style_text_color(hourly_pop, pop_color, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

