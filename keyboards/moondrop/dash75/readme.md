# Moondrop Dash75

The Commodore 64 inspired keyboard with built in USB Host and headphone amplifier

* Keyboard Maintainer: [moondroplab](https://github.com/moondroplab)
* Hardware Supported:
    * Moondrop Dash75
    * Moondrop Dash75 RGB
* Hardware Availability: [moondroplab.com](https://moondroplab.com/en/products/dash75)

Make example for this keyboard (after setting up your build environment):

    make moondrop/dash75/r1:default

..or..

    make moondrop/dash75/rgb:default

Flashing example for this keyboard:

    make moondrop/dash75/r1:default:flash

..or..

    make moondrop/dash75/rgb:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.
Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
