#ifndef MAIN
#define MAIN

#include <Arduino.h>
#include <lmic.h>
#include <hal/hal.h>
#include <SPI.h>
#include "abpAuth.h"


void onEvent (ev_t ev);
void do_send(osjob_t* j);
void os_getArtEui (u1_t* buf) { };
void os_getDevEui (u1_t* buf) { };
void os_getDevKey (u1_t* buf) { };

#endif /* MAIN */
