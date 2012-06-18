/* musicScales.c by Matthew Lewis (github.com/mplewis)
 * Lays out some easily indexed and accessed arrays for holding frequencies of notes
 */

/* note definitions begin here
 * notes contain a float value of the frequency of the note
 * structure: nXN, nXsN
 * X = note (A to G) with or without 's' for sharp
 * N = octave (0 to 8)
 * only octave 8 note is C, only octave 0 notes are A, As, and B
 */

#define nC8  4186.01

#define nB7  3951.07
#define nAs7 3729.31
#define nA7  3520.00
#define nGs7 3322.44
#define nG7  3135.96
#define nFs7 2959.96
#define nF7  2793.83
#define nE7  2637.02
#define nDs7 2489.02
#define nD7  2349.32
#define nCs7 2217.46
#define nC7  2093.00

#define nB6  1975.53
#define nAs6 1864.66
#define nA6  1760.00
#define nGs6 1661.22
#define nG6  1567.98
#define nFs6 1479.98
#define nF6  1396.91
#define nE6  1318.51
#define nDs6 1244.51
#define nD6  1174.66
#define nCs6 1108.73
#define nC6  1046.50

#define nB5  987.767
#define nAs5 932.328
#define nA5  880.000
#define nGs5 830.609
#define nG5  783.991
#define nFs5 739.989
#define nF5  698.456
#define nE5  659.255
#define nDs5 622.254
#define nD5  587.330
#define nCs5 554.365
#define nC5  523.251

#define nB4  493.883
#define nAs4 466.164
#define nA4  440.000
#define nGs4 415.305
#define nG4  391.995
#define nFs4 369.994
#define nF4  349.228
#define nE4  329.628
#define nDs4 311.127
#define nD4  293.665
#define nCs4 277.183
#define nC4  261.626

#define nB3  246.942
#define nAs3 233.082
#define nA3  220.000
#define nGs3 207.652
#define nG3  195.998
#define nFs3 184.997
#define nF3  174.614
#define nE3  164.814
#define nDs3 155.563
#define nD3  146.832
#define nCs3 138.591
#define nC3  130.813

#define nB2  123.471
#define nAs2 116.541
#define nA2  110.000
#define nGs2 103.826
#define nG2  97.9989
#define nFs2 92.4986
#define nF2  87.3071
#define nE2  82.4069
#define nDs2 77.7817
#define nD2  73.4162
#define nCs2 69.2957
#define nC2  65.4064

#define nB1  61.7354
#define nAs1 58.2705
#define nA1  55.0000
#define nGs1 51.9131
#define nG1  48.9994
#define nFs1 46.2493
#define nF1  43.6535
#define nE1  41.2034
#define nDs1 38.8909
#define nD1  36.7081
#define nCs1 34.6478
#define nC1  32.7032

#define nB0  30.8677
#define nAs0 29.1352
#define nA0  27.5000

/* key definitions begin here
 * keys contain the number of the note on the keyboard
 * structure: kXN, kXsN
 * X = note (A to G) with or without 's' for sharp
 * N = octave (0 to 8)
 * only octave 8 note is C, only octave 0 notes are A, As, and B
 */

#define kC8  87

#define kB7  86
#define kAs7 85
#define kA7  84
#define kGs7 83
#define kG7  82
#define kFs7 81
#define kF7  80
#define kE7  79
#define kDs7 78
#define kD7  77
#define kCs7 76
#define kC7  75

#define kB6  74
#define kAs6 73
#define kA6  72
#define kGs6 71
#define kG6  70
#define kFs6 69
#define kF6  68
#define kE6  67
#define kDs6 66
#define kD6  65
#define kCs6 64
#define kC6  63

#define kB5  62
#define kAs5 61
#define kA5  60
#define kGs5 59
#define kG5  58
#define kFs5 57
#define kF5  56
#define kE5  55
#define kDs5 54
#define kD5  53
#define kCs5 52
#define kC5  51

#define kB4  50
#define kAs4 49
#define kA4  48
#define kGs4 47
#define kG4  46
#define kFs4 45
#define kF4  44
#define kE4  43
#define kDs4 42
#define kD4  41
#define kCs4 40
#define kC4  39

#define kB3  38
#define kAs3 37
#define kA3  36
#define kGs3 35
#define kG3  34
#define kFs3 33
#define kF3  32
#define kE3  31
#define kDs3 30
#define kD3  29
#define kCs3 28
#define kC3  27

#define kB2  26
#define kAs2 25
#define kA2  24
#define kGs2 23
#define kG2  22
#define kFs2 21
#define kF2  20
#define kE2  19
#define kDs2 18
#define kD2  17
#define kCs2 16
#define kC2  15

