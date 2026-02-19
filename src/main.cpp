/**
 * @file main.cpp
 * @brief Example Arduino sketch for reading temperature and humidity from a DHT11 sensor.
 *
 * This sketch initializes the DHT11 sensor and the serial port, then repeatedly
 * reads temperature and humidity values and writes them to the serial console.
 * It demonstrates basic error handling for failed sensor reads.
 *
 * Hardware connections:
 *  - DHT data pin -> digital pin D2 (use a pull-up resistor if required by your module)
 *  - VCC -> 5V (or 3.3V depending on your module)
 *  - GND -> GND
 *
 * Usage:
 *  - Monitor the serial output at 9600 baud to see humidity and temperature readings.
 *
 * @author
 * @date 2026-02-17
 * @version 1.0
 *
 * @note This file depends on the DHT library (DHT.h). Make sure the library is
 *       installed in the Arduino/PlatformIO environment.
 */

#include <Arduino.h>
#include <DHT.h>

/**
 * @def DHTPIN
 * @brief Arduino digital pin number where the DHT data pin is connected.
 */
#define DHTPIN 2     // Digital pin connected to the DHT sensor

/**
 * @def DHTTYPE
 * @brief Type of DHT sensor used (DHT11 in this example).
 */
#define DHTTYPE DHT11

/**
 * @brief Global instance of the DHT sensor driver.
 *
 * Constructed with the configured data pin and sensor type.
 */
DHT dht(DHTPIN, DHTTYPE);

/**
 * @brief Arduino setup() function.
 *
 * Initializes serial communication at 9600 baud and starts the DHT sensor.
 * Also prints an initialization message to the serial console.
 *
 * @return void
 */
