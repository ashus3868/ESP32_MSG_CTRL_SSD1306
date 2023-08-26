/*
 * SPDX-FileCopyrightText: 2021-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */
// demo code here

#include "lvgl.h"

void example_lvgl_demo_ui(lv_disp_t *disp, char * message)
{
    lv_obj_t *scr = lv_disp_get_scr_act(disp);
    // Clear the screen
    lv_obj_clean(scr);
    
    lv_obj_t *label = lv_label_create(scr);
    lv_label_set_long_mode(label, LV_LABEL_LONG_WRAP); /* Circular scroll */
    lv_label_set_text(label, message);
    /* Size of the screen (if you use rotation 90 or 270, please set disp->driver->ver_res) */
    lv_obj_set_width(label, disp->driver->hor_res);
    lv_obj_align(label, LV_ALIGN_TOP_MID, 0, 30);
    
    // Refresh the display
    lv_disp_flush_ready(disp);
}
