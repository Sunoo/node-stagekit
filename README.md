# RockBand StageKit API

[![npm](https://img.shields.io/npm/v/stagekit) ![npm](https://img.shields.io/npm/dt/stagekit)](https://www.npmjs.com/package/stagekit)

NodeJS library for the PDP Rock Band Stage Kit, including full control over the strobe, fog, and led lights. Currently only supports Linux.

## Usage

To use the API, simply install the `stagekit` package from npm, `require` it, and then issue an Open(filename) where filename is the location of the appropriate event file (such as /dev/input/event5), and then use any of the other commands according to what you want to do.

### constructor(filename)

Open an event interface file for a stage kit. If set to `undefined`, the API will attempt to probe for one automatically.

### eventfile

The event interface file being used.

### Close()

Closes the file handles for the stage kit.

### AllOff()

Sends a "panic" signal to turn everything off at once.

### SetStrobe(speed)

Set strobe flash speed.

### SetFog(fog)

Turn the fogger on or off.

### SetRed(red)

Set the red LEDs according to the first 8 bits of led, where each bit represents a single LED.

### SetYellow(yellow)

Set the yellow LEDs according to the first 8 bits of led, where each bit represents a single LED.

### SetGreen(green)

Set the green LEDs according to the first 8 bits of led, where each bit represents a single LED.

### SetBlue(blue)

Set the blue LEDs according to the first 8 bits of led, where each bit represents a single LED.
