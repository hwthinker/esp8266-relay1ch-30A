#include <Arduino.h>

// Daftar GPIO output yang dapat digunakan pada ESP8266
int gpio_pins[] = {0, 1, 2, 3, 4, 5, 12, 13, 14, 15, 16}; 
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
