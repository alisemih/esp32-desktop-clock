/**
 * @file weather_daily_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "weather_daily_gen.h"
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

lv_obj_t * weather_daily_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(parent);
        lv_obj_set_name_static(lv_obj_0, "weather_daily_#");
        lv_obj_set_width(lv_obj_0, 800);
        lv_obj_set_height(lv_obj_0, 480);
        lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_top(lv_obj_0, 32, 0);
        lv_obj_set_style_pad_bottom(lv_obj_0, 28, 0);
        lv_obj_set_style_pad_left(lv_obj_0, 48, 0);
        lv_obj_set_style_pad_right(lv_obj_0, 48, 0);
        lv_obj_set_style_pad_row(lv_obj_0, 18, 0);

        lv_obj_add_style(lv_obj_0, &screen_root, 0);
        lv_obj_t * header = lv_obj_create(lv_obj_0);
        lv_obj_set_name(header, "header");
        lv_obj_set_width(header, lv_pct(100));
        lv_obj_set_height(header, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(header, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_main_place(header, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
        lv_obj_set_style_flex_cross_place(header, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_add_style(header, &plain, 0);
        lv_obj_t * lv_obj_1 = lv_obj_create(header);
        lv_obj_set_width(lv_obj_1, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(lv_obj_1, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_1, 10, 0);
        lv_obj_add_style(lv_obj_1, &plain, 0);
        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
        lv_obj_set_width(lv_obj_2, 7);
        lv_obj_set_height(lv_obj_2, 7);
        lv_obj_set_style_radius(lv_obj_2, 4, 0);
        lv_obj_set_style_bg_color(lv_obj_2, ACCENT_COOL, 0);
        lv_obj_set_style_bg_opa(lv_obj_2, 255, 0);
        lv_obj_set_style_border_width(lv_obj_2, 0, 0);

        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_1);
        lv_label_set_text(lv_label_0, "5 GÜNLÜK TAHMİN");
        lv_obj_set_style_text_font(lv_label_0, mono_15, 0);
        lv_obj_set_style_text_color(lv_label_0, TEXT_2, 0);
        lv_obj_set_style_text_letter_space(lv_label_0, 3, 0);

        lv_obj_t * lv_label_1 = lv_label_create(header);
        lv_label_set_text(lv_label_1, "İSTANBUL");
        lv_obj_set_style_text_font(lv_label_1, mono_13, 0);
        lv_obj_set_style_text_color(lv_label_1, TEXT_3, 0);
        lv_obj_set_style_text_letter_space(lv_label_1, 2, 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_3, lv_pct(100));
        lv_obj_set_flex_grow(lv_obj_3, 1);
        lv_obj_set_flex_flow(lv_obj_3, LV_FLEX_FLOW_COLUMN);
        lv_obj_add_style(lv_obj_3, &plain, 0);
        forecast_row_create(lv_obj_3, "BUGÜN", wx_sun_34, "Güneşli", "19°", "27°", 19, 27);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_3);
        lv_obj_set_width(lv_obj_4, lv_pct(100));
        lv_obj_set_height(lv_obj_4, 1);
        lv_obj_add_style(lv_obj_4, &divider, 0);

        forecast_row_create(lv_obj_3, "ÇARŞAMBA", wx_partly_34, "Parçalı Bulutlu", "18°", "26°", 18, 26);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_3);
        lv_obj_set_width(lv_obj_5, lv_pct(100));
        lv_obj_set_height(lv_obj_5, 1);
        lv_obj_add_style(lv_obj_5, &divider, 0);

        forecast_row_create(lv_obj_3, "PERŞEMBE", wx_rain_34, "Yağmurlu", "16°", "22°", 16, 22);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_3);
        lv_obj_set_width(lv_obj_6, lv_pct(100));
        lv_obj_set_height(lv_obj_6, 1);
        lv_obj_add_style(lv_obj_6, &divider, 0);

        forecast_row_create(lv_obj_3, "CUMA", wx_cloud_34, "Bulutlu", "17°", "24°", 17, 24);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_3);
        lv_obj_set_width(lv_obj_7, lv_pct(100));
        lv_obj_set_height(lv_obj_7, 1);
        lv_obj_add_style(lv_obj_7, &divider, 0);

        forecast_row_create(lv_obj_3, "CUMARTESİ", wx_sun_34, "Güneşli", "20°", "29°", 20, 29);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

