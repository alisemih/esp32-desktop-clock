/**
 * @file lvgl_ui_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "lvgl_ui_gen.h"

#if defined(LV_USE_XML) && LV_USE_XML
#endif /* LV_USE_XML */

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void check_font(lv_font_t ** font, const char * name);

/**********************
 *  STATIC VARIABLES
 **********************/

static uint32_t lvgl_ui_target = LVGL_UI_TARGET_ALL;

/*----------------
 * Translations
 *----------------*/

#ifndef LV_EDITOR_PREVIEW
    static const char * translation_languages[] = {"en", "de", NULL};
    static const char * translation_tags[] = {"dog", "cat", "house", NULL};
    static const char * translation_texts[] = {
        "This is a dog", "Das ist ein Hund", /* dog */
        "A curious little cat", "Eine neugierige kleine Katze", /* cat */
        "The house is cozy and warm", "Das Haus ist gemütlich und warm", /* house */
    };
#endif

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

lv_obj_t * alarm_set = NULL;
lv_obj_t * location = NULL;
lv_obj_t * main_screen = NULL;
lv_obj_t * settings = NULL;
lv_obj_t * time_date = NULL;
lv_obj_t * wifi_list = NULL;
lv_obj_t * wifi_password = NULL;

/*----------------
 * Fonts
 *----------------*/

lv_font_t * disp_232;
extern lv_font_t disp_232_data;
lv_font_t * disp_142;
extern lv_font_t disp_142_data;
lv_font_t * disp_112;
extern lv_font_t disp_112_data;
lv_font_t * disp_44;
extern lv_font_t disp_44_data;
lv_font_t * disp_26;
extern lv_font_t disp_26_data;
lv_font_t * mono_34;
extern lv_font_t mono_34_data;
lv_font_t * mono_26;
extern lv_font_t mono_26_data;
lv_font_t * mono_19;
extern lv_font_t mono_19_data;
lv_font_t * mono_17;
extern lv_font_t mono_17_data;
lv_font_t * mono_15;
extern lv_font_t mono_15_data;
lv_font_t * mono_13;
extern lv_font_t mono_13_data;
lv_font_t * mono_12;
extern lv_font_t mono_12_data;
lv_font_t * disp_52;
extern lv_font_t disp_52_data;
lv_font_t * disp_22;
extern lv_font_t disp_22_data;
lv_font_t * disp_18;
extern lv_font_t disp_18_data;
lv_font_t * mono_16;
extern lv_font_t mono_16_data;

/*----------------
 * Images
 *----------------*/

/* Targets: any */
const void * wx_sun_104 = NULL;
extern const void * wx_sun_104_data;
const void * wx_partly_104 = NULL;
extern const void * wx_partly_104_data;
const void * wx_cloud_104 = NULL;
extern const void * wx_cloud_104_data;
const void * wx_rain_104 = NULL;
extern const void * wx_rain_104_data;
const void * wx_moon_104 = NULL;
extern const void * wx_moon_104_data;
const void * wx_sun_46 = NULL;
extern const void * wx_sun_46_data;
const void * wx_partly_46 = NULL;
extern const void * wx_partly_46_data;
const void * wx_cloud_46 = NULL;
extern const void * wx_cloud_46_data;
const void * wx_rain_46 = NULL;
extern const void * wx_rain_46_data;
const void * wx_moon_46 = NULL;
extern const void * wx_moon_46_data;
const void * wx_sun_34 = NULL;
extern const void * wx_sun_34_data;
const void * wx_partly_34 = NULL;
extern const void * wx_partly_34_data;
const void * wx_cloud_34 = NULL;
extern const void * wx_cloud_34_data;
const void * wx_rain_34 = NULL;
extern const void * wx_rain_34_data;
const void * wx_moon_34 = NULL;
extern const void * wx_moon_34_data;
const void * ui_lock = NULL;
extern const void * ui_lock_data;
const void * ui_lock_lg = NULL;
extern const void * ui_lock_lg_data;
const void * ui_chevron = NULL;
extern const void * ui_chevron_data;
const void * ui_chevdown = NULL;
extern const void * ui_chevdown_data;
const void * ui_back = NULL;
extern const void * ui_back_data;
const void * ui_eye = NULL;
extern const void * ui_eye_data;
const void * ui_refresh = NULL;
extern const void * ui_refresh_data;
const void * ui_shift = NULL;
extern const void * ui_shift_data;
const void * ui_backspace = NULL;
extern const void * ui_backspace_data;
const void * ui_wifi_3 = NULL;
extern const void * ui_wifi_3_data;
const void * ui_wifi_2 = NULL;
extern const void * ui_wifi_2_data;
const void * ui_wifi_1 = NULL;
extern const void * ui_wifi_1_data;
const void * ui_wifi_conn = NULL;
extern const void * ui_wifi_conn_data;
const void * ui_bell = NULL;
extern const void * ui_bell_data;
const void * ui_clock = NULL;
extern const void * ui_clock_data;
const void * ui_speaker = NULL;
extern const void * ui_speaker_data;
const void * ui_pin = NULL;
extern const void * ui_pin_data;
const void * ui_pin_lg = NULL;
extern const void * ui_pin_lg_data;
const void * ui_search = NULL;
extern const void * ui_search_data;
const void * ui_close = NULL;
extern const void * ui_close_data;
const void * ui_check = NULL;
extern const void * ui_check_data;
const void * ui_wifi_plain = NULL;
extern const void * ui_wifi_plain_data;
const void * ui_gear = NULL;
extern const void * ui_gear_data;
const void * ui_bell_lg = NULL;
extern const void * ui_bell_lg_data;

