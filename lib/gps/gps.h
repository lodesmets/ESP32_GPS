
#ifndef gps_h_
#define gps_h_
#include <TinyGPS++.h>
#include <math.h>
#include <stdint.h>
#include <HardwareSerial.h>
#include "graphics.h"

/// @brief Point in geografic (lat,lon) coordinates and other gps data
struct Coord {
    Point32 getPoint32();
    double lat = 0;
    double lng = 0;
    int16_t altitude = 0;
    int16_t direction = 0;
    int16_t satellites = 0;
    uint8_t hour = 0;
    uint8_t minute = 0;
    uint8_t second = 0;
    bool isValid = false;
    bool isUpdated = false;
};


bool getPosition(HardwareSerial& serialGPS, Coord& coord);

void initGps(HardwareSerial& serialGPS);

#endif