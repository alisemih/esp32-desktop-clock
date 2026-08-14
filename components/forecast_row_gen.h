/**
 * @file forecast_row_gen.h
 */

#ifndef LVGL_PRO_FORECAST_ROW_GEN_H
#define LVGL_PRO_FORECAST_ROW_GEN_H

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

lv_obj_t * forecast_row_create(lv_obj_t * parent, const char * day, const void * icon, const char * cond, const char * lo, const char * hi, int32_t lo_val, int32_t hi_val);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LVGL_PRO_FORECAST_ROW_GEN_H*/