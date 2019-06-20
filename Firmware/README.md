# Firmware

This keyboard is configured using [QMK](https://github.com/qmk).

To flash or modify the firmware:

1. Connect the fresh board to a computer and verify it is available
   as a USB device. A fresh atmega will show up with a name similar
   to `Atmel Corporation ATm32U4DFU Serial: 1.0.0`
   * If the device is not recognized, verify and test all of the
     connections on the board. This chip comes pre-flashed with
     the atmel bootloader and should be recognized.
1. Install [QMK Toolbox](https://github.com/qmk/qmk_toolbox)

	> Note: The installation steps in the README dependency list were
	> insufficient for me. I had to follow the more explicit list in the
	> documentation, where `avr-gcc` is explicitly `avr-gcc@8`

2. Download [QMK Firmware](https://github.com/qmk/qmk_firmware)
3. Copy the contents of this folder into `keyboards/macropad` in the
   downloaded QMK Firware directory
4. Run `make macropad:default` to build the `*.hex` file
5. Select the `*.hex` in `QMK Toolbox`
6. Press the reset button on the board
7. Click flash from `QMK Toolbox`. The logs should show the board being
   flashed and reconnecting as a named keyboard.