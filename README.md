# Microcontrollers-starters

## Starter code examples for various microcontrollers that works with the existing serial blocks

## Prerequisites

1) basic knowledge of microcontrollers
 2) microcontroller of your own for example an Arduino or an Esp32

if you don’t have a microcontroller you can use a [virtual serial port](https://www.virtual-serial-port.org/) which one of is the easiest way to test **serialblocks
——-visuals added———**

Usage

writing to the serial port 

writing to the serial port wouldn’t be acknowledged until it’s sent back from the microcontroller (loopback)

to confirm it has been received without a problem

### 1) Actions

Actions that needs to be taken on the microcontroller will be written to the serial port through the Terminal in that format
**COMPONENT_ACTION**

for example **LED_TOGGLE** shall trigger Toggling the PIN that the LED is connected to

keep in mind that any action sent to the microcontroller won’t reflect from the user interface until acknowledgment is received from the microcontroller

for example after LED_TOGGLE is written to the serial port the function that toggles the pin will also send back acknowledgment in the form of JSON `{LED: 1}` to indicate that the LED is now turned ON

and for
data needs that needs to be read will be sent from the microcontroller in the form of JSON
for example `{Brightness: {value:1000, interval: 200}}` to indicate that the brightness will be sent each 200ms or `{Brightness: 1000}` to indicate that it’s going to be at random times like turning on or off a led manually from the microcontroller 

Examples

contribution
you may contribute by adding more features to a microcontroller code example // coding the same features for the same microcontroller but in native language i.e without code generators // adding support for more microcontrollers like PIC
