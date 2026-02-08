int temperature;

void setup() {
    pinMode(9, OUTPUT);
}

void loop() {
    temperature = readTemperature();

    if (temperature > 30) {
        digitalWrite(9, HIGH);
    } else {
        digitalWrite(9, LOW);
    }
}

