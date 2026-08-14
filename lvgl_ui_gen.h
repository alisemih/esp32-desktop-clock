/**
 * @file lvgl_ui_gen.h
 */

#ifndef LVGL_PRO_LVGL_UI_GEN_H
#define LVGL_PRO_LVGL_UI_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
    #include "lvgl_private.h"
#else
    #include "lvgl/lvgl.h"
    #include "lvgl/lvgl_private.h"
#endif

#if defined(LV_USE_XML) && LV_USE_XML
    #include "lv_xml/lv_xml.h"
#endif



/* Prototypes for target functions, needed by responsive const definitions */

void lvgl_ui_set_target(uint32_t target);
uint32_t lvgl_ui_get_target(void);
bool lvgl_ui_check_target(uint32_t target);

/*********************
 *      DEFINES
 *********************/

#define LVGL_UI_TARGET_UNDEFINED  (0 << 1)
#define LVGL_UI_TARGET_TARGET1    (1 << 1)
#define LVGL_UI_TARGET_ALL        0x0FFFFFFF

/* By default compile for all targets, allowing to switch to any targets at runtime */
#ifndef LVGL_UI_COMPILE_TARGET
#define LVGL_UI_COMPILE_TARGET LVGL_UI_TARGET_ALL
#endif

#define LVGL_UI_CHECK_COMPILE_TARGET(target) (LVGL_UI_COMPILE_TARGET & (target) ? 1 : 0)

#define BG_BASE lv_color_hex(0x0E131A)
#define BG_RAISED lv_color_hex(0x172029)
#define BG_INSET lv_color_hex(0x0A0E13)
#define BG_WELL lv_color_hex(0x121A22)
#define TEXT_1 lv_color_hex(0xF0F3F6)
#define TEXT_2 lv_color_hex(0x93A0AD)
#define TEXT_3 lv_color_hex(0x5A6672)
#define ACCENT_WARM lv_color_hex(0xF4A65A)
#define ACCENT_COOL lv_color_hex(0x6DC7E8)
#define HAIRLINE lv_color_hex(0xFFFFFF)
#define PAD_EDGE 44
#define RADIUS_CARD 18
#define RADIUS_STRIP 22
#define ANIM_MS 500


#ifndef LV_XML_EVAL_STRING_BUF_SIZE
    #define LV_XML_EVAL_STRING_BUF_SIZE 256
#endif

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

extern lv_obj_t * main_screen;
extern lv_obj_t * wifi_password;

/*----------------
 * Global styles
 *----------------*/

extern lv_style_t screen_root;
extern lv_style_t plain;
extern lv_style_t panel;
extern lv_style_t card;
extern lv_style_t card_now;
extern lv_style_t page_col;
extern lv_style_t scroll_pill;
extern lv_style_t row_selected;
extern lv_style_t divider;
extern lv_style_t track;
extern lv_style_t gauge_track;
extern lv_style_t gauge_warm;
extern lv_style_t gauge_cool;
extern lv_style_t no_knob;
extern lv_style_t key;
extern lv_style_t key_accent;
extern lv_style_t field_focus;
extern lv_style_t t_eyebrow;
extern lv_style_t t_label;
extern lv_style_t t_body;
extern lv_style_t t_value;
extern lv_style_t t_caption;
extern lv_style_t sw_track;
extern lv_style_t sw_ind_off;
extern lv_style_t sw_ind_on;
extern lv_style_t sw_knob;
extern lv_style_t sw_knob_on;

/*----------------
 * Fonts
 *----------------*/

/* Targets: any */
extern lv_font_t * disp_232;
extern lv_font_t * disp_142;
extern lv_font_t * disp_112;
extern lv_font_t * disp_44;
extern lv_font_t * disp_26;
extern lv_font_t * mono_34;
extern lv_font_t * mono_26;
extern lv_font_t * mono_19;
extern lv_font_t * mono_17;
extern lv_font_t * mono_15;
extern lv_font_t * mono_13;
extern lv_font_t * mono_12;


/*----------------
 * Images
 *----------------*/

/* Targets: any */
extern const void * wx_sun_104;
extern const void * wx_partly_104;
extern const void * wx_cloud_104;
extern const void * wx_rain_104;
extern const void * wx_moon_104;
extern const void * wx_sun_46;
extern const void * wx_partly_46;
extern const void * wx_cloud_46;
extern const void * wx_rain_46;
extern const void * wx_moon_46;
extern const void * wx_sun_34;
extern const void * wx_partly_34;
extern const void * wx_cloud_34;
extern const void * wx_rain_34;
extern const void * wx_moon_34;
extern const void * ui_lock;
extern const void * ui_lock_lg;
extern const void * ui_chevron;
extern const void * ui_chevdown;
extern const void * ui_back;
extern const void * ui_eye;
extern const void * ui_refresh;
extern const void * ui_shift;
extern const void * ui_backspace;
extern const void * ui_wifi_3;
extern const void * ui_wifi_2;
extern const void * ui_wifi_1;
extern const void * ui_wifi_conn;

/*----------------
 * Subjects
 *----------------*/

extern lv_subject_t clock_time;
extern lv_subject_t clock_date;
extern lv_subject_t clock_date_long;
extern lv_subject_t clock_second;
extern lv_subject_t room_temp_x10;
extern lv_subject_t room_temp_txt;
extern lv_subject_t room_hum;
extern lv_subject_t room_hum_txt;
extern lv_subject_t out_temp;
extern lv_subject_t out_cond;
extern lv_subject_t out_feels;
extern lv_subject_t wifi_ssid;
extern lv_subject_t wifi_enabled;
extern lv_subject_t wifi_found;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void lvgl_ui_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widgets, components and screens of this library*/
#include "components/clock_full_gen.h"
#include "components/day_slot_gen.h"
#include "components/forecast_row_gen.h"
#include "components/home_main_gen.h"
#include "components/hour_card_gen.h"
#include "components/stat_gauge_gen.h"
#include "components/weather_daily_gen.h"
#include "components/weather_hourly_gen.h"
#include "components/wifi_list_gen.h"
#include "components/wifi_row_gen.h"
#include "screens/main_screen_gen.h"
#include "screens/wifi_password_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LVGL_PRO_LVGL_UI_GEN_H*/