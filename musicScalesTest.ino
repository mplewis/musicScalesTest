#include "musicScales.c"

void setup() {

	Serial.begin(115200);

	for (int i = 0; i <= 7; i++) {
		Serial.print("Note ");
		Serial.print(i);
		Serial.print(": ");
		Serial.println(freqScaleMinor(kA4, i));
	}
	Serial.println();

	for (int i = 0; i >= -7; i--) {
		Serial.print("Note ");
		Serial.print(i);
		Serial.print(": ");
		Serial.println(freqScaleMinor(kA4, i));
	}
	Serial.println();

	Serial.println(freqScaleMinor(kA4, 3));
	Serial.println();

}

void loop() {}