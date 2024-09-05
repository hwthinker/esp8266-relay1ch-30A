#include <Arduino.h>

#define relay 16
#define LEDESP 2
#define  LEDBoard 5
// Daftar GPIO output yang dapat digunakan pada ESP8266
int gpio_pins[] = {LEDESP, LEDBoard, relay}; 
int total_pins = sizeof(gpio_pins) / sizeof(gpio_pins[0]);

void setup() {
  // Inisialisasi semua pin sebagai output
  for (int i = 0; i < total_pins; i++) {
    pinMode(gpio_pins[i], OUTPUT);
  }
}

void loop() {
  // Nyalakan semua GPIO secara serempak
  for (int i = 0; i < total_pins; i++) {
    digitalWrite(gpio_pins[i], HIGH);
  }
  delay(1000); // Tunggu 1 detik

  // Matikan semua GPIO secara serempak
  for (int i = 0; i < total_pins; i++) {
    digitalWrite(gpio_pins[i], LOW);
  }
  delay(1000); // Tunggu 1 detik
}
