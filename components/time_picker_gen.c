/**
 * @file time_picker_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "time_picker_gen.h"
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

lv_obj_t * time_picker_create(lv_obj_t * parent, int32_t hour, int32_t minute)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(parent);
        lv_obj_set_name_static(lv_obj_0, "time_picker_#");
        lv_obj_set_width(lv_obj_0, lv_pct(100));
        lv_obj_set_height(lv_obj_0, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_main_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_column(lv_obj_0, 10, 0);

        lv_obj_add_style(lv_obj_0, &plain, 0);
        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_1, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_flex_cross_place(lv_obj_1, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_row(lv_obj_1, 10, 0);
        lv_obj_add_style(lv_obj_1, &plain, 0);
        lv_obj_t * alarm_hour = lv_roller_create(lv_obj_1);
        lv_obj_set_name(alarm_hour, "alarm_hour");
        lv_obj_set_width(alarm_hour, 152);
        lv_roller_set_visible_row_count(alarm_hour, 3);
        lv_roller_set_options(alarm_hour, "00\n01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23", LV_ROLLER_MODE_INFINITE);
        lv_roller_set_selected(alarm_hour, hour, false);
        lv_obj_add_style(alarm_hour, &roller_main, LV_PART_MAIN);
        lv_obj_add_style(alarm_hour, &roller_sel, LV_PART_SELECTED);

        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_1);
        lv_label_set_text(lv_label_0, "SAAT");
        lv_obj_set_style_text_font(lv_label_0, mono_12, 0);
        lv_obj_set_style_text_color(lv_label_0, TEXT_3, 0);
        lv_obj_set_style_text_letter_space(lv_label_0, 2, 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_label_set_text(lv_label_1, ":");
        lv_obj_set_style_text_font(lv_label_1, disp_52, 0);
        lv_obj_set_style_text_color(lv_label_1, DIM_ROW, 0);
        lv_obj_set_style_pad_bottom(lv_label_1, 30, 0);

        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
        lv_obj_set_width(lv_obj_2, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_obj_2, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(lv_obj_2, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_style_flex_cross_place(lv_obj_2, LV_FLEX_ALIGN_CENTER, 0);
        lv_obj_set_style_pad_row(lv_obj_2, 10, 0);
        lv_obj_add_style(lv_obj_2, &plain, 0);
        lv_obj_t * alarm_minute = lv_roller_create(lv_obj_2);
        lv_obj_set_name(alarm_minute, "alarm_minute");
        lv_obj_set_width(alarm_minute, 152);
        lv_roller_set_visible_row_count(alarm_minute, 3);
        lv_roller_set_options(alarm_minute, "00\n01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23\n24\n25\n26\n27\n28\n29\n30\n31\n32\n33\n34\n35\n36\n37\n38\n39\n40\n41\n42\n43\n44\n45\n46\n47\n48\n49\n50\n51\n52\n53\n54\n55\n56\n57\n58\n59", LV_ROLLER_MODE_INFINITE);
        lv_roller_set_selected(alarm_minute, minute, false);
        lv_obj_add_style(alarm_minute, &roller_main, LV_PART_MAIN);
        lv_obj_add_style(alarm_minute, &roller_sel, LV_PART_SELECTED);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_2);
        lv_label_set_text(lv_label_2, "DAKİKA");
        lv_obj_set_style_text_font(lv_label_2, mono_12, 0);
        lv_obj_set_style_text_color(lv_label_2, TEXT_3, 0);
        lv_obj_set_style_text_letter_space(lv_label_2, 2, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

