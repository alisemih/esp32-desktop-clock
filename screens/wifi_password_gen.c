/**
 * @file wifi_password_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "wifi_password_gen.h"
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

lv_obj_t * wifi_password_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        if (wifi_password == NULL) wifi_password = lv_obj_create(NULL);
        lv_obj_t * lv_obj_0 = wifi_password;
        lv_obj_set_name_static(lv_obj_0, "wifi_password_#");
        lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_top(lv_obj_0, 26, 0);
        lv_obj_set_style_pad_bottom(lv_obj_0, 24, 0);
        lv_obj_set_style_pad_left(lv_obj_0, 40, 0);
        lv_obj_set_style_pad_right(lv_obj_0, 40, 0);
        lv_obj_set_style_pad_row(lv_obj_0, 14, 0);

        lv_obj_add_style(lv_obj_0, &screen_root, 0);
        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_1, lv_pct(100));
        lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_main_place(lv_obj_1, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
        lv_obj_set_style_flex_cross_place(lv_obj_1, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_add_style(lv_obj_1, &plain, 0);
        lv_obj_t * back = lv_obj_create(lv_obj_1);
        lv_obj_set_name(back, "back");
        lv_obj_set_width(back, LV_SIZE_CONTENT);
        lv_obj_set_height(back, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(back, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(back, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(back, 8, 0);
        lv_obj_add_style(back, &plain, 0);
        lv_obj_t * lv_image_0 = lv_image_create(back);
        lv_image_set_src(lv_image_0, ui_back);
        lv_obj_set_style_image_recolor(lv_image_0, TEXT_2, 0);
        lv_obj_set_style_image_recolor_opa(lv_image_0, 255, 0);

        lv_obj_t * lv_label_0 = lv_label_create(back);
        lv_label_set_text(lv_label_0, "GERİ");
        lv_obj_set_style_text_font(lv_label_0, mono_13, 0);
        lv_obj_set_style_text_color(lv_label_0, TEXT_2, 0);
        lv_obj_set_style_text_letter_space(lv_label_0, 2, 0);

        lv_obj_add_screen_load_event(back, LV_EVENT_CLICKED, main_screen, LV_SCREEN_LOAD_ANIM_MOVE_BOTTOM, 500, 0);

        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_2, lv_pct(100));
        lv_obj_set_height(lv_obj_2, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_2, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(lv_obj_2, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_2, 14, 0);
        lv_obj_add_style(lv_obj_2, &plain, 0);
        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_2);
        lv_obj_set_width(lv_obj_3, 40);
        lv_obj_set_height(lv_obj_3, 40);
        lv_obj_set_flex_flow(lv_obj_3, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_main_place(lv_obj_3, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_flex_cross_place(lv_obj_3, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_flex_track_place(lv_obj_3, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_bg_color(lv_obj_3, BG_RAISED, 0);
        lv_obj_set_style_bg_opa(lv_obj_3, 255, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_border_color(lv_obj_3, HAIRLINE, 0);
        lv_obj_set_style_border_opa(lv_obj_3, 20, 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_3);
        lv_image_set_src(lv_image_1, ui_lock_lg);
        lv_obj_set_style_image_recolor(lv_image_1, ACCENT_WARM, 0);
        lv_obj_set_style_image_recolor_opa(lv_image_1, 255, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_2);
        lv_obj_set_width(lv_obj_4, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_4, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_4, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_row(lv_obj_4, 4, 0);
        lv_obj_add_style(lv_obj_4, &plain, 0);
        lv_obj_t * ssid = lv_label_create(lv_obj_4);
        lv_obj_set_name(ssid, "ssid");
        lv_label_bind_text(ssid, &wifi_ssid, NULL);
        lv_obj_set_style_text_font(ssid, disp_26, 0);
        lv_obj_set_style_text_color(ssid, TEXT_1, 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_4);
        lv_label_set_text(lv_label_1, "AĞA BAĞLANMAK İÇİN ŞİFREYİ GİRİN");
        lv_obj_set_style_text_font(lv_label_1, mono_12, 0);
        lv_obj_set_style_text_color(lv_label_1, TEXT_3, 0);
        lv_obj_set_style_text_letter_space(lv_label_1, 2, 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_5, lv_pct(100));
        lv_obj_set_height(lv_obj_5, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_5, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_row(lv_obj_5, 8, 0);
        lv_obj_add_style(lv_obj_5, &plain, 0);
        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_5);
        lv_label_set_text(lv_label_2, "PAROLA");
        lv_obj_set_style_text_font(lv_label_2, mono_12, 0);
        lv_obj_set_style_text_color(lv_label_2, TEXT_3, 0);
        lv_obj_set_style_text_letter_space(lv_label_2, 2, 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_5);
        lv_obj_set_width(lv_obj_6, lv_pct(100));
        lv_obj_set_height(lv_obj_6, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_6, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(lv_obj_6, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_6, 12, 0);
        lv_obj_add_style(lv_obj_6, &plain, 0);
        lv_obj_t * password = lv_textarea_create(lv_obj_6);
        lv_obj_set_name(password, "password");
        lv_obj_set_flex_grow(password, 1);
        lv_obj_set_height(password, 58);
        lv_textarea_set_one_line(password, true);
        lv_textarea_set_password_mode(password, true);
        lv_textarea_set_placeholder_text(password, "Ağ parolası");
        lv_obj_set_style_text_font(password, mono_26, 0);
        lv_obj_add_style(password, &field_focus, 0);

        lv_obj_t * reveal = lv_button_create(lv_obj_6);
        lv_obj_set_name(reveal, "reveal");
        lv_obj_set_width(reveal, 58);
        lv_obj_set_height(reveal, 58);
        lv_obj_set_style_bg_color(reveal, BG_WELL, 0);
        lv_obj_set_style_bg_opa(reveal, 255, 0);
        lv_obj_set_style_radius(reveal, 15, 0);
        lv_obj_set_style_border_color(reveal, HAIRLINE, 0);
        lv_obj_set_style_border_opa(reveal, 20, 0);
        lv_obj_set_style_border_width(reveal, 1, 0);
        lv_obj_t * lv_image_2 = lv_image_create(reveal);
        lv_image_set_src(lv_image_2, ui_eye);
        lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
        lv_obj_set_style_image_recolor(lv_image_2, TEXT_2, 0);
        lv_obj_set_style_image_recolor_opa(lv_image_2, 255, 0);

        lv_obj_t * connect = lv_button_create(lv_obj_6);
        lv_obj_set_name(connect, "connect");
        lv_obj_set_width(connect, 150);
        lv_obj_set_height(connect, 58);
        lv_obj_add_style(connect, &key_accent, 0);
        lv_obj_t * lv_label_3 = lv_label_create(connect);
        lv_label_set_text(lv_label_3, "BAĞLAN");
        lv_obj_set_align(lv_label_3, LV_ALIGN_CENTER);
        lv_obj_set_style_text_font(lv_label_3, mono_15, 0);
        lv_obj_set_style_text_color(lv_label_3, BG_BASE, 0);
        lv_obj_set_style_text_letter_space(lv_label_3, 2, 0);

        lv_obj_add_screen_load_event(connect, LV_EVENT_CLICKED, main_screen, LV_SCREEN_LOAD_ANIM_MOVE_BOTTOM, 500, 0);

        lv_obj_t * keyboard = lv_keyboard_create(lv_obj_0);
        lv_obj_set_name(keyboard, "keyboard");
        lv_obj_set_width(keyboard, lv_pct(100));
        lv_obj_set_flex_grow(keyboard, 1);
        lv_keyboard_set_mode(keyboard, LV_KEYBOARD_MODE_TEXT_LOWER);
        lv_obj_set_style_bg_color(keyboard, BG_BASE, 0);
        lv_obj_set_style_bg_opa(keyboard, 255, 0);
        lv_obj_set_style_pad_all(keyboard, 0, 0);
        lv_obj_set_style_border_width(keyboard, 0, 0);
        lv_obj_set_style_pad_row(keyboard, 8, 0);
        lv_obj_set_style_pad_column(keyboard, 8, 0);
        lv_obj_set_style_bg_color(keyboard, BG_RAISED, LV_PART_ITEMS);
        lv_obj_set_style_bg_opa(keyboard, 255, LV_PART_ITEMS);
        lv_obj_set_style_radius(keyboard, 10, LV_PART_ITEMS);
        lv_obj_set_style_border_color(keyboard, HAIRLINE, LV_PART_ITEMS);
        lv_obj_set_style_border_opa(keyboard, 20, LV_PART_ITEMS);
        lv_obj_set_style_border_width(keyboard, 1, LV_PART_ITEMS);
        lv_obj_set_style_text_color(keyboard, TEXT_2, LV_PART_ITEMS);
        lv_obj_set_style_bg_color(keyboard, BG_WELL, LV_PART_ITEMS | LV_STATE_CHECKED);
        lv_obj_set_style_bg_opa(keyboard, 255, LV_PART_ITEMS | LV_STATE_CHECKED);
        lv_obj_set_style_text_color(keyboard, TEXT_2, LV_PART_ITEMS | LV_STATE_CHECKED);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

