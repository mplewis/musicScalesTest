#include "musicScales.c"

void setup() {
	Serial.begin(115200);
	float middleC = pianoFreq[kC4];
	float fourFourty = pianoFreq[kA5];
	float highC = pianoFreq[kC4 + 24];
	Serial.println(middleC);
	Serial.println(fourFourty);
	Serial.println(highC);
	float perfectFourth = pianoFreq[kC4 + per4];
	float triTone = pianoFreq[kC4 + triT];
	Serial.println(perfectFourth);
	Serial.println(triTone);
	Serial.println();
	for (int i = 0; i <= 6; i++) {
		Serial.println(freqScaleBlues(kAs2, i));
	}
}

void loop() {}