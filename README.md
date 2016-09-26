# ESPectro
ESP8266 extended library, especially for iothub.id client &amp; ESPectro devboard, for Arduino framework and supports Arduino IDE and Platformio.

##About ESPectro
It's an ESP8266 development board as the culmination of our 1+ year experience in exploring and developing products with ESP8266 MCU. 
Initially designed for kids in mind, everybody should be able to use it. 
Yet it's still hacker-friendly as we break out all ESP8266 ESP-12F pins.
More details: https://shop.makestro.com/en/product/espectro-core/

To start making and developing your awesome IoT things, two paths are offered:

###PlatformIO
We recommend to choose this path as it offer some much easiness in term of managing board, managing library and its dependencies, 
and the freedom to choose your favorite Integrated Development Environment (IDE).

[PlatformIO](http://platformio.org/) is an open source ecosystem for IoT development with cross platform build system, library manager, and offers full support for Espressif (ESP8266) development. 
It works on the popular host OS: Mac OS X, Windows, Linux 32/64, Linux ARM (like Raspberry Pi, BeagleBone, CubieBoard).

* [What is PlatformIO?](http://docs.platformio.org/en/stable/what-is-platformio.html)
* Official [PlatformIO IDE](http://platformio.org/platformio-ide). We recommend to use it for beginner.
* Quick Start with [PlatformIO IDE](http://docs.platformio.org/en/stable/ide/atom.html#quick-start) or [PlatformIO CLI](http://docs.platformio.org/en/stable/quickstart.html)
* [Advanced using](http://docs.platformio.org/en/stable/platforms/espressif.html) - custom settings, uploading to SPIFFS, Over-the-Air (OTA) or using stage version
* [Integration with other IDE](http://docs.platformio.org/en/stable/ide.html) - Atom, CLion, Eclipse, Emacs, NetBeans, Qt Creator, Sublime Text, VIM and Visual Studio
* ESP8266 [Project Examples](http://docs.platformio.org/en/stable/platforms/espressif.html#examples)


####PlatformIO IDE
To get started fast with PlatformIO, we recommend you to install PlatformIO IDE from [here](http://platformio.org/platformio-ide).

####ESPectro board support
Make sure ESPectro board is already listed when you type on Terminal/Command Prompt or from the Terminal inside PlatformIO IDE:

```
pio boards --installed
```

If for some unknown cosmic reasons the board is not listed there, please install `development` version of `espressif8266` platform by typing on terminal:

```
pio platform install https://github.com/platformio/platform-espressif8266/archive/develop.zip
```

Then try to list boards again, you should see:

```
espectro                       ESP8266        80Mhz     4096kB  80kB   ESPrectro Core
```

####Installing Library
After you install PlatformIO, to install this library for PlatformIO, all you have to do is typing this command from Terminal/Command Prompt:

```
platformio lib install 369
```


###Arduino IDE
Development with Arduino IDE is still supported. Please install the latest [Arduino IDE](http://www.arduino.cc/en/main/software) and make sure that you already add support ESP8266 boards via Boards Manager by following the guide [here](https://github.com/esp8266/Arduino/blob/master/README.md).
Then, download this repo and unzip it. Put unzipped folder to `libraries` folder of your Arduino IDE (depends on your OS).

We have submitted the necessary files to ESP8266 Arduino project so ESPectro is supported by Arduino IDE out of the box. 
But for now, please follow these steps:

* In folder `ArduinoIDESupport` there are two files: `boards.txt` and `variants` folder
* Copy and overwrite `boards.txt` file to `[root_folder]/Arduino15/packages/esp8266/hardware/esp8266/[version]`
* Copy and overwrite `variants` folder to the same folder as above

Notes: 
`[root_folder]` depends on your OS. For Windows 7/8/10, it should be on `C:\Users\[username]\AppData\Local`. On macOS it resides on: `/Users/[username]/Library`.
`[version]` depends on installed ESP8266 Arduino framework.


Then, please install following libraries:

* NeoPixelBus: https://github.com/Makuna/NeoPixelBus
* AsyncMqttClient: https://github.com/marvinroger/async-mqtt-client
* ESPAsyncTCP: https://github.com/me-no-dev/ESPAsyncTCP
* ArduinoJson: https://github.com/bblanchon/ArduinoJson

Please consult to Arduino documentation on how to install a library for Arduino IDE.

To get started, please try some examples provided, a lot of them.


##About Makestro Cloud
[Makestro Cloud](http://cloud.makestro.com) (formerly known as iothub.id) is our contribution to makers community to get up fast for connecting their things to the cloud.
It's not meant to be production-grade IoT backend, but you can use it to test publishing data from the things and visualize them to a nice dashboard, or controlling your things. 
The details about it is still written as we speak. 


This documentation will be kept improved. So stay tune.
