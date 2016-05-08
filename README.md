# Hackathon
Just a little side project with some friends learning how to use Arduino units.

### Idea
We want to build a sensor that monitors the status of your washer/dryer and can ping you through [IFTTT](http://ifttt.com) that your load is complete.

### Project Overview:
- [X] Build out code infrastructure
- [ ] Combine the modules and build out the prototype
- [ ] Test and refine code
- [ ] Build MVP (Minimum Viable Product)
- [ ] Present our final project

## Project Responsibilities

__Josh:__
- [x] Research & purchase an Arduino API driven [Wifi shield](http://store.cutedigi.com/wifi-shield-wishield-v2-0-for-arduino/)
- [ ] Write infrastructure for Wifi card
  + [ ] Connect to wifi card API
  + [ ] Connect to IFTTT API

__Jarrett:__
- [ ] Purchase shaker unit from [Daniel's article](http://m.instructables.com/id/How-to-use-a-vibration-sensor-shake-switch-Arduino)
- [ ] Write infrastructure for Shaker unit

__Daniel:__
- [X] Create `pins.h`
- [X] Buy Arduino kits and proto boards
- [X] Create test beds for Josh & Jarrett's work

## Personalizing Pins

To adjust the pin settings, create a `pins.personal.h` file in the `infrastructure` directory and overwrite any of the pins defined from `pins.h`.

## Dependencies

- [WiFi Shield Source Code](https://github.com/linksprite/ZG2100BasedWiFiShield)
