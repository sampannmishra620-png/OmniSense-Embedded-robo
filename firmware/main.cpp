/**
 * @file main.cpp
 * @brief Firmware structure for OmniSense Autonomous 4WD Embedded Rover
 * @author Sampan Mishra
 */

#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// --- Pin Definitions ---
#define TRIG_PIN    9
#define ECHO_PIN    10
#define BUZZER_PIN  8
#define BT_RX_PIN   2
#define BT_TX_PIN   3

// L298N Motor Driver Pins
#define MOTOR_IN1   4
#define MOTOR_IN2   5
#define MOTOR_IN3   6
#define MOTOR_IN4   7

// OLED Config (I2C)
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Bluetooth Serial Interface
SoftwareSerial btSerial(BT_RX_PIN, BT_TX_PIN);

void setup() {
    Serial.begin(9600);
    btSerial.begin(9600);

    // Initialize Peripherals
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
    pinMode(BUZZER_PIN, OUTPUT);

    pinMode(MOTOR_IN1, OUTPUT);
    pinMode(MOTOR_IN2, OUTPUT);
    pinMode(MOTOR_IN3, OUTPUT);
    pinMode(MOTOR_IN4, OUTPUT);

    // Initialize OLED Display
    if(display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
        display.clearDisplay();
        display.setTextSize(1);
        display.setTextColor(SSD1306_WHITE);
        display.setCursor(0, 10);
        display.println(F("OmniSense Initialized"));
        display.display();
    }
}

void loop() {
    // Sensor reading and state machine logic will be executed here
}
