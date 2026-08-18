/**
 * @file wifi_list_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "wifi_list_gen.h"
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

lv_obj_t * wifi_list_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        if (wifi_list == NULL) wifi_list = lv_obj_create(NULL);
        lv_obj_t * lv_obj_0 = wifi_list;
        lv_obj_set_name_static(lv_obj_0, "wifi_list_#");
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
        lv_obj_t * back_weather = lv_obj_create(lv_obj_1);
        lv_obj_set_name(back_weather, "back_weather");
        lv_obj_set_width(back_weather, LV_SIZE_CONTENT);
        lv_obj_set_height(back_weather, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(back_weather, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(back_weather, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(back_weather, 10, 0);
        lv_obj_add_style(back_weather, &plain, 0);
        lv_obj_t * lv_obj_2 = lv_obj_create(back_weather);
        lv_obj_set_width(lv_obj_2, 7);
        lv_obj_set_height(lv_obj_2, 7);
        lv_obj_set_style_radius(lv_obj_2, 4, 0);
        lv_obj_set_style_bg_color(lv_obj_2, ACCENT_COOL, 0);
        lv_obj_set_style_bg_opa(lv_obj_2, 255, 0);
        lv_obj_set_style_border_width(lv_obj_2, 0, 0);

        lv_obj_t * lv_label_0 = lv_label_create(back_weather);
        lv_label_set_text(lv_label_0, "AYARLAR · WI-FI");
        lv_obj_set_style_text_font(lv_label_0, mono_15, 0);
        lv_obj_set_style_text_color(lv_label_0, TEXT_2, 0);
        lv_obj_set_style_text_letter_space(lv_label_0, 3, 0);

        lv_obj_add_screen_load_event(back_weather, LV_EVENT_CLICKED, main_screen, LV_SCREEN_LOAD_ANIM_MOVE_BOTTOM, 300, 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_1);
        lv_obj_set_width(lv_obj_3, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_3, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_3, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(lv_obj_3, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_3, 12, 0);
        lv_obj_add_style(lv_obj_3, &plain, 0);
        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_3);
        lv_label_set_text(lv_label_1, "AÇIK");
        lv_obj_set_style_text_font(lv_label_1, mono_13, 0);
        lv_obj_set_style_text_color(lv_label_1, TEXT_2, 0);
        lv_obj_set_style_text_letter_space(lv_label_1, 2, 0);

        lv_obj_t * wifi_toggle = lv_switch_create(lv_obj_3);
        lv_obj_set_name(wifi_toggle, "wifi_toggle");
        lv_obj_set_width(wifi_toggle, 46);
        lv_obj_set_height(wifi_toggle, 26);
        lv_obj_bind_checked(wifi_toggle, &wifi_enabled);
        lv_obj_add_style(wifi_toggle, &sw_track, 0);
        lv_obj_add_style(wifi_toggle, &sw_ind_off, LV_PART_INDICATOR);
        lv_obj_add_style(wifi_toggle, &sw_ind_on, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(wifi_toggle, &sw_knob, LV_PART_KNOB);
        lv_obj_add_style(wifi_toggle, &sw_knob_on, LV_PART_KNOB | LV_STATE_CHECKED);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_4, lv_pct(100));
        lv_obj_set_height(lv_obj_4, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_4, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_main_place(lv_obj_4, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
        lv_obj_set_style_flex_cross_place(lv_obj_4, LV_FLEX_ALIGN_END, 0);
        lv_obj_add_style(lv_obj_4, &plain, 0);
        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_4);
        lv_obj_set_width(lv_obj_5, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_5, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_5, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_row(lv_obj_5, 6, 0);
        lv_obj_add_style(lv_obj_5, &plain, 0);
        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_5);
        lv_label_set_text(lv_label_2, "Ağlar");
        lv_obj_set_style_text_font(lv_label_2, disp_44, 0);
        lv_obj_set_style_text_color(lv_label_2, TEXT_1, 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_5);
        lv_obj_set_width(lv_obj_6, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_6, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_6, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(lv_obj_6, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_6, 9, 0);
        lv_obj_add_style(lv_obj_6, &plain, 0);
        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_6);
        lv_obj_set_width(lv_obj_7, 6);
        lv_obj_set_height(lv_obj_7, 6);
        lv_obj_set_style_radius(lv_obj_7, 3, 0);
        lv_obj_set_style_bg_color(lv_obj_7, ACCENT_COOL, 0);
        lv_obj_set_style_bg_opa(lv_obj_7, 255, 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_6);
        lv_label_set_text(lv_label_3, "6 AĞ BULUNDU · İSTANBUL");
        lv_obj_set_style_text_font(lv_label_3, mono_13, 0);
        lv_obj_set_style_text_color(lv_label_3, TEXT_3, 0);
        lv_obj_set_style_text_letter_space(lv_label_3, 2, 0);

        lv_obj_t * rescan = lv_button_create(lv_obj_4);
        lv_obj_set_name(rescan, "rescan");
        lv_obj_set_width(rescan, LV_SIZE_CONTENT);
        lv_obj_set_height(rescan, 32);
        lv_obj_set_flex_flow(rescan, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_track_place(rescan, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(rescan, 8, 0);
        lv_obj_set_style_pad_hor(rescan, 14, 0);
        lv_obj_set_style_pad_top(rescan, 3, 0);
        lv_obj_set_style_bg_opa(rescan, 0, 0);
        lv_obj_set_style_radius(rescan, 11, 0);
        lv_obj_set_style_border_color(rescan, HAIRLINE, 0);
        lv_obj_set_style_border_opa(rescan, 26, 0);
        lv_obj_set_style_border_width(rescan, 1, 0);
        lv_obj_t * lv_image_0 = lv_image_create(rescan);
        lv_image_set_src(lv_image_0, ui_refresh);
        lv_obj_set_style_image_recolor(lv_image_0, TEXT_2, 0);
        lv_obj_set_style_image_recolor_opa(lv_image_0, 255, 0);

        lv_obj_t * lv_label_4 = lv_label_create(rescan);
        lv_label_set_text(lv_label_4, "YENİLE");
        lv_obj_set_style_text_font(lv_label_4, mono_12, 0);
        lv_obj_set_style_text_color(lv_label_4, TEXT_2, 0);
        lv_obj_set_style_text_letter_space(lv_label_4, 2, 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_8, lv_pct(100));
        lv_obj_set_flex_grow(lv_obj_8, 1);
        lv_obj_set_flex_flow(lv_obj_8, LV_FLEX_FLOW_COLUMN);
        lv_obj_add_style(lv_obj_8, &plain, 0);
        wifi_row_create(lv_obj_8, ui_wifi_conn, "TTNET_ZYXEL_5G", "GÜVENLİ · WPA2", TEXT_2, 255, 0, "BAĞLI", 255);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_8);
        lv_obj_set_width(lv_obj_9, lv_pct(100));
        lv_obj_set_height(lv_obj_9, 1);
        lv_obj_add_style(lv_obj_9, &divider, 0);

        lv_obj_t * net_selected = wifi_row_create(lv_obj_8, ui_wifi_3, "Yılmaz_Ev", "GÜVENLİ · WPA2", ACCENT_WARM, 255, 255, "", 0);
        lv_obj_set_name(net_selected, "net_selected");
        lv_obj_set_style_bg_color(net_selected, ACCENT_WARM, 0);
        lv_obj_set_style_bg_opa(net_selected, 36, 0);
        lv_obj_set_style_radius(net_selected, 14, 0);

        wifi_row_create(lv_obj_8, ui_wifi_2, "Superonline_Fiber", "GÜVENLİ · WPA2", lv_color_hex(0x5A6672), 255, 255, "", 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_8);
        lv_obj_set_width(lv_obj_10, lv_pct(100));
        lv_obj_set_height(lv_obj_10, 1);
        lv_obj_add_style(lv_obj_10, &divider, 0);

        wifi_row_create(lv_obj_8, ui_wifi_2, "AirTies_Air4240", "GÜVENLİ · WPA2", lv_color_hex(0x5A6672), 255, 255, "", 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_8);
        lv_obj_set_width(lv_obj_11, lv_pct(100));
        lv_obj_set_height(lv_obj_11, 1);
        lv_obj_add_style(lv_obj_11, &divider, 0);

        wifi_row_create(lv_obj_8, ui_wifi_1, "Misafir", "AÇIK AĞ · ŞİFRESİZ", lv_color_hex(0x5A6672), 0, 255, "", 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_8);
        lv_obj_set_width(lv_obj_12, lv_pct(100));
        lv_obj_set_height(lv_obj_12, 1);
        lv_obj_add_style(lv_obj_12, &divider, 0);

        wifi_row_create(lv_obj_8, ui_wifi_2, "Superonline_Fiber", "GÜVENLİ · WPA2", lv_color_hex(0x5A6672), 255, 255, "", 0);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_8);
        lv_obj_set_width(lv_obj_13, lv_pct(100));
        lv_obj_set_height(lv_obj_13, 1);
        lv_obj_add_style(lv_obj_13, &divider, 0);

        wifi_row_create(lv_obj_8, ui_wifi_2, "Superonline_Fiber", "GÜVENLİ · WPA2", lv_color_hex(0x5A6672), 255, 255, "", 0);

        lv_obj_t * lv_obj_14 = lv_obj_create(lv_obj_8);
        lv_obj_set_width(lv_obj_14, lv_pct(100));
        lv_obj_set_height(lv_obj_14, 1);
        lv_obj_add_style(lv_obj_14, &divider, 0);

        wifi_row_create(lv_obj_8, ui_wifi_2, "Superonline_Fiber", "GÜVENLİ · WPA2", lv_color_hex(0x5A6672), 255, 255, "", 0);

        lv_obj_t * lv_obj_15 = lv_obj_create(lv_obj_8);
        lv_obj_set_width(lv_obj_15, lv_pct(100));
        lv_obj_set_height(lv_obj_15, 1);
        lv_obj_add_style(lv_obj_15, &divider, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

