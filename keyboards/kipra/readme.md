# kipra v1 keyboard: it's kinda pragmatic

This is a split keyboard designed around a thumb arc further down and out than almost any other board I've seen.

The finger layout is rows of 5,5,5 for the alpha keys, 4 for a row of dedicated modifier keys, and 3 for the thumb arc.

There are no other fancy hardware features to keep it flat for travel and pragmatic: no rotary encoders, pointing devices, etc. Just keyboard switches.

There are no LEDs to keep in pragmatic.

* Keyboard Maintainer: [Peter Lyons](https://github.com/focusaurus)
* Hardware Supported:
  * kipra v1 PCBs made with ergogen
  * RP2040 Promicro 16M MCUs from aliexpress
  * Kailh choc switches
* Hardware Availability: *Links to where you can find this hardware*

## How to compile firmware

Make example for this keyboard (after setting up your build environment):

    make kipra:default

## How to flash firmware onto the keyboard's MCU

* Get an MCU into bootloader mode. There are 2 easy ways.
    * Option 1: Connect to USB then press the on-MCU reset button (top right side) twice in rapid succession
    * Option 2: Press and hold the on-MCU bootloader button (top left side) while connecting USB, then release the button
* Flashing can be done with the QMK make target but is also as simple as using `cp` to copy the `.uf2` file onto the USB filesystem the host computer should automatically mount
    * I run `udiskie` on arch linux and the keyboard gets mounted at `/run/media/$USER/RPI-RP2`

    make kipra:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Tips for lots of flashing

Get 2 USB cables, one for each half, and do all the connecting/disconnecting between the host computer and the cable, leaving the other end connected to the keyboard. It's faster and reduces strain on the keyboard USB-C connectors which are much more fragile than the USB-A ports on a computer.

## Warning about TRRS and short circuits

Due to TRRS having a series of connectors running down the jack shaft, the act of putting the connector into or out of the jack involves moving across a shorted connection which is bad news. So: only mess with TRRS cable connections when USB is disconnected. When setting up, do TRRS first then USB. When disconnecting, disconnect USB first then TRRS second.
