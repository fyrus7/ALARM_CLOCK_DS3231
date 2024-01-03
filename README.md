# ALARM_CLOCK_DS3231
Alarm Clock with DS3231 SQW Pin Interrupt & Oled Display.
#
I spend weeks to configure how to anable the SQW pin on DS3231 RTC module for alarm triggering (noob me).

the clock originally use Arduino EEPROM to save the alarm. by using Arduino EEPROM memory user cannot use Low Power Sleep to wake with the SQW Pin found on DS3231 module.
by saving the alarm into DS3231 in-board EEPROM now we can use sleep mode to save energy and to prevent oled display to keep power on for a long period time.
#
As you can see here, Arduino is going to sleep after some time (default is 10 sec), then user can use button to wake from sleep mode or when alarm is set, the SQW pin interrupt will trigger and keep firing until a button is pressed to turn the alarm OFF.

When alarm is trigger, SQW pin will stay LOW until button is pressed to stop the alarm. This to wake the display and fire the alarm buzzer on and off cycle, if SQW pin goes back to 1Hz mode after alarm is trigger, Arduino will go back to sleep and display will not turn up plus the buzzer will not stop beeping event stop alarm button is pressed.

![](https://github.com/fyrus7/ALARM_CLOCK_DS3231/blob/main/Alarm%20Clock%20SQW.jpg)
