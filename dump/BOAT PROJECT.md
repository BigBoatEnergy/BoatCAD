Things that need improvment to progress from version 0.20 to 030
\- add connectors to exterior wiring for motors to allow the case to be removed from the hull
\- Either modify the existing motor stands to accept another brushless motor or add 2 more motor and servo combos to add power.
\- need to determine if tri-tipped propellers or twin tip propellers make more power
\- need to 3d print a mounting method for batterys out of something like tpu
\- add an ethernet pass though port to the top along with usb pass though to work on code stuff without batterys plugged in
\- once we get the rc working the way we want it to we should work on the automation end of this project
\- we should spend some time working on the tank bot need to play with gpio to get a working
\- IMPORTANT we want to use the tank robot to work with autonamous mode before we use autonmyus mode on the boat (boat is in the water which can be a problem if things go wrong)
\- use the pixhawk for tank bot

## Flight Checklist

- Plug in batteries
- Wait for wifi to turn on, then connect
- Plug in joystick/turn on gamepad
- Open mission planner
- Check that joystick is detected and enabled
- Trim values vary based on ESC:
  - Left: 800, 1180, 1500
  - Right: 800, 910, 1500
  - min, trim, max if you write a trim below minimum of 800 beagle bone blue commits die

tank bot is hard
Pixhawk controller does not provide power to servo rail

Post  first splash observations and lessons learned.

The control scheme that I set up worked really well. the thrust vectoring as a primary means of movement that can be supplemented by servo controlled thrust worked really well when used effectively.

We were also successful in the battery's we chose for the missions. though it will be interesting to see how these battery's do for longer missions or with more motors and functions assigned to them they seemed to work well for what we did today.

The boat did not appear to take on any water. it would be a good idea to put the craft in the water for longer periods of time and under different conditions to see how stable the craft can stay while operating in rougher conditions.

The strength of the servo motor and drive motor assembly's seemed to be sufficiently strong to do the job we required of them. Hopefully because those mounts are plastic and can flex they will not have problems caused by repeated abuse and flexing.

Improvements

There were a few major take aways from todays deployment
\- The ESC's require cooling. As things are right now it seams that the motor drivers onboard went into a thermal shutdown to prevent damage after being used for 10 minutes or so. this is unacceptable in a devices that will be operating autonomously on various missions.
\- Possible fixes for overheating ESCs include the following.
\- 1. Air cooling: this is likely going to be the route we go using the large passive air coolers I have off the old server I've got on my maker cart. I will need to get ahold of thermal compound to adhere the ESC's to the plate and I want to do some testing to see how moderate air flow will cool the plate. the cooling block will be installed on the top of the box with the electronics in such a way that there is no way for water to ingress the case.
\- 2. Water cooling. this solution is more complicated but will defiantly result in the highest cooling performance. This can be done either by pumping water though a cooling block on each esc and dumping the hot water back into the lake or by having a closed system with a radiator that is either cooled by the air or is dropped into and out of the water.
\- Telemetry information at range continues to be an issue. the BeagleBoneBlue does not have an access point that can reach far enough for our purposes Solutions to this problem include...
\- Purchasing telemetry radios like the SiK radios that seem to be a commonly used telemetry option
\- using an old cell phone with a minimalist data plan that can connect to our base station via ARDURAV-AP
\- Building and implementing an antenna system using long range point to point Wi-Fi like the mikrotik dishes we used for makerfaire. this solution has substantial engineering problems attached to it but it will be incredibly cool if successful.
\- Control of boat seems to be an issue using controllers and laptops in remote locations. if this is going to be the way going forward we will need to consider ways to ensure we pick spots for the ground control station that have good visuals to the boat as well as having a place to put computers (a table or something similar.)  Possible solutions for this would be buildings out a go kit that will work as a fully loaded ground control station. As a possible option for this we could use my DeWalt cases with tools, battery's, power and everything we may need in the field all included.
\- Location today was not ideal. I think if we had been able to splash on Saturday evening or very early on Sunday we would have been able to find a more ideal spot with fewer people around us. I think we should aim for test times that will be less busy like week day evenings or early on weekends during the summer. Once the weather gets a bit colder it is unlikely this will be an issue.

Next steps

- testing and implementation of cooling for ESC's
- Boat electronics case needs disconnects so we can remove the case from the rest of the boat. this is becoming a major issue
- need to solder connectors for all motors and ESC's so we can use all 4 existing motors if we find that once proper cooling is acquired we want more speed and power
- need to get a better solution for telemetry
- build out go case 
  - Bottom has battery's and DC-AC Adapters along with Battery Chargers for field swaps and places for drill/impact driver along with places for extra propellers
  - middle case has tools. all tools we could need for the field along with any electronics test measurement and diagnostic tools.
  - top case has places for laptops, controllers, extra monitor, and phone chargers along with any other delicate electronics we may need out there.
  - I would like to build in a way to attach the main boat box to the top case of the go boxes.
- I really want to build a custom joystick for this project. still not sure what that looks like but I think it would be worth it
- maybe time to start looking at mikrotik dishes and what the design for that system would look like

[[ESC heat testing]]
[[Boat project phase 1 thoughts, summarization and other musings]]