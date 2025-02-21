/*
Copyright 2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* period of tapping(ms) */
#ifndef TAPPING_TERM
#    define TAPPING_TERM 200
#endif

/* period of quick tap(ms) */
#if !defined(QUICK_TAP_TERM) || QUICK_TAP_TERM > TAPPING_TERM
#    define QUICK_TAP_TERM TAPPING_TERM
#endif

/* tap count needed for toggling a feature */
#ifndef TAPPING_TOGGLE
#    define TAPPING_TOGGLE 2
#endif

#define WAITING_BUFFER_SIZE 8

#ifndef NO_ACTION_TAPPING
uint16_t get_record_keycode(keyrecord_t *record, bool update_layer_cache);
uint16_t get_event_keycode(keyevent_t event, bool update_layer_cache);
void     action_tapping_process(keyrecord_t record);
#endif

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record);
uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record);
bool     get_permissive_hold(uint16_t keycode, keyrecord_t *record);
bool     get_retro_tapping(uint16_t keycode, keyrecord_t *record);
bool     get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record);

#ifdef DYNAMIC_TAPPING_TERM_ENABLE
extern uint16_t g_tapping_term;
#endif

#if defined(TAPPING_TERM_PER_KEY) && !defined(NO_ACTION_TAPPING)
#    define GET_TAPPING_TERM(keycode, record) get_tapping_term(keycode, record)
#elif defined(DYNAMIC_TAPPING_TERM_ENABLE) && !defined(NO_ACTION_TAPPING)
#    define GET_TAPPING_TERM(keycode, record) g_tapping_term
#else
#    define GET_TAPPING_TERM(keycode, record) (TAPPING_TERM)
#endif

#ifdef QUICK_TAP_TERM_PER_KEY
#    define GET_QUICK_TAP_TERM(keycode, record) get_quick_tap_term(keycode, record)
#else
#    define GET_QUICK_TAP_TERM(keycode, record) (QUICK_TAP_TERM)
#endif
