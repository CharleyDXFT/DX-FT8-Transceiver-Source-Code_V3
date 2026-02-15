# DX_FT8  V3.0

<img width="1146" height="670" alt="image" src="https://github.com/user-attachments/assets/b67c8713-3c5a-416e-97d9-a9f5d327bcb7" />

### This project is a Fork from DX_FT8 V2.0 and was motivated by the nice project that Jim Conrad, KQ7B, shared with the BluQRP Group. https://github.com/conr2286

Jim's version of the FT8 application includes the abitlity to make automated calls to stations calling CQ. I found this most usefull and decided to add it to
the tools already in DX_FT8 V2.0. 

As you will see from the photo above that the Touch Buttons at the bottom of the display have been modified by eliminating the RX-TX Indictor and adding a Manual / Auto Button.
The new button controls only the QSO Mode of operation and the Beacon Mode is unaffected.

Likewise, when the Auto - Manual button is in the Manual State, the QSO Mode of operation works the same as in DX_FT8 V 2.0. 

Here is how the QSO Mode works in the Auto State;

The application searches the FT8 messages for Stations calling CQ and picks the station with the strongest decoded signal and then sends a call to the station.
When a station replies to the call, the application completes the FT8 QSO as with anyother contact. The automated call to a station will be repeated up to 3 times.

Using an automated method of initiating and completing an FT8 QSO has the inherent risk of spawning an extended calling match with another station using an automated FT8 
QSO method. 

So, in order to curtail such a calling match two other tools have been added to limiting repeated calls to 3 repeats.

First, a delay que has been built that is 10 elements long so that once a station has been automatically called that station's call enters the que. When the auto qso 
method searches for a new CQ Station to call, the delay que is searched and if found the station calling CQ is ignored. When another valid CQ candidate is found, the 
station's call in entered in the que and all entered station calls are shifted










## Version 2 of the DX_FT8 Firmware is the result of 10 months of user collaboration which offers a great FT8 Experience. 

### The DX_FT8 Transciver Project was introduced in September 2024 by Barb WB2CBA and Charley W5BAA and is based on the STM32F746 Disco Board
### From the start, this project was Open Source for both the hardware and software. By making it Open Source the operation of the transceiver and its usefullness have been greatly improved.
### To date, the firmware has undergone 13 Revisions. The present the firmware is by far and away a great improvement over our initial offering; thus we are establishing a Version 2.0 of the firmware.
###
## Contibutors to the firmware include:
### - Our Users, who politely pointed out how FT8 really works.
### - Paul, g8kig, who patiently hosted the firmware on GitHub and made a number of very important improvements which allowed further development of the firmware.
### - Wei, AG6AQ, who added SOTA, POTA, Free Text and Keyboard Data Entry.
### - Zhenxing, N6HAN, who rewrote the FT8 Traffic Management code to provide a comprehensive FT8 State Machine.
##
## Links to Important Related Websites:
### - Barb's DX_FT8 Project: https://github.com/WB2CBA/DX-FT8-FT8-MULTIBAND-TABLET-TRANSCEIVER
### - Paul's GitHub Repository with earlier source code: https://github.com/g8kig/DX-FT8-MULTIBAND-TABLET-TRANSCEIVER-Source
### - BluQRP: https://groups.io/g/BluQRP
### - uSDX Users Group: https://groups.io/g/ucx
###
## Version 2.1.0
### New in this version the device time can be synchonised to the Internet and reception reports uploaded to the PskReporter at https://www.pskreporter.info/
### This requires an external ESP32 module
### Please see https://github.com/g8kig/DX-FT8-TimeSync_PSKReporter for more information about constructing and programming the simple module that plugs into the transceiver.
###
### To submit more accurate reports to PSK reporter, a six-character locator can be used. All you have to do is modify the locator in StationData.ini as follows:

```
[Station]
Call=W5BAA
Locator=EM00vn
```
Note: this is only used for PSK Reporter.

## Building
### Visual Studio Code is set up as the default IDE for this project.
### Follow the instructions at the top of the Makefile to set up the compiler and tools
### For Linux and MacOS users, please also set the environment variable USERPROFILE to point to your home directory.
### so 'export USERPROFILE=$HOME && code' works when invoking Visual Studio Code from the command line
### or add export USERPROFILE=$HOME to your .zprofile.
###
## What's Next?
## Since the Source Code is Open Source we invite you to join in with your improvements!!
