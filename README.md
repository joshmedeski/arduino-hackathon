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
- [ ] Research & purchase an Arduino API driven Wifi card
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

## Device workflow:
- 1. User will start their Dryer/Washing Machine
- 2. User will connect device to power
- 3. Device will attempt to Calibrate
  + If device cannot calibrate, an IFTTT message will notify User
  + If device can calibrate, an IFTTT message will notify User
- 4. Assuming Device has calibrated, User may then leave to go about their business
- 5. Once the machine stops shaking, the device will notify user with the "Complete" IFTTT message.
- 6. The Device will then enter a waiting state, until re-started.

# Workflow Notes:
- All Device states are also signaled by onboard LED blink patterns
- If Wifi card cannot connect, then the above mentioned patterns must be relied on.
