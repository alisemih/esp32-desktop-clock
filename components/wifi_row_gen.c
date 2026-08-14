/**
 * @file wifi_row_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "wifi_row_gen.h"
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

lv_obj_t * wifi_row_create(lv_obj_t * parent, const void * icon, const char * ssid, const char * meta, lv_color_t accent, int32_t lock_opa, int32_t chev_opa, const char * badge_text, int32_t badge_opa)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(parent);
        lv_obj_set_name_static(lv_obj_0, "wifi_row_#");
        lv_obj_set_width(lv_obj_0, lv_pct(100));
        lv_obj_set_height(lv_obj_0, 58);
        lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_0, 16, 0);
        lv_obj_set_style_pad_left(lv_obj_0, 8, 0);
        lv_obj_set_style_pad_right(lv_obj_0, 8, 0);

        lv_obj_add_subject_set_string_event(lv_obj_0, &wifi_ssid, LV_EVENT_CLICKED, ssid);
        lv_obj_add_screen_load_event(lv_obj_0, LV_EVENT_CLICKED, wifi_password, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
        lv_obj_add_style(lv_obj_0, &plain, 0);
        lv_obj_t * signal = lv_image_create(lv_obj_0);
        lv_obj_set_name(signal, "signal");
        lv_image_set_src(signal, icon);

        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_flex_grow(lv_obj_1, 1);
        lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_row(lv_obj_1, 3, 0);
        lv_obj_add_style(lv_obj_1, &plain, 0);
        lv_obj_t * row_ssid = lv_label_create(lv_obj_1);
        lv_obj_set_name(row_ssid, "row_ssid");
        lv_label_set_text(row_ssid, ssid);
        lv_obj_set_style_text_font(row_ssid, mono_17, 0);
        lv_obj_set_style_text_color(row_ssid, TEXT_1, 0);

        lv_obj_t * row_meta = lv_label_create(lv_obj_1);
        lv_obj_set_name(row_meta, "row_meta");
        lv_label_set_text(row_meta, meta);
        lv_obj_set_style_text_font(row_meta, mono_12, 0);
        lv_obj_set_style_text_color(row_meta, TEXT_3, 0);
        lv_obj_set_style_text_letter_space(row_meta, 1, 0);

        lv_obj_t * badge = lv_label_create(lv_obj_0);
        lv_obj_set_name(badge, "badge");
        lv_label_set_text(badge, badge_text);
        lv_obj_set_style_opa(badge, badge_opa, 0);
        lv_obj_set_style_text_font(badge, mono_12, 0);
        lv_obj_set_style_text_color(badge, ACCENT_COOL, 0);
        lv_obj_set_style_text_letter_space(badge, 2, 0);
        lv_obj_set_style_bg_color(badge, ACCENT_COOL, 0);
        lv_obj_set_style_bg_opa(badge, 36, 0);
        lv_obj_set_style_radius(badge, 7, 0);
        lv_obj_set_style_pad_top(badge, 5, 0);
        lv_obj_set_style_pad_bottom(badge, 5, 0);
        lv_obj_set_style_pad_left(badge, 9, 0);
        lv_obj_set_style_pad_right(badge, 9, 0);

        lv_obj_t * lock = lv_image_create(lv_obj_0);
        lv_obj_set_name(lock, "lock");
        lv_image_set_src(lock, ui_lock);
        lv_obj_set_style_opa(lock, lock_opa, 0);
        lv_obj_set_style_image_recolor(lock, accent, 0);
        lv_obj_set_style_image_recolor_opa(lock, 255, 0);

        lv_obj_t * chevron = lv_image_create(lv_obj_0);
        lv_obj_set_name(chevron, "chevron");
        lv_image_set_src(chevron, ui_chevron);
        lv_obj_set_style_opa(chevron, chev_opa, 0);
        lv_obj_set_style_image_recolor(chevron, accent, 0);
        lv_obj_set_style_image_recolor_opa(chevron, 255, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

