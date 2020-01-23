# RockBand StageKit API
NodeJS library for the PDP Rock Band Stage Kit, including full control over the strobe, fog, and led lights.

## USAGE
To use the API, simply install the package from npm, `require` it, and then issue an Open(filename) where filename is the location of the appropriate event file (such as /dev/input/event5), and then use any of the other commands according to what you want to do.

### Open(filename)
Open an event interface file for a stage kit. If set to `null`, the API will attempt to probe for one automatically.

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

### SetLeds(r,y,g,b)
Set all the led arrays, with the same convention as the other ones, but all at once, with r being red, y being yellow, etc.
Merely a convenience function; the same as calling the SetRed(), SetYellow(), SetGreen(), and SetBlue() functions one after another
