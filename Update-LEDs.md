# Getting Started Update LEDs 

Want to customize the LED animations on The Terminal artwork? Easy: Here is a basic guide for how to update, adjust, or play around.


### 1. Hardware: Arduino Uno
   - **Components Needed:**
     - Arduino Uno board
     - USB cable (Type A to Type B)
     - Computer with internet access
     - Optional: LEDs, resistors, breadboard, and jumper wires for testing

### 2. Connecting to Desktop IDE
   - **Install Arduino IDE:**
     1. Visit [Arduino's website](https://www.arduino.cc/en/software) and download the Arduino IDE for your operating system.
     2. Run the installer and follow the installation instructions.
   - **Connect Arduino to Computer:**
     1. Connect the Arduino Uno to your computer using the USB cable.
     2. Open the Arduino IDE.
     3. Select `Tools -> Board -> Arduino Uno` to choose your board.
     4. Select the port: `Tools -> Port` and choose the port that lists Arduino Uno.

### 3. Updating or Animating Your Own Code
   - **Writing Code:**
     1. In the Arduino IDE, start a new sketch.
     2. Write or paste your code. For animation, you might be controlling LEDs or other components.
   - **Example Code for LED Blink:**


```js
     void setup() {
       pinMode(13, OUTPUT); // Initialize digital pin 13 as an output
     }
     
     void loop() {
       digitalWrite(13, HIGH); // Turn the LED on
       delay(1000); // Wait for a second
       digitalWrite(13, LOW); // Turn the LED off
       delay(1000); // Wait for a second
     }
```

   - **Customizing Animation:**
     - Modify the `delay()` function to change the speed of the animation.
     - Use different `digitalWrite()` and `pinMode()` configurations to control other pins.

### 4. Pushing Code to Arduino
   - **Upload Code:**
     1. Click on the right arrow icon (`Upload` button) in the Arduino IDE.
     2. The IDE compiles the sketch and uploads it to the Arduino Uno.
     3. If the upload is successful, the IDE shows a message "Done uploading."
   - **Troubleshooting:**
     - If the upload fails, check that the correct board and port are selected.
     - Ensure the USB cable is properly connected.
     - Check for errors in the code in the IDE's console at the bottom.

---

This guide should get you started. You can expand your knowledge easily and feel free to reach out to me at [1980k.com](https://1980k.com/) anytime. Happy tinkering!
