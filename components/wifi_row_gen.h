/**
 * @file wifi_row_gen.h
 */

#ifndef LVGL_PRO_WIFI_ROW_GEN_H
#define LVGL_PRO_WIFI_ROW_GEN_H

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

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_obj_t * wifi_row_create(lv_obj_t * parent, const void * icon, const char * ssid, const char * meta, lv_color_t accent, int32_t lock_opa, int32_t chev_opa, const char * badge_text, int32_t badge_opa);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LVGL_PRO_WIFI_ROW_GEN_H*/