#define kB1  14
#define kAs1 13
#define kA1  12
#define kGs1 11
#define kG1  10
#define kFs1 9
#define kF1  8
#define kE1  7
#define kDs1 6
#define kD1  5
#define kCs1 4
#define kC1  3

#define kB0  2
#define kAs0 1
#define kA0  0

/* pianoFreq is an 88-long array of floats
 * it contains the frequencies of every note in order
 * example usage:
 *     float middleC = pianoFreq[kC4]; // C in 4th octave
 *     // The float middleC now contains the float 261.626,
 *     // the frequency in Hz of middle C on a piano
 *     float fourFourty = pianoFreq[kA4]; // A440
 *     float highC = pianoFreq[kC4 + 24]; // C two octaves above middle C
 */

const float pianoFreq[88] = {nA0, nAs0, nB0, nC1, nCs1, nD1, nDs1, nE1, nF1, nFs1, nG1, nGs1, nA1, nAs1, nB1, nC2, nCs2, nD2, nDs2, nE2, nF2, nFs2, nG2, nGs2, nA2, nAs2, nB2, nC3, nCs3, nD3, nDs3, nE3, nF3, nFs3, nG3, nGs3, nA3, nAs3, nB3, nC4, nCs4, nD4, nDs4, nE4, nF4, nFs4, nG4, nGs4, nA4, nAs4, nB4, nC5, nCs5, nD5, nDs5, nE5, nF5, nFs5, nG5, nGs5, nA5, nAs5, nB5, nC6, nCs6, nD6, nDs6, nE6, nF6, nFs6, nG6, nGs6, nA6, nAs6, nB6, nC7, nCs7, nD7, nDs7, nE7, nF7, nFs7, nG7, nGs7, nA7, nAs7, nB7, nC8};

/* note interval definitions
 * example usage:
 *     float middleC = pianoFreq[kC4];
 *     float perfectFourth = pianoFreq[kC4 + per4];
 *     float triTone = pianoFreq[kC4 + triT];
 */

#define min2 1  // minor second
#define maj2 2  // major second
#define min3 3  // minor third
#define maj3 4  // major third
#define per4 5  // perfect fourth
#define triT 6  // tritone
#define per5 7  // perfect fifth
#define min6 8  // minor sixth
#define maj6 9  // major sixth
#define min7 10 // minor seventh
#define maj7 11 // major seventh
#define per8 12 // perfect octave

/* freqScaleBlues
 * Takes in a starting keynum and a number of blues scale steps to move up/down (+/-)
 * Returns the freq value of that note as a float
 * The blues scale in Bb is as follows:
 *     Bb      Db      Eb      E      F      Ab      Bb        notes
 *      | min3  | maj2  | min2 | min2 | min3  | min2 |         interior intervals
 *      | min3  | per4  | triT | per5 | min7  | per8 |         Bb ... note intervals
 * Example usage:
 *     float bFlatBluesNoteFour = freqScaleBlues(kAs2, 3); // returns E3, 164.814 Hz
 */

float freqScaleBlues(int keyStart, int numAbove) {
	// index: 0,  1, 2,  3, 4, 5, 6
	// intvl: 1, 3b, 4, 5b, 5, 7, 8
	// int scaleBluesIntervals[5] = {min3, per4, triT, per5, min7};
	int scaleBluesIntervals[5] = {3, 5, 6, 7, 10};
	// 12 - sBI[5] reversed = 2, 5, 6, 7, 9

	if (numAbove < 0) {							// if numAbove is negative, move the key down
		while (numAbove <= -6) {					// bump an octave down every six blues notes
			numAbove += 6;								// six keys in the blues scale
			keyStart -= per8;							// equals one octave in the chromatic scale
		}
		if (numAbove < 0) {							// if numAbove is < 0, indicating there are non-octaves to take care of,
			numAbove = 5 + numAbove;					// fix numAbove to refer to the proper interval index value
			keyStart -= (12 - scaleBluesIntervals[numAbove]); // bump the key in the blues interval specified
		}

	} else if (numAbove > 0) {					// if numAbove is positive, move the key up
		while (numAbove >= 6) { 					// bump an octave up every six blues notes
			numAbove -= 6;								// six keys in the blues scale
			keyStart += per8;							// equals one octave in the chromatic scale
		}
		if (numAbove > 0) {							// if numAbove is > 0, indicating there are non-octaves to take care of,
			keyStart += scaleBluesIntervals[numAbove - 1]; // bump the key in the blues interval specified
		}
	}

	if (keyStart < 0 || keyStart > 87) {		// if the note reaches beyond the piano keys
		return -1;									// return -1 error
	} else { 									// otherwise
		return pianoFreq[keyStart];					// return the freq requested
	}
}