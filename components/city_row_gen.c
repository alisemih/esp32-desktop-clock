/**
 * @file city_row_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "city_row_gen.h"
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

lv_obj_t * city_row_create(lv_obj_t * parent, const char * city, const char * region, lv_color_t accent, int32_t check_opa)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(parent);
        lv_obj_set_name_static(lv_obj_0, "city_row_#");
        lv_obj_set_width(lv_obj_0, lv_pct(100));
        lv_obj_set_height(lv_obj_0, 46);
        lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_0, 14, 0);
        lv_obj_set_style_pad_left(lv_obj_0, 10, 0);
        lv_obj_set_style_pad_right(lv_obj_0, 10, 0);

        lv_obj_add_style(lv_obj_0, &plain, 0);
        lv_obj_t * pin = lv_image_create(lv_obj_0);
        lv_obj_set_name(pin, "pin");
        lv_image_set_src(pin, ui_pin);
        lv_obj_set_style_image_recolor(pin, accent, 0);
        lv_obj_set_style_image_recolor_opa(pin, 255, 0);

        lv_obj_t * city_name = lv_label_create(lv_obj_0);
        lv_obj_set_name(city_name, "city_name");
        lv_label_set_text(city_name, city);
        lv_obj_set_style_text_font(city_name, mono_16, 0);
        lv_obj_set_style_text_color(city_name, TEXT_1, 0);

        lv_obj_t * city_region = lv_label_create(lv_obj_0);
        lv_obj_set_name(city_region, "city_region");
        lv_label_set_text(city_region, region);
        lv_obj_set_flex_grow(city_region, 1);
        lv_obj_set_style_text_font(city_region, mono_16, 0);
        lv_obj_set_style_text_color(city_region, TEXT_3, 0);

        lv_obj_t * check = lv_image_create(lv_obj_0);
        lv_obj_set_name(check, "check");
        lv_image_set_src(check, ui_check);
        lv_obj_set_style_opa(check, check_opa, 0);
        lv_obj_set_style_image_recolor(check, ACCENT_WARM, 0);
        lv_obj_set_style_image_recolor_opa(check, 255, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

