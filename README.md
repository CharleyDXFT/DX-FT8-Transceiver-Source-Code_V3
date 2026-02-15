# DX_FT8  V3.0

<img width="1146" height="670" alt="image" src="https://github.com/user-attachments/assets/b67c8713-3c5a-416e-97d9-a9f5d327bcb7" />

### This project is a Fork from DX_FT8 V2.0 and was motivated by the nice project that Jim Conrad, KQ7B, shared with the BluQRP Group. https://github.com/conr2286

Jim's version of the FT8 application includes the abitlity to make automated calls to stations calling CQ. I found this most usefull and decided to add it to
the tools already in DX_FT8 V2.0. 

As you will see from the photo above that the Touch Buttons at the bottom of the display have been modified by eliminating the RX-TX Indicator and adding a Manual / Auto Button.
The new button controls only the QSO Mode of operation and the Beacon Mode is unaffected.

Likewise, when the Auto - Manual button is in the Manual State, the QSO Mode of operation works the same as in DX_FT8 V 2.0. 

### Here is how the QSO Mode works in the Auto State;

The application searches the FT8 messages for stations calling CQ and picks the station with the strongest decoded signal to then send a call to that  station.
When a station replies to the call, the application completes the FT8 QSO as with any other contact.

If the called station does not respond the automated call will be repeated up to 3 times.

Using an automated method of initiating and completing an FT8 QSO has the inherent risk of spawning an extended calling match with another station who is also using an automated FT8 
QSO method. 

So, in order to curtail such a calling match two other tools have been added to the tatic  of limiting repeated calls to 3 repeats.

First, a delay que has been built that is 10 elements long so that once a station has been automatically called that station's call enters the que. When the auto qso 
method searches for a new CQ Station to call, the delay que is searched and if the station calling CQ is found in the que, the station is ignored.

When another valid CQ candidate is found, the station's call in entered in the que and all entered station calls are shifted in the que.
So, once a station has been called 10 other stations must be called before it will be automatically called again.

Second, another que has been built which stores the calls of stations which have been logged while in the auto QSO Mode of operaton. This que is 50 elements long.
So, once a station call logged, 50 other station's call will have to be logged before a station will be considered a valid CQ station.

### Please See DX_FT8 V3.0 Cheat Sheet Below For A Quick Guide

<img width="1093" height="739" alt="image" src="https://github.com/user-attachments/assets/4f822284-27e2-4ba1-93fc-a2b6a42e330c" />

### For a comprhensive guide to using the DX_FT8 V 3.0 Application the write up found on Barb's GitHub Repository is still most useful.
https://github.com/WB2CBA/DX-FT8-FT8-MULTIBAND-TABLET-TRANSCEIVER/blob/main/DX_FT8%20-%20FT8%20DIGITAL%20MODES%20HF%20GUI%20TRANSCEIVER%20Build%20guide%20V1.7.pdf

### DX_FT8 V 3.0 includes the ability to synchronize the device time  to the Internet and to upload reception reports to PskReporter at https://www.pskreporter.info/
This requires an external ESP32 module
Please see https://github.com/g8kig/DX-FT8-TimeSync_PSKReporter for more information about constructing and programming the simple module that plugs into the transceiver.
### Many Thanks to Paul, G8KIG for creating this capability

## Building
### Beware!! Due to the limited skills of the author the DX_FT8 V3.0 is NOT merged into the Main Branch of this Repositry. Instead, use the DX_FT8_V3.0 Branch!

## Contibutors to the DX_FT8 V3.0 Project Include:
### - Barb, WB2CBA, who created the great board.
### - Jim, KQ7B, who provided the inspiration.
### - Paul, g8kig, who patiently hosted the firmware on GitHub and made a number of very important improvements which allowed further development of the firmware.
### - Wei, AG6AQ, who added SOTA, POTA, Free Text and Keyboard Data Entry.
### - Zhenxing, N6HAN, who rewrote the FT8 Traffic Management code to provide a comprehensive FT8 State Machine.


## What's Next?
## Since the Source Code is Open Source we invite you to join in with your improvements!!
