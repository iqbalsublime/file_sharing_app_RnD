/*
 * Copyright (c) 2015 Samsung Electronics Co., Ltd All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the License);
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef USR_CB_H
#define USR_CB_H

#include "main.h"
#include<string.h>

#include <contacts.h>

#include <calendar.h>

typedef struct _calendar_gl_event_data {
    int id;
    char *summary;
    char *description;
    calendar_time_s start_time;
} calendar_gl_event_data_t;

typedef struct _calendar_gl_todo_data {
    int id;
    char *summary;
    char *description;
    calendar_time_s due_time;
} calendar_gl_todo_data_t;


void contacts_deinit(void *data);

void _free_gl_event_data(calendar_gl_event_data_t *gl_event_data);
void _free_gl_todo_data(calendar_gl_todo_data_t *gl_todo_data);
void calendar_cleanup(bool print_on_screen);


void create_buttons_in_main_window(appdata_s *ad);

void create_buttons_in_main_window1(appdata_s *ad);

//void create_buttons_in_main_window2(appdata_s *ad);

void create_buttons_in_main_window2(Evas_Object *display, appdata_s *ad);

void create_buttons_in_main_window3(appdata_s *ad);

void create_buttons_in_main_window4(appdata_s *ad, void *data, Evas_Object *obj, void *event_info);

void create_buttons_in_main_window5(appdata_s *ad, Evas_Object *obj, void *event_info);

void create_buttons_in_main_window6(appdata_s *ad, Evas_Object *obj, void *event_info);

void create_buttons_in_main_window7(appdata_s *ad, Evas_Object *obj, void *event_info);

void create_buttons_in_main_window8(appdata_s *ad, Evas_Object *obj, void *event_info);
void create_buttons_in_main_window9(appdata_s *ad);

void create_buttons_in_main_window10(appdata_s *ad, char *data, Evas_Object *obj, void *event_info);

void create_buttons_in_main_window11(appdata_s *ad, Evas_Object *obj, void *event_info);

void create_buttons_in_main_window12(appdata_s *ad, Evas_Object *obj, void *event_info);

void create_buttons_in_main_window13(appdata_s *ad, Evas_Object *obj, void *event_info);


void create_buttons_in_main_window14(appdata_s *ad, Evas_Object *obj, void *event_info);



void create_buttons_in_main_window15(appdata_s *ad, Evas_Object *obj, void *event_info);

void create_buttons_in_main_window16(appdata_s *ad, Evas_Object *obj, void *event_info);


void create_buttons_in_main_window17(appdata_s *ad, Evas_Object *obj, void *event_info);


void create_buttons_in_main_window18(appdata_s *ad, Evas_Object *obj, void *event_info);
void create_buttons_in_main_window19(appdata_s *ad, Evas_Object *obj, void *event_info);
void create_buttons_in_main_window20(appdata_s *ad, Evas_Object *obj, void *event_info);
void create_buttons_in_main_window21(appdata_s *ad1);
#endif
