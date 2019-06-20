# PCB

This board was designed in Eagle and relies on a collection of different
component libraries.

* [ATMEGA32U4-AU](https://www.snapeda.com/parts/ATMEGA32U4-AU/Microchip/view-part/)
* [Clueboard Libraries](https://github.com/clueboard/eagle_libs)
* [Adafruit Library](https://github.com/adafruit/Adafruit-Eagle-Library)
* supply2

## Revisions

### v20190619
* Corrected mismatched D+ and D- connections

### v20190608
* ATMEGA packaging changed from QFN to TQFP
* Crystal packaging changed from 3.2x2.5 to 3.2x5
* Replaced metric 0603 diodes with through-hole 1N4148
* Rerouted board to accommodate and balance component changes

### v20190525
* Initial Layout