# RockBand StageKit API
NodeJS library for the PDP Rock Band Stage Kit, including full control over the strobe, fog, and led lights.

## Usage
To use the API, simply install the `stagekit` package from npm, `require` it, and then issue an Open(filename) where filename is the location of the appropriate event file (such as /dev/input/event5), and then use any of the other commands according to what you want to do.

### Open(filename)
Open an event interface file for a stage kit. If set to `null`, the API will attempt to probe for one automatically. Returns the filename that was used.

### Close()
Closes the file handles for the stage kit.

### AllOff()
Sends a "panic" signal to turn everything off at once.

### Strobe(speed)
Set strobe flash speed. Valid range 0-4.

### SetFog(fog)
Turn the fogger on or off.

### SetRed(led)
Set the red LEDs according to the first 8 bits of led, where each bit represents a single LED.

### SetYellow(led)
Set the yellow LEDs according to the first 8 bits of led, where each bit represents a single LED.

### SetGreen(led)
Set the green LEDs according to the first 8 bits of led, where each bit represents a single LED.

### SetBlue(led)
Set the blue LEDs according to the first 8 bits of led, where each bit represents a single LED.
