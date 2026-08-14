/**
 * @file stat_gauge_gen.h
 */

#ifndef LVGL_PRO_STAT_GAUGE_GEN_H
#define LVGL_PRO_STAT_GAUGE_GEN_H

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

lv_obj_t * stat_gauge_create(lv_obj_t * parent, int32_t value, int32_t min_value, int32_t max_value, const char * text, const char * unit, const char * caption, lv_color_t accent);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LVGL_PRO_STAT_GAUGE_GEN_H*/