/*----------------
 * Global styles
 *----------------*/

lv_style_t screen_root;
lv_style_t plain;
lv_style_t panel;
lv_style_t card;
lv_style_t card_now;
lv_style_t page_col;
lv_style_t scroll_pill;
lv_style_t row_selected;
lv_style_t divider;
lv_style_t track;
lv_style_t gauge_track;
lv_style_t gauge_warm;
lv_style_t gauge_cool;
lv_style_t no_knob;
lv_style_t key;
lv_style_t key_accent;
lv_style_t field_focus;
lv_style_t t_eyebrow;
lv_style_t t_label;
lv_style_t t_body;
lv_style_t t_value;
lv_style_t t_caption;
lv_style_t sw_track;
lv_style_t sw_ind_off;
lv_style_t sw_ind_on;
lv_style_t sw_knob;
lv_style_t sw_knob_on;
lv_style_t roller_main;
lv_style_t roller_sel;
lv_style_t chip;
lv_style_t chip_on;
lv_style_t hub_card;
lv_style_t search_field;
lv_style_t row_active;
lv_style_t btn_primary;
lv_style_t roller_date_sel;

/*----------------
 * Subjects
 *----------------*/

lv_subject_t clock_time;
lv_subject_t clock_date;
lv_subject_t clock_date_long;
lv_subject_t clock_second;
lv_subject_t room_temp_x10;
lv_subject_t room_temp_txt;
lv_subject_t room_hum;
lv_subject_t room_hum_txt;
lv_subject_t out_temp;
lv_subject_t out_cond;
lv_subject_t out_feels;
lv_subject_t wifi_ssid;
lv_subject_t wifi_enabled;
lv_subject_t wifi_found;
lv_subject_t alarm_sound;
lv_subject_t alarm_enabled;
lv_subject_t time_auto;
lv_subject_t time_24h;
lv_subject_t loc_auto;
lv_subject_t loc_city;
lv_subject_t loc_region;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void lvgl_ui_init_gen(const char * asset_path)
{
    /* When running from the editor the theme set from the XML should overwrite this */
#if !defined(LV_EDITOR_PREVIEW)
#if LV_USE_THEME_SIMPLE
    lv_display_t * disp = lv_display_get_default();
    lv_theme_t * th = lv_theme_simple_init(disp);
    lv_display_set_theme(disp, th);
#else
    LV_LOG_WARN("Simple theme is selected in project.xml but LV_USE_THEME_SIMPLE is disabled");
#endif
#endif /*LV_EDITOR_PREVIEW*/


    /*----------------
     * Fonts
     *----------------*/

    /* Targets: any */

    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        if (!disp_232) {
            /* disp_232 */
            /* get font 'disp_232' from a C array */
            disp_232 = &disp_232_data;

        }
        if (!disp_142) {
            /* disp_142 */
            /* get font 'disp_142' from a C array */
            disp_142 = &disp_142_data;

        }
        if (!disp_112) {
            /* disp_112 */
            /* get font 'disp_112' from a C array */
            disp_112 = &disp_112_data;

        }
        if (!disp_44) {
            /* disp_44 */
            /* get font 'disp_44' from a C array */
            disp_44 = &disp_44_data;

        }
        if (!disp_26) {
            /* disp_26 */
            /* get font 'disp_26' from a C array */
            disp_26 = &disp_26_data;

        }
        if (!mono_34) {
            /* mono_34 */
            /* get font 'mono_34' from a C array */
            mono_34 = &mono_34_data;

        }
        if (!mono_26) {
            /* mono_26 */
            /* get font 'mono_26' from a C array */
            mono_26 = &mono_26_data;

        }
        if (!mono_19) {
            /* mono_19 */
            /* get font 'mono_19' from a C array */
            mono_19 = &mono_19_data;

        }
        if (!mono_17) {
            /* mono_17 */
            /* get font 'mono_17' from a C array */
            mono_17 = &mono_17_data;

        }
        if (!mono_15) {
            /* mono_15 */
            /* get font 'mono_15' from a C array */
            mono_15 = &mono_15_data;

        }
        if (!mono_13) {
            /* mono_13 */
            /* get font 'mono_13' from a C array */
            mono_13 = &mono_13_data;

        }
        if (!mono_12) {
            /* mono_12 */
            /* get font 'mono_12' from a C array */
            mono_12 = &mono_12_data;

        }
        if (!disp_52) {
            /* disp_52 */
            /* get font 'disp_52' from a C array */
            disp_52 = &disp_52_data;

        }
        if (!disp_22) {
            /* disp_22 */
            /* get font 'disp_22' from a C array */
            disp_22 = &disp_22_data;

        }
        if (!disp_18) {
            /* disp_18 */
            /* get font 'disp_18' from a C array */
            disp_18 = &disp_18_data;

        }
        if (!mono_16) {
            /* mono_16 */
            /* get font 'mono_16' from a C array */
            mono_16 = &mono_16_data;

        }
    }
    #endif

    /*----------------
     * Images
     *----------------*/

    /* Targets: any */
    #if LVGL_UI_CHECK_COMPILE_TARGET(LVGL_UI_TARGET_ALL)
    if (lvgl_ui_check_target(LVGL_UI_TARGET_ALL)) {
        /* wx_sun_104 */
        if (!wx_sun_104) {
            wx_sun_104 = &wx_sun_104_data;
        }
        /* wx_partly_104 */
        if (!wx_partly_104) {
            wx_partly_104 = &wx_partly_104_data;
        }
        /* wx_cloud_104 */
        if (!wx_cloud_104) {
            wx_cloud_104 = &wx_cloud_104_data;
        }
        /* wx_rain_104 */
        if (!wx_rain_104) {
            wx_rain_104 = &wx_rain_104_data;
        }
        /* wx_moon_104 */
        if (!wx_moon_104) {
            wx_moon_104 = &wx_moon_104_data;
        }
        /* wx_sun_46 */
        if (!wx_sun_46) {
            wx_sun_46 = &wx_sun_46_data;
        }
        /* wx_partly_46 */
        if (!wx_partly_46) {
            wx_partly_46 = &wx_partly_46_data;
        }
        /* wx_cloud_46 */
        if (!wx_cloud_46) {
            wx_cloud_46 = &wx_cloud_46_data;
        }
        /* wx_rain_46 */
        if (!wx_rain_46) {
            wx_rain_46 = &wx_rain_46_data;
        }
        /* wx_moon_46 */
        if (!wx_moon_46) {
            wx_moon_46 = &wx_moon_46_data;
        }
        /* wx_sun_34 */
        if (!wx_sun_34) {
            wx_sun_34 = &wx_sun_34_data;
        }
        /* wx_partly_34 */
        if (!wx_partly_34) {
            wx_partly_34 = &wx_partly_34_data;
        }
        /* wx_cloud_34 */
        if (!wx_cloud_34) {
            wx_cloud_34 = &wx_cloud_34_data;
        }
        /* wx_rain_34 */
        if (!wx_rain_34) {
            wx_rain_34 = &wx_rain_34_data;
        }
        /* wx_moon_34 */
        if (!wx_moon_34) {
            wx_moon_34 = &wx_moon_34_data;
        }
        /* ui_lock */
        if (!ui_lock) {
            ui_lock = &ui_lock_data;
        }
        /* ui_lock_lg */
        if (!ui_lock_lg) {
            ui_lock_lg = &ui_lock_lg_data;
        }
        /* ui_chevron */
        if (!ui_chevron) {
            ui_chevron = &ui_chevron_data;
        }
        /* ui_chevdown */
        if (!ui_chevdown) {
            ui_chevdown = &ui_chevdown_data;
        }
        /* ui_back */
        if (!ui_back) {
            ui_back = &ui_back_data;
        }
        /* ui_eye */
        if (!ui_eye) {
            ui_eye = &ui_eye_data;
        }
        /* ui_refresh */
        if (!ui_refresh) {
            ui_refresh = &ui_refresh_data;
        }
        /* ui_shift */
        if (!ui_shift) {
            ui_shift = &ui_shift_data;
        }
        /* ui_backspace */
        if (!ui_backspace) {
            ui_backspace = &ui_backspace_data;
        }
        /* ui_wifi_3 */
        if (!ui_wifi_3) {
            ui_wifi_3 = &ui_wifi_3_data;
        }
        /* ui_wifi_2 */
        if (!ui_wifi_2) {
            ui_wifi_2 = &ui_wifi_2_data;
        }
        /* ui_wifi_1 */
        if (!ui_wifi_1) {
            ui_wifi_1 = &ui_wifi_1_data;
        }
        /* ui_wifi_conn */
        if (!ui_wifi_conn) {
            ui_wifi_conn = &ui_wifi_conn_data;
        }
        /* ui_bell */
        if (!ui_bell) {
            ui_bell = &ui_bell_data;
        }
        /* ui_clock */
        if (!ui_clock) {
            ui_clock = &ui_clock_data;
        }
        /* ui_speaker */
        if (!ui_speaker) {
            ui_speaker = &ui_speaker_data;
        }
        /* ui_pin */
        if (!ui_pin) {
            ui_pin = &ui_pin_data;
        }
        /* ui_pin_lg */
        if (!ui_pin_lg) {
            ui_pin_lg = &ui_pin_lg_data;
        }
        /* ui_search */
        if (!ui_search) {
            ui_search = &ui_search_data;
        }
        /* ui_close */
        if (!ui_close) {
            ui_close = &ui_close_data;
        }
        /* ui_check */
        if (!ui_check) {
            ui_check = &ui_check_data;
        }
        /* ui_wifi_plain */
        if (!ui_wifi_plain) {
            ui_wifi_plain = &ui_wifi_plain_data;
        }
        /* ui_gear */
        if (!ui_gear) {
            ui_gear = &ui_gear_data;
        }
        /* ui_bell_lg */
        if (!ui_bell_lg) {
            ui_bell_lg = &ui_bell_lg_data;
        }
    }
    #endif

    /*----------------
     * Global styles
     *----------------*/

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&screen_root);
        lv_style_init(&plain);
        lv_style_init(&panel);
        lv_style_init(&card);
        lv_style_init(&card_now);
        lv_style_init(&page_col);
        lv_style_init(&scroll_pill);
        lv_style_init(&row_selected);
        lv_style_init(&divider);
        lv_style_init(&track);
        lv_style_init(&gauge_track);
        lv_style_init(&gauge_warm);
        lv_style_init(&gauge_cool);
        lv_style_init(&no_knob);
        lv_style_init(&key);
        lv_style_init(&key_accent);
        lv_style_init(&field_focus);
        lv_style_init(&t_eyebrow);
        lv_style_init(&t_label);
        lv_style_init(&t_body);
        lv_style_init(&t_value);
        lv_style_init(&t_caption);
        lv_style_init(&sw_track);
        lv_style_init(&sw_ind_off);
        lv_style_init(&sw_ind_on);
        lv_style_init(&sw_knob);
        lv_style_init(&sw_knob_on);
        lv_style_init(&roller_main);
        lv_style_init(&roller_sel);
        lv_style_init(&chip);
        lv_style_init(&chip_on);
        lv_style_init(&hub_card);
        lv_style_init(&search_field);
        lv_style_init(&row_active);
        lv_style_init(&btn_primary);
        lv_style_init(&roller_date_sel);

        lv_style_set_bg_color(&screen_root, BG_BASE);
        lv_style_set_bg_opa(&screen_root, 255);
        lv_style_set_pad_all(&screen_root, 0);
        lv_style_set_border_width(&screen_root, 0);
        lv_style_set_radius(&screen_root, 0);
        lv_style_set_text_color(&screen_root, TEXT_1);
        lv_style_set_flex_track_place(&screen_root, LV_FLEX_ALIGN_CENTER);
        lv_style_set_bg_opa(&plain, 0);
        lv_style_set_border_width(&plain, 0);
        lv_style_set_pad_all(&plain, 0);
        lv_style_set_radius(&plain, 0);
        lv_style_set_bg_color(&panel, BG_RAISED);
        lv_style_set_bg_opa(&panel, 255);
        lv_style_set_radius(&panel, RADIUS_STRIP);
        lv_style_set_border_color(&panel, HAIRLINE);
        lv_style_set_border_opa(&panel, 20);
        lv_style_set_border_width(&panel, 1);
        lv_style_set_pad_all(&panel, 0);
        lv_style_set_bg_color(&card, BG_WELL);
        lv_style_set_bg_opa(&card, 255);
        lv_style_set_radius(&card, RADIUS_CARD);
        lv_style_set_border_color(&card, HAIRLINE);
        lv_style_set_border_opa(&card, 20);
        lv_style_set_border_width(&card, 1);
        lv_style_set_pad_top(&card, 16);
        lv_style_set_pad_bottom(&card, 16);
        lv_style_set_pad_left(&card, 8);
        lv_style_set_pad_right(&card, 8);
        lv_style_set_bg_color(&card_now, ACCENT_WARM);
        lv_style_set_bg_opa(&card_now, 36);
        lv_style_set_radius(&card_now, RADIUS_CARD);
        lv_style_set_border_color(&card_now, ACCENT_WARM);
        lv_style_set_border_opa(&card_now, 255);
        lv_style_set_border_width(&card_now, 2);
        lv_style_set_pad_top(&card_now, 16);
        lv_style_set_pad_bottom(&card_now, 16);
        lv_style_set_pad_left(&card_now, 8);
        lv_style_set_pad_right(&card_now, 8);
        lv_style_set_bg_opa(&page_col, 0);
        lv_style_set_border_width(&page_col, 0);
        lv_style_set_radius(&page_col, 0);
        lv_style_set_pad_all(&page_col, 0);
        lv_style_set_pad_row(&page_col, 0);
        lv_style_set_width(&scroll_pill, 6);
        lv_style_set_radius(&scroll_pill, 3);
        lv_style_set_bg_color(&scroll_pill, ACCENT_WARM);
        lv_style_set_bg_opa(&scroll_pill, 255);
        lv_style_set_pad_bottom(&scroll_pill, 10);
        lv_style_set_pad_hor(&scroll_pill, 370);
        lv_style_set_bg_color(&row_selected, ACCENT_WARM);
        lv_style_set_bg_opa(&row_selected, 36);
        lv_style_set_radius(&row_selected, 14);
        lv_style_set_border_width(&row_selected, 0);
        lv_style_set_bg_color(&divider, HAIRLINE);
        lv_style_set_bg_opa(&divider, 20);
        lv_style_set_border_width(&divider, 0);
        lv_style_set_radius(&divider, 0);
        lv_style_set_bg_color(&track, HAIRLINE);
        lv_style_set_bg_opa(&track, 26);
        lv_style_set_radius(&track, 3);
        lv_style_set_border_width(&track, 0);
        lv_style_set_arc_color(&gauge_track, HAIRLINE);
        lv_style_set_arc_opa(&gauge_track, 26);
        lv_style_set_arc_width(&gauge_track, 12);
        lv_style_set_arc_rounded(&gauge_track, true);
        lv_style_set_bg_opa(&gauge_track, 0);
        lv_style_set_border_width(&gauge_track, 0);
        lv_style_set_arc_color(&gauge_warm, ACCENT_WARM);
        lv_style_set_arc_width(&gauge_warm, 12);
        lv_style_set_arc_rounded(&gauge_warm, true);
        lv_style_set_arc_color(&gauge_cool, ACCENT_COOL);
        lv_style_set_arc_width(&gauge_cool, 12);
        lv_style_set_arc_rounded(&gauge_cool, true);
        lv_style_set_bg_opa(&no_knob, 0);
        lv_style_set_pad_all(&no_knob, 0);
        lv_style_set_bg_color(&key, BG_RAISED);
        lv_style_set_bg_opa(&key, 255);
        lv_style_set_radius(&key, 10);
        lv_style_set_border_color(&key, HAIRLINE);
        lv_style_set_border_opa(&key, 20);
        lv_style_set_border_width(&key, 1);
        lv_style_set_text_color(&key, TEXT_1);
        lv_style_set_bg_color(&key_accent, ACCENT_WARM);
        lv_style_set_bg_opa(&key_accent, 255);
        lv_style_set_radius(&key_accent, 10);
        lv_style_set_border_width(&key_accent, 0);
        lv_style_set_text_color(&key_accent, BG_BASE);
        lv_style_set_bg_color(&field_focus, BG_INSET);
        lv_style_set_bg_opa(&field_focus, 255);
        lv_style_set_radius(&field_focus, 15);
        lv_style_set_border_color(&field_focus, ACCENT_WARM);
        lv_style_set_border_opa(&field_focus, 255);
        lv_style_set_border_width(&field_focus, 2);
        lv_style_set_text_color(&field_focus, TEXT_1);
        lv_style_set_pad_left(&field_focus, 18);
        lv_style_set_pad_right(&field_focus, 18);
        lv_style_set_text_font(&t_eyebrow, mono_15);
        lv_style_set_text_color(&t_eyebrow, TEXT_2);
        lv_style_set_text_letter_space(&t_eyebrow, 3);
        lv_style_set_text_font(&t_label, mono_12);
        lv_style_set_text_color(&t_label, TEXT_3);
        lv_style_set_text_letter_space(&t_label, 2);
        lv_style_set_text_font(&t_body, mono_15);
        lv_style_set_text_color(&t_body, TEXT_2);
        lv_style_set_text_font(&t_value, mono_19);
        lv_style_set_text_color(&t_value, TEXT_1);
        lv_style_set_text_font(&t_caption, mono_13);
        lv_style_set_text_color(&t_caption, TEXT_3);
        lv_style_set_text_letter_space(&t_caption, 2);
        lv_style_set_bg_color(&sw_track, BG_WELL);
        lv_style_set_bg_opa(&sw_track, 255);
        lv_style_set_radius(&sw_track, 13);
        lv_style_set_border_color(&sw_track, HAIRLINE);
        lv_style_set_border_opa(&sw_track, 26);
        lv_style_set_border_width(&sw_track, 1);
        lv_style_set_shadow_width(&sw_track, 0);
        lv_style_set_pad_all(&sw_track, 0);
        lv_style_set_bg_opa(&sw_ind_off, 0);
        lv_style_set_bg_color(&sw_ind_on, ACCENT_WARM);
        lv_style_set_bg_opa(&sw_ind_on, 255);
        lv_style_set_radius(&sw_ind_on, 13);
        lv_style_set_border_color(&sw_ind_on, HAIRLINE);
        lv_style_set_border_opa(&sw_ind_on, 26);
        lv_style_set_border_width(&sw_ind_on, 1);
        lv_style_set_bg_color(&sw_knob, TEXT_3);
        lv_style_set_bg_opa(&sw_knob, 255);
        lv_style_set_radius(&sw_knob, 10);
        lv_style_set_border_width(&sw_knob, 0);
        lv_style_set_shadow_width(&sw_knob, 0);
        lv_style_set_pad_all(&sw_knob, -2);
        lv_style_set_bg_color(&sw_knob_on, BG_BASE);
        lv_style_set_bg_opa(&roller_main, 0);
        lv_style_set_border_width(&roller_main, 0);
        lv_style_set_pad_all(&roller_main, 0);
        lv_style_set_text_font(&roller_main, mono_34);
        lv_style_set_text_color(&roller_main, DIM_ROW);
        lv_style_set_text_line_space(&roller_main, 26);
        lv_style_set_text_align(&roller_main, LV_TEXT_ALIGN_CENTER);
        lv_style_set_bg_color(&roller_sel, BG_WELL);
        lv_style_set_bg_opa(&roller_sel, 255);
        lv_style_set_radius(&roller_sel, 12);
        lv_style_set_border_color(&roller_sel, HAIRLINE);
        lv_style_set_border_opa(&roller_sel, 26);
        lv_style_set_border_width(&roller_sel, 0);
        lv_style_set_text_font(&roller_sel, mono_34);
        lv_style_set_text_color(&roller_sel, TEXT_1);
        lv_style_set_bg_color(&chip, BG_WELL);
        lv_style_set_bg_opa(&chip, 255);
        lv_style_set_radius(&chip, 20);
        lv_style_set_border_color(&chip, HAIRLINE);
        lv_style_set_border_opa(&chip, 20);
        lv_style_set_border_width(&chip, 1);
        lv_style_set_text_font(&chip, mono_12);
        lv_style_set_text_color(&chip, TEXT_3);
        lv_style_set_text_letter_space(&chip, 1);
        lv_style_set_bg_color(&chip_on, ACCENT_WARM);
        lv_style_set_bg_opa(&chip_on, 255);
        lv_style_set_border_width(&chip_on, 0);
        lv_style_set_text_color(&chip_on, BG_BASE);
        lv_style_set_bg_color(&hub_card, BG_RAISED);
        lv_style_set_bg_opa(&hub_card, 255);
        lv_style_set_radius(&hub_card, 18);
        lv_style_set_border_color(&hub_card, HAIRLINE);
        lv_style_set_border_opa(&hub_card, 20);
        lv_style_set_border_width(&hub_card, 1);
        lv_style_set_pad_left(&hub_card, 20);
        lv_style_set_pad_right(&hub_card, 20);
        lv_style_set_pad_top(&hub_card, 16);
        lv_style_set_pad_bottom(&hub_card, 16);
        lv_style_set_bg_color(&search_field, BG_INSET);
        lv_style_set_bg_opa(&search_field, 255);
        lv_style_set_radius(&search_field, 14);
        lv_style_set_border_color(&search_field, ACCENT_WARM);
        lv_style_set_border_opa(&search_field, 255);
        lv_style_set_border_width(&search_field, 2);
        lv_style_set_text_font(&search_field, mono_16);
        lv_style_set_text_color(&search_field, TEXT_1);
        lv_style_set_pad_left(&search_field, 14);
        lv_style_set_pad_right(&search_field, 14);
        lv_style_set_bg_color(&row_active, ACCENT_WARM);
        lv_style_set_bg_opa(&row_active, 36);
        lv_style_set_radius(&row_active, 14);
        lv_style_set_border_width(&row_active, 0);
        lv_style_set_bg_color(&btn_primary, ACCENT_WARM);
        lv_style_set_bg_opa(&btn_primary, 255);
        lv_style_set_radius(&btn_primary, 12);
        lv_style_set_border_width(&btn_primary, 0);
        lv_style_set_text_font(&btn_primary, mono_15);
        lv_style_set_text_color(&btn_primary, BG_BASE);
        lv_style_set_text_letter_space(&btn_primary, 2);
        lv_style_set_bg_color(&roller_date_sel, BG_WELL);
        lv_style_set_bg_opa(&roller_date_sel, 255);
        lv_style_set_radius(&roller_date_sel, 10);
        lv_style_set_border_color(&roller_date_sel, HAIRLINE);
        lv_style_set_border_opa(&roller_date_sel, 26);
        lv_style_set_border_width(&roller_date_sel, 1);
        lv_style_set_text_font(&roller_date_sel, disp_18);
        lv_style_set_text_color(&roller_date_sel, TEXT_1);

        style_inited = true;
    }

    /*----------------
     * Subjects
     *----------------*/
    static char clock_time_buf[UI_SUBJECT_STRING_LENGTH];
    static char clock_time_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&clock_time,
                           clock_time_buf,
                           clock_time_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "09:42"
                          );
    static char clock_date_buf[UI_SUBJECT_STRING_LENGTH];
    static char clock_date_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&clock_date,
                           clock_date_buf,
                           clock_date_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "SALI · 12 AĞUSTOS"
                          );
    static char clock_date_long_buf[UI_SUBJECT_STRING_LENGTH];
    static char clock_date_long_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&clock_date_long,
                           clock_date_long_buf,
                           clock_date_long_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "SALI · 12 AĞUSTOS 2026"
                          );
    lv_subject_init_int(&clock_second, 38);
    lv_subject_init_int(&room_temp_x10, 224);
    static char room_temp_txt_buf[UI_SUBJECT_STRING_LENGTH];
    static char room_temp_txt_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&room_temp_txt,
                           room_temp_txt_buf,
                           room_temp_txt_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "22.4°"
                          );
    lv_subject_init_int(&room_hum, 48);
    static char room_hum_txt_buf[UI_SUBJECT_STRING_LENGTH];
    static char room_hum_txt_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&room_hum_txt,
                           room_hum_txt_buf,
                           room_hum_txt_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "48%"
                          );
    static char out_temp_buf[UI_SUBJECT_STRING_LENGTH];
    static char out_temp_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&out_temp,
                           out_temp_buf,
                           out_temp_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "24°"
                          );
    static char out_cond_buf[UI_SUBJECT_STRING_LENGTH];
    static char out_cond_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&out_cond,
                           out_cond_buf,
                           out_cond_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "Parçalı Bulutlu"
                          );
    static char out_feels_buf[UI_SUBJECT_STRING_LENGTH];
    static char out_feels_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&out_feels,
                           out_feels_buf,
                           out_feels_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "Hissedilen 26°"
                          );
    static char wifi_ssid_buf[UI_SUBJECT_STRING_LENGTH];
    static char wifi_ssid_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&wifi_ssid,
                           wifi_ssid_buf,
                           wifi_ssid_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "Yılmaz_Ev"
                          );
    lv_subject_init_int(&wifi_enabled, 1);
    lv_subject_init_int(&wifi_found, 6);
    static char alarm_sound_buf[UI_SUBJECT_STRING_LENGTH];
    static char alarm_sound_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&alarm_sound,
                           alarm_sound_buf,
                           alarm_sound_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "Klasik Çan"
                          );
    lv_subject_init_int(&alarm_enabled, 1);
    lv_subject_init_int(&time_auto, 0);
    lv_subject_init_int(&time_24h, 1);
    lv_subject_init_int(&loc_auto, 0);
    static char loc_city_buf[UI_SUBJECT_STRING_LENGTH];
    static char loc_city_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&loc_city,
                           loc_city_buf,
                           loc_city_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "İstanbul"
                          );
    static char loc_region_buf[UI_SUBJECT_STRING_LENGTH];
    static char loc_region_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&loc_region,
                           loc_region_buf,
                           loc_region_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "Marmara Bölgesi"
                          );

    /*----------------
     * Translations
     *----------------*/

    #ifndef LV_EDITOR_PREVIEW
        lv_translation_add_static(translation_languages, translation_tags, translation_texts);
        lv_translation_set_language(translation_languages[0]);
    #endif

