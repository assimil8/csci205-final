# csci205-final
An introduction to the IOT using the Raspberry Pi and the GPIO interface. Demonstrates c/c++ programming, use of a web server, HTML, and server-side scripting using PHP to interact with various hardware components (DS18B20 temp sensors and LEDs).

## Prerequisites:
+ Install git: <i>https://git-scm.com/book/en/v2/Getting-Started-Installing-Git</i>
+ Install g++
+ Verify that wiringPi is installed: 
```gpio -v```	
+ Create a folder to work from/in: 
```sudo mkdir dirName```
+ Situate yourself in that directory:
```cd dirName```
+ Clone my repo using this command:
```sudo git clone https://github.com/assimil8/csci205-final.git```

## Installing
+ Verify you are in the right directory
+ Compile executable: 
```sudo g++ -Wall -o main main.cpp -lwiringPi```
+ Copy .exe into necessary dir: 
```sudo cp main /var/www/html/main```
+ Set Chmod perms:
```sudo chmod 4755 /var/www/html/main```

## Demonstration
+ Running .main without any flags brings up a do-while menu with switch statement(s). EX:
```./main```
+ You can use the following flags: s, o, f, b, t

```s  = returns status of LED ( LED.areYouOnOrOff() )```

```o = turns LED on ( LED.ignite() )```

```f  = turns LED off ( LED.extinguish() )```

```b = accepts int from user and blinks that many times ( LED.blinkThisManyTimes(blinkCount) )```

```t  = returns temp in Fahrenheit (TEMP_SENSOR.returnFahrenheit() )```

+ You may also utilize the web interface by visiting the Pi’s IP 
```http://x.x.x.x```

## Documentation 
+ UML diagram, Wiring/hardware diagram and powerpoint can be found in the DOCUMENTATION folder.
