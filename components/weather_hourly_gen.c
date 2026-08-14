/**
 * @file weather_hourly_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "weather_hourly_gen.h"
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

lv_obj_t * weather_hourly_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(parent);
        lv_obj_set_name_static(lv_obj_0, "weather_hourly_#");
        lv_obj_set_width(lv_obj_0, 800);
        lv_obj_set_height(lv_obj_0, 480);
        lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_flex_main_place(lv_obj_0, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
        lv_obj_set_style_pad_top(lv_obj_0, 34, 0);
        lv_obj_set_style_pad_bottom(lv_obj_0, 28, 0);
        lv_obj_set_style_pad_left(lv_obj_0, 44, 0);
        lv_obj_set_style_pad_right(lv_obj_0, 44, 0);

        lv_obj_add_style(lv_obj_0, &screen_root, 0);
        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_1, lv_pct(100));
        lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_main_place(lv_obj_1, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
        lv_obj_set_style_flex_cross_place(lv_obj_1, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_add_style(lv_obj_1, &plain, 0);
        lv_obj_t * back_home = lv_obj_create(lv_obj_1);
        lv_obj_set_name(back_home, "back_home");
        lv_obj_set_width(back_home, LV_SIZE_CONTENT);
        lv_obj_set_height(back_home, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(back_home, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(back_home, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(back_home, 10, 0);
        lv_obj_add_style(back_home, &plain, 0);
        lv_obj_t * lv_obj_2 = lv_obj_create(back_home);
        lv_obj_set_width(lv_obj_2, 7);
        lv_obj_set_height(lv_obj_2, 7);
        lv_obj_set_style_radius(lv_obj_2, 4, 0);
        lv_obj_set_style_bg_color(lv_obj_2, ACCENT_COOL, 0);
        lv_obj_set_style_bg_opa(lv_obj_2, 255, 0);
        lv_obj_set_style_border_width(lv_obj_2, 0, 0);

        lv_obj_t * lv_label_0 = lv_label_create(back_home);
        lv_label_set_text(lv_label_0, "HAVA DURUMU · İSTANBUL");
        lv_obj_set_style_text_font(lv_label_0, mono_15, 0);
        lv_obj_set_style_text_color(lv_label_0, TEXT_2, 0);
        lv_obj_set_style_text_letter_space(lv_label_0, 3, 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_3, lv_pct(100));
        lv_obj_set_height(lv_obj_3, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_3, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_main_place(lv_obj_3, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
        lv_obj_set_style_flex_cross_place(lv_obj_3, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_add_style(lv_obj_3, &plain, 0);
        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_3);
        lv_obj_set_width(lv_obj_4, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_4, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_4, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(lv_obj_4, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_4, 18, 0);
        lv_obj_add_style(lv_obj_4, &plain, 0);
        lv_obj_t * lv_image_0 = lv_image_create(lv_obj_4);
        lv_image_set_src(lv_image_0, wx_partly_104);

        lv_obj_t * temp = lv_label_create(lv_obj_4);
        lv_obj_set_name(temp, "temp");
        lv_label_bind_text(temp, &out_temp, NULL);
        lv_obj_set_style_text_font(temp, disp_112, 0);
        lv_obj_set_style_text_color(temp, TEXT_1, 0);
        lv_obj_set_style_text_letter_space(temp, -3, 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_3);
        lv_obj_set_width(lv_obj_5, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_5, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_5, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_flex_cross_place(lv_obj_5, LV_FLEX_ALIGN_END, 0);
        lv_obj_set_style_pad_row(lv_obj_5, 8, 0);
        lv_obj_add_style(lv_obj_5, &plain, 0);
        lv_obj_t * cond = lv_label_create(lv_obj_5);
        lv_obj_set_name(cond, "cond");
        lv_label_bind_text(cond, &out_cond, NULL);
        lv_obj_set_style_text_font(cond, mono_19, 0);
        lv_obj_set_style_text_color(cond, TEXT_1, 0);

        lv_obj_t * feels = lv_label_create(lv_obj_5);
        lv_obj_set_name(feels, "feels");
        lv_label_bind_text(feels, &out_feels, NULL);
        lv_obj_set_style_text_font(feels, mono_15, 0);
        lv_obj_set_style_text_color(feels, TEXT_2, 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_5);
        lv_obj_set_width(lv_obj_6, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_6, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_6, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_pad_column(lv_obj_6, 16, 0);
        lv_obj_add_style(lv_obj_6, &plain, 0);
        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_6);
        lv_label_set_text(lv_label_1, "↑ 27°");
        lv_obj_set_style_text_font(lv_label_1, mono_15, 0);
        lv_obj_set_style_text_color(lv_label_1, ACCENT_WARM, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_6);
        lv_label_set_text(lv_label_2, "↓ 19°");
        lv_obj_set_style_text_font(lv_label_2, mono_15, 0);
        lv_obj_set_style_text_color(lv_label_2, ACCENT_COOL, 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_7, lv_pct(100));
        lv_obj_set_height(lv_obj_7, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_7, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_main_place(lv_obj_7, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
        lv_obj_set_style_flex_cross_place(lv_obj_7, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_add_style(lv_obj_7, &plain, 0);
        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_7);
        lv_label_set_text(lv_label_3, "SAATLİK");
        lv_obj_set_style_text_font(lv_label_3, mono_13, 0);
        lv_obj_set_style_text_color(lv_label_3, TEXT_3, 0);
        lv_obj_set_style_text_letter_space(lv_label_3, 2, 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_7);
        lv_label_set_text(lv_label_4, "12:00 – 24:00");
        lv_obj_set_style_text_font(lv_label_4, mono_12, 0);
        lv_obj_set_style_text_color(lv_label_4, TEXT_3, 0);

        lv_obj_t * hour_strip = lv_obj_create(lv_obj_0);
        lv_obj_set_name(hour_strip, "hour_strip");
        lv_obj_set_flag(hour_strip, LV_OBJ_FLAG_SCROLL_CHAIN_HOR, false);
        lv_obj_set_width(hour_strip, lv_pct(100));
        lv_obj_set_height(hour_strip, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(hour_strip, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_pad_column(hour_strip, 7, 0);
        lv_obj_set_style_pad_bottom(hour_strip, 9, 0);
        lv_obj_add_style(hour_strip, &plain, 0);
        lv_obj_t * hour_card_0 = hour_card_create(hour_strip, "ŞİMDİ", wx_partly_34, "24°", "%10", ACCENT_WARM, lv_color_hex(0x6DC7E8));
        lv_obj_set_style_bg_color(hour_card_0, ACCENT_WARM, 0);
        lv_obj_set_style_bg_opa(hour_card_0, 36, 0);
        lv_obj_set_style_border_color(hour_card_0, ACCENT_WARM, 0);
        lv_obj_set_style_border_width(hour_card_0, 2, 0);

        hour_card_create(hour_strip, "13:00", wx_sun_34, "25°", "0%", lv_color_hex(0x93A0AD), TEXT_3);

        hour_card_create(hour_strip, "14:00", wx_sun_34, "26°", "0%", lv_color_hex(0x93A0AD), TEXT_3);

        hour_card_create(hour_strip, "15:00", wx_partly_34, "26°", "%10", lv_color_hex(0x93A0AD), lv_color_hex(0x6DC7E8));

        hour_card_create(hour_strip, "16:00", wx_partly_34, "25°", "%20", lv_color_hex(0x93A0AD), lv_color_hex(0x6DC7E8));

        hour_card_create(hour_strip, "17:00", wx_cloud_34, "24°", "%30", lv_color_hex(0x93A0AD), lv_color_hex(0x6DC7E8));

        hour_card_create(hour_strip, "18:00", wx_rain_34, "22°", "%60", lv_color_hex(0x93A0AD), lv_color_hex(0x6DC7E8));

        hour_card_create(hour_strip, "19:00", wx_rain_34, "21°", "%70", lv_color_hex(0x93A0AD), lv_color_hex(0x6DC7E8));

        hour_card_create(hour_strip, "20:00", wx_cloud_34, "20°", "%40", lv_color_hex(0x93A0AD), lv_color_hex(0x6DC7E8));

        lv_obj_t * scroll_hint = lv_obj_create(lv_obj_0);
        lv_obj_set_name(scroll_hint, "scroll_hint");
        lv_obj_set_width(scroll_hint, lv_pct(100));
        lv_obj_set_height(scroll_hint, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(scroll_hint, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_main_place(scroll_hint, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_flex_cross_place(scroll_hint, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(scroll_hint, 10, 0);
        lv_obj_add_style(scroll_hint, &plain, 0);
        lv_obj_t * lv_image_1 = lv_image_create(scroll_hint);
        lv_image_set_src(lv_image_1, ui_chevdown);
        lv_obj_set_style_image_recolor(lv_image_1, TEXT_3, 0);
        lv_obj_set_style_image_recolor_opa(lv_image_1, 255, 0);

        lv_obj_t * lv_label_5 = lv_label_create(scroll_hint);
        lv_label_set_text(lv_label_5, "5 GÜNLÜK TAHMİN İÇİN KAYDIR");
        lv_obj_set_style_text_font(lv_label_5, mono_12, 0);
        lv_obj_set_style_text_color(lv_label_5, TEXT_3, 0);
        lv_obj_set_style_text_letter_space(lv_label_5, 2, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

