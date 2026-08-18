/**
 * @file settings_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "settings_gen.h"
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

lv_obj_t * settings_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        if (settings == NULL) settings = lv_obj_create(NULL);
        lv_obj_t * lv_obj_0 = settings;
        lv_obj_set_name_static(lv_obj_0, "settings_#");
        lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_top(lv_obj_0, 32, 0);
        lv_obj_set_style_pad_bottom(lv_obj_0, 26, 0);
        lv_obj_set_style_pad_left(lv_obj_0, 44, 0);
        lv_obj_set_style_pad_right(lv_obj_0, 44, 0);
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

        lv_obj_add_screen_load_event(back, LV_EVENT_CLICKED, main_screen, LV_SCREEN_LOAD_ANIM_MOVE_BOTTOM, 300, 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
        lv_label_set_text(lv_label_1, "SÜRÜM 1.4.2");
        lv_obj_set_style_text_font(lv_label_1, mono_13, 0);
        lv_obj_set_style_text_color(lv_label_1, TEXT_3, 0);
        lv_obj_set_style_text_letter_space(lv_label_1, 2, 0);

        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_2, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_2, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_2, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_row(lv_obj_2, 6, 0);
        lv_obj_add_style(lv_obj_2, &plain, 0);
        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_2);
        lv_label_set_text(lv_label_2, "Ayarlar");
        lv_obj_set_style_text_font(lv_label_2, disp_44, 0);
        lv_obj_set_style_text_color(lv_label_2, TEXT_1, 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_2);
        lv_obj_set_width(lv_obj_3, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_3, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_3, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(lv_obj_3, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_3, 9, 0);
        lv_obj_add_style(lv_obj_3, &plain, 0);
        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_3);
        lv_obj_set_width(lv_obj_4, 6);
        lv_obj_set_height(lv_obj_4, 6);
        lv_obj_set_style_radius(lv_obj_4, 3, 0);
        lv_obj_set_style_bg_color(lv_obj_4, ACCENT_WARM, 0);
        lv_obj_set_style_bg_opa(lv_obj_4, 255, 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_3);
        lv_label_set_text(lv_label_3, "3 KATEGORİ · SİSTEM AYARLARI");
        lv_obj_set_style_text_font(lv_label_3, mono_13, 0);
        lv_obj_set_style_text_color(lv_label_3, TEXT_3, 0);
        lv_obj_set_style_text_letter_space(lv_label_3, 2, 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_5, lv_pct(100));
        lv_obj_set_flex_grow(lv_obj_5, 1);
        lv_obj_set_flex_flow(lv_obj_5, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_row(lv_obj_5, 14, 0);
        lv_obj_add_style(lv_obj_5, &plain, 0);
        lv_obj_t * card_wifi = settings_card_create(lv_obj_5, ui_wifi_plain, "Wi-Fi", "Yılmaz_Ev ağına bağlı");
        lv_obj_set_name(card_wifi, "card_wifi");
        lv_obj_add_screen_load_event(card_wifi, LV_EVENT_CLICKED, wifi_list, LV_SCREEN_LOAD_ANIM_MOVE_LEFT, 300, 0);

        lv_obj_t * card_time = settings_card_create(lv_obj_5, ui_clock, "Saat ve Tarih", "09:42 · 17 Ağustos 2026");
        lv_obj_set_name(card_time, "card_time");
        lv_obj_add_screen_load_event(card_time, LV_EVENT_CLICKED, time_date, LV_SCREEN_LOAD_ANIM_MOVE_LEFT, 300, 0);

        lv_obj_t * card_loc = settings_card_create(lv_obj_5, ui_pin_lg, "Konum", "İstanbul, Marmara Bölgesi");
        lv_obj_set_name(card_loc, "card_loc");
        lv_obj_add_screen_load_event(card_loc, LV_EVENT_CLICKED, location, LV_SCREEN_LOAD_ANIM_MOVE_LEFT, 300, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

