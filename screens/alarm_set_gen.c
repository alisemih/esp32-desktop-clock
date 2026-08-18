/**
 * @file alarm_set_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "alarm_set_gen.h"
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

lv_obj_t * alarm_set_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        if (alarm_set == NULL) alarm_set = lv_obj_create(NULL);
        lv_obj_t * lv_obj_0 = alarm_set;
        lv_obj_set_name_static(lv_obj_0, "alarm_set_#");
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
        lv_image_set_src(lv_image_1, ui_bell);
        lv_obj_set_style_image_recolor(lv_image_1, ACCENT_WARM, 0);
        lv_obj_set_style_image_recolor_opa(lv_image_1, 255, 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_3);
        lv_obj_set_width(lv_obj_5, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_5, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_5, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_row(lv_obj_5, 4, 0);
        lv_obj_add_style(lv_obj_5, &plain, 0);
        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_5);
        lv_label_set_text(lv_label_1, "Yeni Alarm");
        lv_obj_set_style_text_font(lv_label_1, disp_26, 0);
        lv_obj_set_style_text_color(lv_label_1, TEXT_1, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_5);
        lv_label_set_text(lv_label_2, "ZAMANI VE TEKRAR GÜNLERİNİ SEÇİN");
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
        lv_label_set_text(lv_label_3, "AKTİF");
        lv_obj_set_style_text_font(lv_label_3, mono_13, 0);
        lv_obj_set_style_text_color(lv_label_3, TEXT_2, 0);
        lv_obj_set_style_text_letter_space(lv_label_3, 2, 0);

        lv_obj_t * alarm_on = lv_switch_create(lv_obj_6);
        lv_obj_set_name(alarm_on, "alarm_on");
        lv_obj_set_width(alarm_on, 46);
        lv_obj_set_height(alarm_on, 26);
        lv_obj_bind_checked(alarm_on, &alarm_enabled);
        lv_obj_add_style(alarm_on, &sw_track, 0);
        lv_obj_add_style(alarm_on, &sw_ind_off, LV_PART_INDICATOR);
        lv_obj_add_style(alarm_on, &sw_ind_on, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(alarm_on, &sw_knob, LV_PART_KNOB);
        lv_obj_add_style(alarm_on, &sw_knob_on, LV_PART_KNOB | LV_STATE_CHECKED);

        lv_obj_t * picker = time_picker_create(lv_obj_0, 7, 30);
        lv_obj_set_name(picker, "picker");

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_7, lv_pct(100));
        lv_obj_set_height(lv_obj_7, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_7, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_pad_row(lv_obj_7, 10, 0);
        lv_obj_add_style(lv_obj_7, &plain, 0);
        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_7);
        lv_label_set_text(lv_label_4, "TEKRARLA");
        lv_obj_set_style_text_font(lv_label_4, mono_12, 0);
        lv_obj_set_style_text_color(lv_label_4, TEXT_3, 0);
        lv_obj_set_style_text_letter_space(lv_label_4, 2, 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_7);
        lv_obj_set_width(lv_obj_8, lv_pct(100));
        lv_obj_set_height(lv_obj_8, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_8, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_main_place(lv_obj_8, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
        lv_obj_set_style_flex_cross_place(lv_obj_8, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_add_style(lv_obj_8, &plain, 0);
        lv_obj_t * day_chip_0 = day_chip_create(lv_obj_8, "PZT", BG_BASE);
        lv_obj_set_style_bg_color(day_chip_0, ACCENT_WARM, 0);
        lv_obj_set_style_bg_opa(day_chip_0, 255, 0);
        lv_obj_set_style_border_width(day_chip_0, 0, 0);

        lv_obj_t * day_chip_1 = day_chip_create(lv_obj_8, "SAL", BG_BASE);
        lv_obj_set_style_bg_color(day_chip_1, ACCENT_WARM, 0);
        lv_obj_set_style_bg_opa(day_chip_1, 255, 0);
        lv_obj_set_style_border_width(day_chip_1, 0, 0);

        lv_obj_t * day_chip_2 = day_chip_create(lv_obj_8, "ÇAR", BG_BASE);
        lv_obj_set_style_bg_color(day_chip_2, ACCENT_WARM, 0);
        lv_obj_set_style_bg_opa(day_chip_2, 255, 0);
        lv_obj_set_style_border_width(day_chip_2, 0, 0);

        lv_obj_t * day_chip_3 = day_chip_create(lv_obj_8, "PER", BG_BASE);
        lv_obj_set_style_bg_color(day_chip_3, ACCENT_WARM, 0);
        lv_obj_set_style_bg_opa(day_chip_3, 255, 0);
        lv_obj_set_style_border_width(day_chip_3, 0, 0);

        lv_obj_t * day_chip_4 = day_chip_create(lv_obj_8, "CUM", BG_BASE);
        lv_obj_set_style_bg_color(day_chip_4, ACCENT_WARM, 0);
        lv_obj_set_style_bg_opa(day_chip_4, 255, 0);
        lv_obj_set_style_border_width(day_chip_4, 0, 0);

        day_chip_create(lv_obj_8, "CMT", lv_color_hex(0x5A6672));

        day_chip_create(lv_obj_8, "PAZ", lv_color_hex(0x5A6672));

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_9, lv_pct(100));
        lv_obj_set_height(lv_obj_9, 1);
        lv_obj_add_style(lv_obj_9, &divider, 0);

        lv_obj_t * sound_row = lv_obj_create(lv_obj_0);
        lv_obj_set_name(sound_row, "sound_row");
        lv_obj_set_width(sound_row, lv_pct(100));
        lv_obj_set_height(sound_row, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(sound_row, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(sound_row, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(sound_row, 14, 0);
        lv_obj_set_style_pad_top(sound_row, 2, 0);
        lv_obj_set_style_pad_bottom(sound_row, 2, 0);
        lv_obj_add_style(sound_row, &plain, 0);
        lv_obj_t * lv_image_2 = lv_image_create(sound_row);
        lv_image_set_src(lv_image_2, ui_speaker);
        lv_obj_set_style_image_recolor(lv_image_2, TEXT_2, 0);
        lv_obj_set_style_image_recolor_opa(lv_image_2, 255, 0);

        lv_obj_t * lv_label_5 = lv_label_create(sound_row);
        lv_label_set_text(lv_label_5, "Alarm Sesi");
        lv_obj_set_flex_grow(lv_label_5, 1);
        lv_obj_set_style_text_font(lv_label_5, mono_17, 0);
        lv_obj_set_style_text_color(lv_label_5, TEXT_1, 0);

        lv_obj_t * lv_label_6 = lv_label_create(sound_row);
        lv_label_bind_text(lv_label_6, &alarm_sound, NULL);
        lv_obj_set_style_text_font(lv_label_6, mono_15, 0);
        lv_obj_set_style_text_color(lv_label_6, TEXT_2, 0);

        lv_obj_t * lv_image_3 = lv_image_create(sound_row);
        lv_image_set_src(lv_image_3, ui_chevron);
        lv_obj_set_style_image_recolor(lv_image_3, TEXT_3, 0);
        lv_obj_set_style_image_recolor_opa(lv_image_3, 255, 0);

        lv_obj_t * save = lv_button_create(lv_obj_0);
        lv_obj_set_name(save, "save");
        lv_obj_set_width(save, lv_pct(100));
        lv_obj_set_height(save, 44);
        lv_obj_add_style(save, &btn_primary, 0);
        lv_obj_t * lv_label_7 = lv_label_create(save);
        lv_label_set_text(lv_label_7, "KAYDET");
        lv_obj_set_align(lv_label_7, LV_ALIGN_CENTER);
        lv_obj_set_style_text_font(lv_label_7, mono_15, 0);
        lv_obj_set_style_text_color(lv_label_7, BG_BASE, 0);
        lv_obj_set_style_text_letter_space(lv_label_7, 2, 0);

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

