/**
 * @file time_date_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "time_date_gen.h"
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

lv_obj_t * time_date_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        if (time_date == NULL) time_date = lv_obj_create(NULL);
        lv_obj_t * lv_obj_0 = time_date;
        lv_obj_set_name_static(lv_obj_0, "time_date_#");
        lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_top(lv_obj_0, 26, 0);
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

        lv_obj_t * cancel = lv_label_create(lv_obj_1);
        lv_obj_set_name(cancel, "cancel");
        lv_label_set_text(cancel, "İPTAL");
        lv_obj_set_style_text_font(cancel, mono_13, 0);
        lv_obj_set_style_text_color(cancel, TEXT_3, 0);
        lv_obj_set_style_text_letter_space(cancel, 2, 0);
        lv_obj_add_screen_load_event(cancel, LV_EVENT_CLICKED, main_screen, LV_SCREEN_LOAD_ANIM_MOVE_BOTTOM, 300, 0);

        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_2, lv_pct(100));
        lv_obj_set_height(lv_obj_2, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_2, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_main_place(lv_obj_2, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
        lv_obj_set_style_flex_cross_place(lv_obj_2, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_add_style(lv_obj_2, &plain, 0);
        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_2);
        lv_obj_set_width(lv_obj_3, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_3, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_3, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(lv_obj_3, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_3, 14, 0);
        lv_obj_add_style(lv_obj_3, &plain, 0);
        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_3);
        lv_obj_set_width(lv_obj_4, 40);
        lv_obj_set_height(lv_obj_4, 40);
        lv_obj_set_flex_flow(lv_obj_4, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_main_place(lv_obj_4, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_flex_cross_place(lv_obj_4, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_flex_track_place(lv_obj_4, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_bg_color(lv_obj_4, BG_RAISED, 0);
        lv_obj_set_style_bg_opa(lv_obj_4, 255, 0);
        lv_obj_set_style_radius(lv_obj_4, 11, 0);
        lv_obj_set_style_border_color(lv_obj_4, HAIRLINE, 0);
        lv_obj_set_style_border_opa(lv_obj_4, 20, 0);
        lv_obj_set_style_border_width(lv_obj_4, 1, 0);
        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_4);
        lv_image_set_src(lv_image_1, ui_clock);
        lv_obj_set_style_image_recolor(lv_image_1, ACCENT_WARM, 0);
        lv_obj_set_style_image_recolor_opa(lv_image_1, 255, 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_3);
        lv_obj_set_width(lv_obj_5, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_5, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_5, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_row(lv_obj_5, 4, 0);
        lv_obj_add_style(lv_obj_5, &plain, 0);
        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_5);
        lv_label_set_text(lv_label_1, "Saat ve Tarih");
        lv_obj_set_style_text_font(lv_label_1, disp_26, 0);
        lv_obj_set_style_text_color(lv_label_1, TEXT_1, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_5);
        lv_label_set_text(lv_label_2, "SİSTEM SAATİNİ VE TAKVİMİ AYARLAYIN");
        lv_obj_set_style_text_font(lv_label_2, mono_12, 0);
        lv_obj_set_style_text_color(lv_label_2, TEXT_3, 0);
        lv_obj_set_style_text_letter_space(lv_label_2, 2, 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_2);
        lv_obj_set_width(lv_obj_6, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_6, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_6, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(lv_obj_6, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_6, 12, 0);
        lv_obj_add_style(lv_obj_6, &plain, 0);
        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_6);
        lv_label_set_text(lv_label_3, "OTOMATİK");
        lv_obj_set_style_text_font(lv_label_3, mono_13, 0);
        lv_obj_set_style_text_color(lv_label_3, TEXT_2, 0);
        lv_obj_set_style_text_letter_space(lv_label_3, 2, 0);

        lv_obj_t * auto_time = lv_switch_create(lv_obj_6);
        lv_obj_set_name(auto_time, "auto_time");
        lv_obj_set_width(auto_time, 46);
        lv_obj_set_height(auto_time, 26);
        lv_obj_bind_checked(auto_time, &time_auto);
        lv_obj_add_style(auto_time, &sw_track, 0);
        lv_obj_add_style(auto_time, &sw_ind_off, LV_PART_INDICATOR);
        lv_obj_add_style(auto_time, &sw_ind_on, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(auto_time, &sw_knob, LV_PART_KNOB);
        lv_obj_add_style(auto_time, &sw_knob_on, LV_PART_KNOB | LV_STATE_CHECKED);

        lv_obj_t * picker = time_picker_create(lv_obj_0, 9, 42);
        lv_obj_set_name(picker, "picker");

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_7, lv_pct(100));
        lv_obj_set_height(lv_obj_7, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_7, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_row(lv_obj_7, 8, 0);
        lv_obj_add_style(lv_obj_7, &plain, 0);
        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_7);
        lv_label_set_text(lv_label_4, "TARİH");
        lv_obj_set_style_text_font(lv_label_4, mono_12, 0);
        lv_obj_set_style_text_color(lv_label_4, TEXT_3, 0);
        lv_obj_set_style_text_letter_space(lv_label_4, 2, 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_7);
        lv_obj_set_width(lv_obj_8, lv_pct(100));
        lv_obj_set_height(lv_obj_8, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_8, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_main_place(lv_obj_8, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
        lv_obj_set_style_flex_cross_place(lv_obj_8, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_8, 16, 0);
        lv_obj_add_style(lv_obj_8, &plain, 0);
        lv_obj_t * day = lv_roller_create(lv_obj_8);
        lv_obj_set_name(day, "day");
        lv_obj_set_flex_grow(day, 1);
        lv_roller_set_visible_row_count(day, 1);
        lv_roller_set_options(day, "01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23\n24\n25\n26\n27\n28\n29\n30\n31", LV_ROLLER_MODE_INFINITE);
        lv_roller_set_selected(day, 16, false);
        lv_obj_add_style(day, &roller_main, LV_PART_MAIN);
        lv_obj_add_style(day, &roller_date_sel, LV_PART_SELECTED);

        lv_obj_t * month = lv_roller_create(lv_obj_8);
        lv_obj_set_name(month, "month");
        lv_obj_set_flex_grow(month, 1);
        lv_roller_set_visible_row_count(month, 1);
        lv_roller_set_options(month, "OCA\nŞUB\nMAR\nNİS\nMAY\nHAZ\nTEM\nAĞU\nEYL\nEKİ\nKAS\nARA", LV_ROLLER_MODE_INFINITE);
        lv_roller_set_selected(month, 7, false);
        lv_obj_add_style(month, &roller_main, LV_PART_MAIN);
        lv_obj_add_style(month, &roller_date_sel, LV_PART_SELECTED);

        lv_obj_t * year = lv_roller_create(lv_obj_8);
        lv_obj_set_name(year, "year");
        lv_obj_set_flex_grow(year, 1);
        lv_roller_set_visible_row_count(year, 1);
        lv_roller_set_options(year, "2024\n2025\n2026\n2027\n2028\n2029\n2030", LV_ROLLER_MODE_NORMAL);
        lv_roller_set_selected(year, 2, false);
        lv_obj_add_style(year, &roller_main, LV_PART_MAIN);
        lv_obj_add_style(year, &roller_date_sel, LV_PART_SELECTED);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_9, lv_pct(100));
        lv_obj_set_height(lv_obj_9, 1);
        lv_obj_add_style(lv_obj_9, &divider, 0);

        lv_obj_t * format_row = lv_obj_create(lv_obj_0);
        lv_obj_set_name(format_row, "format_row");
        lv_obj_set_width(format_row, lv_pct(100));
        lv_obj_set_height(format_row, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(format_row, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(format_row, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(format_row, 14, 0);
        lv_obj_set_style_pad_top(format_row, 2, 0);
        lv_obj_set_style_pad_bottom(format_row, 2, 0);
        lv_obj_add_style(format_row, &plain, 0);
        lv_obj_t * lv_image_2 = lv_image_create(format_row);
        lv_image_set_src(lv_image_2, ui_clock);
        lv_obj_set_style_image_recolor(lv_image_2, TEXT_2, 0);
        lv_obj_set_style_image_recolor_opa(lv_image_2, 255, 0);

        lv_obj_t * lv_label_5 = lv_label_create(format_row);
        lv_label_set_text(lv_label_5, "24 Saat Formatı");
        lv_obj_set_flex_grow(lv_label_5, 1);
        lv_obj_set_style_text_font(lv_label_5, mono_17, 0);
        lv_obj_set_style_text_color(lv_label_5, TEXT_1, 0);

        lv_obj_t * fmt_24h = lv_switch_create(format_row);
        lv_obj_set_name(fmt_24h, "fmt_24h");
        lv_obj_set_width(fmt_24h, 46);
        lv_obj_set_height(fmt_24h, 26);
        lv_obj_bind_checked(fmt_24h, &time_24h);
        lv_obj_add_style(fmt_24h, &sw_track, 0);
        lv_obj_add_style(fmt_24h, &sw_ind_off, LV_PART_INDICATOR);
        lv_obj_add_style(fmt_24h, &sw_ind_on, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(fmt_24h, &sw_knob, LV_PART_KNOB);
        lv_obj_add_style(fmt_24h, &sw_knob_on, LV_PART_KNOB | LV_STATE_CHECKED);

        lv_obj_t * save = lv_button_create(lv_obj_0);
        lv_obj_set_name(save, "save");
        lv_obj_set_width(save, lv_pct(100));
        lv_obj_set_height(save, 44);
        lv_obj_add_style(save, &btn_primary, 0);
        lv_obj_t * lv_label_6 = lv_label_create(save);
        lv_label_set_text(lv_label_6, "KAYDET");
        lv_obj_set_align(lv_label_6, LV_ALIGN_CENTER);
        lv_obj_set_style_text_font(lv_label_6, mono_15, 0);
        lv_obj_set_style_text_color(lv_label_6, BG_BASE, 0);
        lv_obj_set_style_text_letter_space(lv_label_6, 2, 0);

        lv_obj_add_screen_load_event(save, LV_EVENT_CLICKED, main_screen, LV_SCREEN_LOAD_ANIM_MOVE_BOTTOM, 300, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

