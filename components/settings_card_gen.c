/**
 * @file settings_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "settings_card_gen.h"
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

lv_obj_t * settings_card_create(lv_obj_t * parent, const void * icon, const char * title, const char * subtitle)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(parent);
        lv_obj_set_name_static(lv_obj_0, "settings_card_#");
        lv_obj_set_width(lv_obj_0, lv_pct(100));
        lv_obj_set_height(lv_obj_0, 88);
        lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_0, 18, 0);

        lv_obj_add_style(lv_obj_0, &hub_card, 0);
        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_1, 44);
        lv_obj_set_height(lv_obj_1, 44);
        lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_main_place(lv_obj_1, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_flex_cross_place(lv_obj_1, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_flex_track_place(lv_obj_1, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_bg_color(lv_obj_1, BG_WELL, 0);
        lv_obj_set_style_bg_opa(lv_obj_1, 255, 0);
        lv_obj_set_style_radius(lv_obj_1, 12, 0);
        lv_obj_set_style_border_color(lv_obj_1, HAIRLINE, 0);
        lv_obj_set_style_border_opa(lv_obj_1, 20, 0);
        lv_obj_set_style_border_width(lv_obj_1, 1, 0);
        lv_obj_t * card_icon = lv_image_create(lv_obj_1);
        lv_obj_set_name(card_icon, "card_icon");
        lv_image_set_src(card_icon, icon);
        lv_obj_set_style_image_recolor(card_icon, TEXT_2, 0);
        lv_obj_set_style_image_recolor_opa(card_icon, 255, 0);

        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
        lv_obj_set_flex_grow(lv_obj_2, 1);
        lv_obj_set_height(lv_obj_2, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_2, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_row(lv_obj_2, 4, 0);
        lv_obj_add_style(lv_obj_2, &plain, 0);
        lv_obj_t * card_title = lv_label_create(lv_obj_2);
        lv_obj_set_name(card_title, "card_title");
        lv_label_set_text(card_title, title);
        lv_obj_set_style_text_font(card_title, mono_19, 0);
        lv_obj_set_style_text_color(card_title, TEXT_1, 0);

        lv_obj_t * card_sub = lv_label_create(lv_obj_2);
        lv_obj_set_name(card_sub, "card_sub");
        lv_label_set_text(card_sub, subtitle);
        lv_obj_set_style_text_font(card_sub, mono_12, 0);
        lv_obj_set_style_text_color(card_sub, TEXT_3, 0);

        lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
        lv_image_set_src(lv_image_0, ui_chevron);
        lv_obj_set_style_image_recolor(lv_image_0, TEXT_3, 0);
        lv_obj_set_style_image_recolor_opa(lv_image_0, 255, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

