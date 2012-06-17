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
}

void loop() {}