/**
 * @file location_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "location_gen.h"
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

lv_obj_t * location_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        if (location == NULL) location = lv_obj_create(NULL);
        lv_obj_t * lv_obj_0 = location;
        lv_obj_set_name_static(lv_obj_0, "location_#");
        lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_top(lv_obj_0, 32, 0);
        lv_obj_set_style_pad_bottom(lv_obj_0, 20, 0);
        lv_obj_set_style_pad_left(lv_obj_0, 44, 0);
        lv_obj_set_style_pad_right(lv_obj_0, 44, 0);
        lv_obj_set_style_pad_row(lv_obj_0, 12, 0);

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
        lv_obj_set_style_pad_column(back, 10, 0);
        lv_obj_add_style(back, &plain, 0);
        lv_obj_t * lv_obj_2 = lv_obj_create(back);
        lv_obj_set_width(lv_obj_2, 7);
        lv_obj_set_height(lv_obj_2, 7);
        lv_obj_set_style_radius(lv_obj_2, 4, 0);
        lv_obj_set_style_bg_color(lv_obj_2, ACCENT_COOL, 0);
        lv_obj_set_style_bg_opa(lv_obj_2, 255, 0);
        lv_obj_set_style_border_width(lv_obj_2, 0, 0);

        lv_obj_t * lv_label_0 = lv_label_create(back);
        lv_label_set_text(lv_label_0, "AYARLAR · KONUM");
        lv_obj_set_style_text_font(lv_label_0, mono_15, 0);
        lv_obj_set_style_text_color(lv_label_0, TEXT_2, 0);
        lv_obj_set_style_text_letter_space(lv_label_0, 3, 0);

        lv_obj_add_screen_load_event(back, LV_EVENT_CLICKED, main_screen, LV_SCREEN_LOAD_ANIM_MOVE_BOTTOM, 300, 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_1);
        lv_obj_set_width(lv_obj_3, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_3, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_3, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(lv_obj_3, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_3, 12, 0);
        lv_obj_add_style(lv_obj_3, &plain, 0);
        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_3);
        lv_label_set_text(lv_label_1, "OTOMATİK");
        lv_obj_set_style_text_font(lv_label_1, mono_13, 0);
        lv_obj_set_style_text_color(lv_label_1, TEXT_2, 0);
        lv_obj_set_style_text_letter_space(lv_label_1, 2, 0);

        lv_obj_t * auto_loc = lv_switch_create(lv_obj_3);
        lv_obj_set_name(auto_loc, "auto_loc");
        lv_obj_set_width(auto_loc, 46);
        lv_obj_set_height(auto_loc, 26);
        lv_obj_bind_checked(auto_loc, &loc_auto);
        lv_obj_add_style(auto_loc, &sw_track, 0);
        lv_obj_add_style(auto_loc, &sw_ind_off, LV_PART_INDICATOR);
        lv_obj_add_style(auto_loc, &sw_ind_on, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(auto_loc, &sw_knob, LV_PART_KNOB);
        lv_obj_add_style(auto_loc, &sw_knob_on, LV_PART_KNOB | LV_STATE_CHECKED);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_4, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_4, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_4, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_row(lv_obj_4, 6, 0);
        lv_obj_add_style(lv_obj_4, &plain, 0);
        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_4);
        lv_label_set_text(lv_label_2, "Şehir Seç");
        lv_obj_set_style_text_font(lv_label_2, disp_44, 0);
        lv_obj_set_style_text_color(lv_label_2, TEXT_1, 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_4);
        lv_obj_set_width(lv_obj_5, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_5, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_5, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(lv_obj_5, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_5, 9, 0);
        lv_obj_add_style(lv_obj_5, &plain, 0);
        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_5);
        lv_obj_set_width(lv_obj_6, 6);
        lv_obj_set_height(lv_obj_6, 6);
        lv_obj_set_style_radius(lv_obj_6, 3, 0);
        lv_obj_set_style_bg_color(lv_obj_6, ACCENT_COOL, 0);
        lv_obj_set_style_bg_opa(lv_obj_6, 255, 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_5);
        lv_label_set_text(lv_label_3, "81 İL BULUNDU · İSTANBUL SEÇİLİ");
        lv_obj_set_style_text_font(lv_label_3, mono_13, 0);
        lv_obj_set_style_text_color(lv_label_3, TEXT_3, 0);
        lv_obj_set_style_text_letter_space(lv_label_3, 2, 0);

        lv_obj_t * search_box = lv_obj_create(lv_obj_0);
        lv_obj_set_name(search_box, "search_box");
        lv_obj_set_width(search_box, lv_pct(100));
        lv_obj_set_height(search_box, 48);
        lv_obj_set_flex_flow(search_box, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(search_box, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(search_box, 12, 0);
        lv_obj_add_style(search_box, &search_field, 0);
        lv_obj_t * lv_image_0 = lv_image_create(search_box);
        lv_image_set_src(lv_image_0, ui_search);
        lv_obj_set_style_image_recolor(lv_image_0, TEXT_2, 0);
        lv_obj_set_style_image_recolor_opa(lv_image_0, 255, 0);

        lv_obj_t * search = lv_textarea_create(search_box);
        lv_obj_set_name(search, "search");
        lv_obj_set_flex_grow(search, 1);
        lv_textarea_set_one_line(search, true);
        lv_textarea_set_placeholder_text(search, "Şehir ara");
        lv_textarea_set_text(search, "İstanbul");
        lv_obj_set_style_bg_opa(search, 0, 0);
        lv_obj_set_style_border_width(search, 0, 0);
        lv_obj_set_style_pad_all(search, 0, 0);
        lv_obj_set_style_text_font(search, mono_16, 0);
        lv_obj_set_style_text_color(search, TEXT_1, 0);

        lv_obj_t * clear = lv_image_create(search_box);
        lv_obj_set_name(clear, "clear");
        lv_image_set_src(clear, ui_close);
        lv_obj_set_style_image_recolor(clear, TEXT_2, 0);
        lv_obj_set_style_image_recolor_opa(clear, 255, 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_7, lv_pct(100));
        lv_obj_set_flex_grow(lv_obj_7, 1);
        lv_obj_set_flex_flow(lv_obj_7, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_row(lv_obj_7, 0, 0);
        lv_obj_add_style(lv_obj_7, &plain, 0);
        lv_obj_t * city_selected = city_row_create(lv_obj_7, "İstanbul", "· Marmara Bölgesi", ACCENT_WARM, 255);
        lv_obj_set_name(city_selected, "city_selected");
        lv_obj_set_style_bg_color(city_selected, ACCENT_WARM, 0);
        lv_obj_set_style_bg_opa(city_selected, 36, 0);
        lv_obj_set_style_radius(city_selected, 14, 0);

        city_row_create(lv_obj_7, "Ankara", "· İç Anadolu Bölgesi", lv_color_hex(0xAEB9C4), 0);

        city_row_create(lv_obj_7, "İzmir", "· Ege Bölgesi", lv_color_hex(0xAEB9C4), 0);

        city_row_create(lv_obj_7, "Bursa", "· Marmara Bölgesi", lv_color_hex(0xAEB9C4), 0);

        city_row_create(lv_obj_7, "Antalya", "· Akdeniz Bölgesi", lv_color_hex(0xAEB9C4), 0);

        city_row_create(lv_obj_7, "Adana", "· Akdeniz Bölgesi", lv_color_hex(0xAEB9C4), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

