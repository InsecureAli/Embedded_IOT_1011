// PWM Example – LED Brightness Fade

#include <Arduino.h>
#define LED_PIN 18
#define PWM_CH 0
#define FREQ 5000
#define RES 8
void setup() {
  ledcSetup(PWM_CH, FREQ, RES);
  ledcAttachPin(LED_PIN, PWM_CH);
}
void loop() {
  for (int d=0; d<=255; d++) { 
ledcWrite(PWM_CH, d); delay(10); }
  for (int d=255; d>=0; d--) { 
ledcWrite(PWM_CH, d); delay(10); }
}

//---------------

#include <Arduino.h>

#define BUZZER_PIN  27     // GPIO connected to buzzer
#define PWM_CH      0      // PWM channel (0–15)
#define FREQ        2000   // Default frequency (Hz)
#define RESOLUTION  10     // 10-bit resolution (0–1023)

void setup() {
  // Setup PWM channel
  ledcSetup(PWM_CH, FREQ, RESOLUTION);
  ledcAttachPin(BUZZER_PIN, PWM_CH);

  // --- 1. Simple beep pattern ---
  for (int i = 0; i < 3; i++) {
    ledcWriteTone(PWM_CH, 2000 + i * 400); // change tone
    delay(150);
    ledcWrite(PWM_CH, 0);                  // stop tone
    delay(150);
  }

  // --- 2. Frequency sweep (400Hz → 3kHz) ---
  for (int f = 400; f <= 3000; f += 100) {
    ledcWriteTone(PWM_CH, f);
    delay(20);
  }
  ledcWrite(PWM_CH, 0);
  delay(500);

  // --- 3. Short melody ---
  int melody[] = {262, 294, 330, 349, 392, 440, 494, 523};
  for (int i = 0; i < 8; i++) {
    ledcWriteTone(PWM_CH, melody[i]);
    delay(250);
  }
  ledcWrite(PWM_CH, 0); // stop buzzer
}

void loop() {
  // Nothing here
}