#define BAUD_RATE 115200
#define INPUT_PIN 5

volatile int pwm_value = 0;
volatile int previous_time = 0;

void setup() {
  Serial.begin(BAUD_RATE);
  attachInterrupt(INPUT_PIN, rising, RISING);
}

void loop() {
  Serial.println(pwm_value);
  delay(1000);
}

void rising() {
  previous_time = micros();
  attachInterrupt(INPUT_PIN, falling, FALLING);
}

void falling() {
  pwm_value = micros()-previous_time;
  attachInterrupt(INPUT_PIN, rising, RISING);
}
