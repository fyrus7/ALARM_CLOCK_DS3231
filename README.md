# ALARM_CLOCK_DS3231
alarm clock with ds3231 sqw pin polling.
#
this is an edited alarm clock I did to change from originally save to arduino EEPROM to saved into DS3231 EEPROM. so the alarm is triggered by polling the SQW pin on DS3231. but 1 downside is I still can't figure out how to make sqw pin as interrupt if the arduino goes into sleep mode, so as aworkaround to shut off the display, I add DISPLAYOFF & DISPLAYOF function from SSD1306 library.

whoever got the idea or to help, please consider edit the code to make sleep interrupt work :)
