# RockBand StageKit API
NodeJS library for the PDP Rock Band Stage Kit, including full control over the strobe, fog, and led lights.

## USAGE
To use the API, simply install the `stagekit` package from npm, `require` it, and then issue an Open(filename) where filename is the location of the appropriate event file (such as /dev/input/event5), and then use any of the other commands according to what you want to do.

### Open(filename)
Open an event interface file for a stage kit. If set to `null`, the API will attempt to probe for one automatically. Returns the filename that was used.

### Close()
Closes the file handles for the stage kit.

### AllOff()
Sends a "panic" signal to turn everything off at once.

### NoStrobe()
Disable strobe

### SlowStrobe()
Sets a slow strobe

### MedStrobe()
Sets a medium strobe

### FastStrobe()
Sets a fast strobe

### FastestStrobe()
Sets the fastest strobe

### FogOn()
Turn on the fogger

### FogOff()
Turn off the fogger

### SetRed(i)
Set the red leds according to the first 8 bits of i, where each bit represents a single led

### SetYellow(i)
Set the yellow leds according to the first 8 bits of i, where each bit represents a single led

### SetGreen(i)
Set the green leds according to the first 8 bits of i, where each bit represents a single led

### SetBlue(i)
Set the blue leds according to the first 8 bits of i, where each bit represents a single led
