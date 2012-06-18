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

	// this should print the freqs of a blues scale starting at Bb:
	// Bb, D, Eb, E, F, Ab, Bb
	for (int i = 0; i <= 6; i++) {
		Serial.print("Note ");
		Serial.print(i);
		Serial.print(": ");
		Serial.println(freqScaleBlues(kAs2, i));
	}
	Serial.println();
	for (int i = 0; i >= -6; i--) {
		Serial.print("Note ");
		Serial.print(i);
		Serial.print(": ");
		Serial.println(freqScaleBlues(kAs2, i));
	}
}

void loop() {}