#if defined(LV_USE_XML) && LV_USE_XML
    /* Register widgets */

    /* Check all fonts / default if needed. This prevents fonts that are used in one target but
       defined in another from causing assertion failures during rendering of the Preview. */
    check_font(&disp_232, "disp_232");
    check_font(&disp_142, "disp_142");
    check_font(&disp_112, "disp_112");
    check_font(&disp_44, "disp_44");
    check_font(&disp_26, "disp_26");
    check_font(&mono_34, "mono_34");
    check_font(&mono_26, "mono_26");
    check_font(&mono_19, "mono_19");
    check_font(&mono_17, "mono_17");
    check_font(&mono_15, "mono_15");
    check_font(&mono_13, "mono_13");
    check_font(&mono_12, "mono_12");
    check_font(&disp_52, "disp_52");
    check_font(&disp_22, "disp_22");
    check_font(&disp_18, "disp_18");
    check_font(&mono_16, "mono_16");

    /* Register fonts */
    lv_xml_register_font(NULL, "disp_232", disp_232);
    lv_xml_register_font(NULL, "disp_142", disp_142);
    lv_xml_register_font(NULL, "disp_112", disp_112);
    lv_xml_register_font(NULL, "disp_44", disp_44);
    lv_xml_register_font(NULL, "disp_26", disp_26);
    lv_xml_register_font(NULL, "mono_34", mono_34);
    lv_xml_register_font(NULL, "mono_26", mono_26);
    lv_xml_register_font(NULL, "mono_19", mono_19);
    lv_xml_register_font(NULL, "mono_17", mono_17);
    lv_xml_register_font(NULL, "mono_15", mono_15);
    lv_xml_register_font(NULL, "mono_13", mono_13);
    lv_xml_register_font(NULL, "mono_12", mono_12);
    lv_xml_register_font(NULL, "disp_52", disp_52);
    lv_xml_register_font(NULL, "disp_22", disp_22);
    lv_xml_register_font(NULL, "disp_18", disp_18);
    lv_xml_register_font(NULL, "mono_16", mono_16);

    /* Register subjects */
    lv_xml_register_subject(NULL, "clock_time", &clock_time);
    lv_xml_register_subject(NULL, "clock_date", &clock_date);
    lv_xml_register_subject(NULL, "clock_date_long", &clock_date_long);
    lv_xml_register_subject(NULL, "clock_second", &clock_second);
    lv_xml_register_subject(NULL, "room_temp_x10", &room_temp_x10);
    lv_xml_register_subject(NULL, "room_temp_txt", &room_temp_txt);
    lv_xml_register_subject(NULL, "room_hum", &room_hum);
    lv_xml_register_subject(NULL, "room_hum_txt", &room_hum_txt);
    lv_xml_register_subject(NULL, "out_temp", &out_temp);
    lv_xml_register_subject(NULL, "out_cond", &out_cond);
    lv_xml_register_subject(NULL, "out_feels", &out_feels);
    lv_xml_register_subject(NULL, "wifi_ssid", &wifi_ssid);
    lv_xml_register_subject(NULL, "wifi_enabled", &wifi_enabled);
    lv_xml_register_subject(NULL, "wifi_found", &wifi_found);
    lv_xml_register_subject(NULL, "alarm_sound", &alarm_sound);
    lv_xml_register_subject(NULL, "alarm_enabled", &alarm_enabled);
    lv_xml_register_subject(NULL, "time_auto", &time_auto);
    lv_xml_register_subject(NULL, "time_24h", &time_24h);
    lv_xml_register_subject(NULL, "loc_auto", &loc_auto);
    lv_xml_register_subject(NULL, "loc_city", &loc_city);
    lv_xml_register_subject(NULL, "loc_region", &loc_region);

    /* Register callbacks */
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if defined(LV_USE_XML) && LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
    lv_xml_register_image(NULL, "wx_sun_104", wx_sun_104);
    lv_xml_register_image(NULL, "wx_partly_104", wx_partly_104);
    lv_xml_register_image(NULL, "wx_cloud_104", wx_cloud_104);
    lv_xml_register_image(NULL, "wx_rain_104", wx_rain_104);
    lv_xml_register_image(NULL, "wx_moon_104", wx_moon_104);
    lv_xml_register_image(NULL, "wx_sun_46", wx_sun_46);
    lv_xml_register_image(NULL, "wx_partly_46", wx_partly_46);
    lv_xml_register_image(NULL, "wx_cloud_46", wx_cloud_46);
    lv_xml_register_image(NULL, "wx_rain_46", wx_rain_46);
    lv_xml_register_image(NULL, "wx_moon_46", wx_moon_46);
    lv_xml_register_image(NULL, "wx_sun_34", wx_sun_34);
    lv_xml_register_image(NULL, "wx_partly_34", wx_partly_34);
    lv_xml_register_image(NULL, "wx_cloud_34", wx_cloud_34);
    lv_xml_register_image(NULL, "wx_rain_34", wx_rain_34);
    lv_xml_register_image(NULL, "wx_moon_34", wx_moon_34);
    lv_xml_register_image(NULL, "ui_lock", ui_lock);
    lv_xml_register_image(NULL, "ui_lock_lg", ui_lock_lg);
    lv_xml_register_image(NULL, "ui_chevron", ui_chevron);
    lv_xml_register_image(NULL, "ui_chevdown", ui_chevdown);
    lv_xml_register_image(NULL, "ui_back", ui_back);
    lv_xml_register_image(NULL, "ui_eye", ui_eye);
    lv_xml_register_image(NULL, "ui_refresh", ui_refresh);
    lv_xml_register_image(NULL, "ui_shift", ui_shift);
    lv_xml_register_image(NULL, "ui_backspace", ui_backspace);
    lv_xml_register_image(NULL, "ui_wifi_3", ui_wifi_3);
    lv_xml_register_image(NULL, "ui_wifi_2", ui_wifi_2);
    lv_xml_register_image(NULL, "ui_wifi_1", ui_wifi_1);
    lv_xml_register_image(NULL, "ui_wifi_conn", ui_wifi_conn);
    lv_xml_register_image(NULL, "ui_bell", ui_bell);
    lv_xml_register_image(NULL, "ui_clock", ui_clock);
    lv_xml_register_image(NULL, "ui_speaker", ui_speaker);
    lv_xml_register_image(NULL, "ui_pin", ui_pin);
    lv_xml_register_image(NULL, "ui_pin_lg", ui_pin_lg);
    lv_xml_register_image(NULL, "ui_search", ui_search);
    lv_xml_register_image(NULL, "ui_close", ui_close);
    lv_xml_register_image(NULL, "ui_check", ui_check);
    lv_xml_register_image(NULL, "ui_wifi_plain", ui_wifi_plain);
    lv_xml_register_image(NULL, "ui_gear", ui_gear);
    lv_xml_register_image(NULL, "ui_bell_lg", ui_bell_lg);
#endif

#if !defined(LV_USE_XML) || LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manually from XML using lv_xml_create() */
    /* To allow screens to reference each other, create them all before calling the sceen create functions */
    alarm_set = lv_obj_create(NULL);
    location = lv_obj_create(NULL);
    main_screen = lv_obj_create(NULL);
    settings = lv_obj_create(NULL);
    time_date = lv_obj_create(NULL);
    wifi_list = lv_obj_create(NULL);
    wifi_password = lv_obj_create(NULL);

    alarm_set_create();
    location_create();
    main_screen_create();
    settings_create();
    time_date_create();
    wifi_list_create();
    wifi_password_create();
#endif
}

void lvgl_ui_set_target(uint32_t target)
{
    lvgl_ui_target = target;
}

uint32_t lvgl_ui_get_target(void)
{
    return lvgl_ui_target;
}

bool lvgl_ui_check_target(uint32_t target)
{
    return (lvgl_ui_target & target) ? true : false;
}

/* Callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/

static void check_font(lv_font_t ** font, const char * name)
{
    if (!(*font)) {
        *font = (lv_font_t *)LV_FONT_DEFAULT;
        LV_LOG_WARN("font `%s` was not set. Using `LV_FONT_DEFAULT` instead", name);
    }
}