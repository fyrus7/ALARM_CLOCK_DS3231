// X and Y axis midpoint values of the Analog Clock
byte clockCenterX=31;
byte clockCenterY=31;

// Variable for Analog Clock Frames
// 'Clock', 63x63px
const unsigned char Clock_Frame [] PROGMEM = {
  0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x1f, 0xe0, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0xfc, 0x00, 0x00, 
  0x00, 0x00, 0xf0, 0x18, 0x70, 0x1e, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x28, 0x88, 0x07, 0x80, 0x00, 
  0x00, 0x07, 0x00, 0x08, 0x08, 0x01, 0xc0, 0x00, 0x00, 0x1c, 0x00, 0x08, 0x10, 0x00, 0x70, 0x00, 
  0x00, 0x38, 0x20, 0x08, 0x20, 0x10, 0x38, 0x00, 0x00, 0x70, 0x20, 0x08, 0x40, 0x10, 0x1c, 0x00, 
  0x00, 0xe0, 0x10, 0x3e, 0xf8, 0x20, 0x0e, 0x00, 0x01, 0xc0, 0x10, 0x00, 0x00, 0x20, 0x07, 0x00, 
  0x01, 0x80, 0x08, 0x00, 0x00, 0x40, 0x03, 0x00, 0x03, 0x00, 0x08, 0x00, 0x00, 0x40, 0x01, 0x80, 
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 
  0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x38, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x18, 0x38, 
  0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x60, 0x18, 0x30, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 
  0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 
  0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 
  0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
  0xc7, 0x00, 0x00, 0x03, 0x80, 0x00, 0x01, 0xc6, 0xc8, 0x80, 0x00, 0x07, 0xc0, 0x00, 0x02, 0x26, 
  0xc8, 0x80, 0x00, 0x0c, 0x60, 0x00, 0x00, 0x26, 0xc7, 0x80, 0x00, 0x0c, 0x60, 0x00, 0x00, 0xc6, 
  0xc0, 0x80, 0x00, 0x0c, 0x60, 0x00, 0x00, 0x26, 0xc1, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x02, 0x26, 
  0xce, 0x00, 0x00, 0x03, 0x80, 0x00, 0x01, 0xc6, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
  0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 
  0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 
  0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x30, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 
  0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x60, 0x18, 0x38, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x18, 0x38, 
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 
  0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x08, 0x00, 0x00, 0x20, 0x01, 0x80, 
  0x01, 0x80, 0x08, 0x00, 0x00, 0x20, 0x03, 0x00, 0x01, 0xc0, 0x10, 0x00, 0x00, 0x10, 0x07, 0x00, 
  0x00, 0xe0, 0x10, 0x03, 0x80, 0x10, 0x0e, 0x00, 0x00, 0x70, 0x20, 0x06, 0x00, 0x08, 0x1c, 0x00, 
  0x00, 0x38, 0x20, 0x04, 0x00, 0x08, 0x38, 0x00, 0x00, 0x1c, 0x00, 0x07, 0x80, 0x00, 0x70, 0x00, 
  0x00, 0x07, 0x00, 0x04, 0x40, 0x01, 0xc0, 0x00, 0x00, 0x03, 0xc0, 0x04, 0x40, 0x07, 0x80, 0x00, 
  0x00, 0x00, 0xf0, 0x03, 0x80, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0xfc, 0x00, 0x00, 
  0x00, 0x00, 0x1f, 0xe0, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00
};


// 'Select_Top', 5x3px
const unsigned char Select_Top [] PROGMEM = {
  0x20, 0x70, 0xf8
};

// 'Select_Side', 3x5px
const unsigned char Select_Side [] PROGMEM = {
  0x80, 0xc0, 0xe0, 0xc0, 0x80
};

// 'Select_Buttom', 5x3px
const unsigned char Select_Buttom [] PROGMEM = {
  0xf8, 0x70, 0x20
};


#include "RTClib.h"
#include <TimerOne.h>
#include <LowPower.h>
#include <Adafruit_SSD1306.h>

RTC_DS3231 rtc;

Adafruit_SSD1306 display(128, 64, &Wire, -1);

byte _day, _month, _hour24, _hour12, _minute, _second, _dtw;
int _year;
byte hr24;
char st[2];
char _nameoftheDay[9];
char _monthsName[3];

const char daysOfTheWeek_0[] PROGMEM = "Sunday";   
const char daysOfTheWeek_1[] PROGMEM = "Monday";
const char daysOfTheWeek_2[] PROGMEM = "Tuesday";
const char daysOfTheWeek_3[] PROGMEM = "Wednesday";
const char daysOfTheWeek_4[] PROGMEM = "Thursday";
const char daysOfTheWeek_5[] PROGMEM = "Friday";
const char daysOfTheWeek_6[] PROGMEM = "Saturday";

const char* const daysOfTheWeek_table[] PROGMEM = {
  daysOfTheWeek_0,
  daysOfTheWeek_1,
  daysOfTheWeek_2,
  daysOfTheWeek_3,
  daysOfTheWeek_4,
  daysOfTheWeek_5,
  daysOfTheWeek_6};

const char months_name_0[] PROGMEM = "Jan";   
const char months_name_1[] PROGMEM = "Feb";
const char months_name_2[] PROGMEM = "Mar";
const char months_name_3[] PROGMEM = "Apr";
const char months_name_4[] PROGMEM = "May";
const char months_name_5[] PROGMEM = "Jun";
const char months_name_6[] PROGMEM = "Jul";
const char months_name_7[] PROGMEM = "Aug";
const char months_name_8[] PROGMEM = "Sep";
const char months_name_9[] PROGMEM = "Oct";
const char months_name_10[] PROGMEM = "Nov";
const char months_name_11[] PROGMEM = "Dec";

const char* const months_name_table[] PROGMEM = {
  months_name_0, months_name_1, months_name_2, months_name_3,
  months_name_4, months_name_5, months_name_6, months_name_7,
  months_name_8, months_name_9, months_name_10, months_name_11,};

//--> Variables for Buttons
byte btn_Select, btn_Down;

//--> Variable for SQW pin
const int sqwPin = 2;

//--> Variable for Buzzer
byte Buzzer = 5;


// Variables for Millis to update Time and Date. Also for the Alarm interval
unsigned long previousMillisGetTimeDate = 0; //--> will store last time was updated
const long intervalGetTimeDate = 1000; //--> interval (milliseconds)         


// Variables for Menus
bool Menu_Stat = false;
byte Menu_Cnt = 0;
bool Menu_Set = false;
byte Menu_Set_cnt;
byte Menu_Set_TimeDate = 0;

bool set_Hour = false;
bool set_Minute = false;
bool set_Day = false;
bool set_Month = false;
bool set_Year = false;

bool blink_cursor = false;
int _delay = 100;

byte Alarm_Stat = 0;
bool Set_hour_alarm = false;
bool Set_minute_alarm = false;
byte Menu_Set_Alarm = 0;
bool Alarm_Sound = false;
bool Alarm_Start = false;
byte Alarm_Duration = 0;
bool Blink_Alarm_Display = false;


const unsigned long sleepTimeout = 10000; // sleep after 10 sec idle
volatile unsigned long lastActivityTime = 0;


void wakeUp(){
  // let this empty
}

void timerISR() {
  // let this empty
}


void setup() {

  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(sqwPin, INPUT_PULLUP);
  pinMode(Buzzer, OUTPUT);

  attachInterrupt(digitalPinToInterrupt(3), wakeUp, FALLING);
  attachInterrupt(digitalPinToInterrupt(4), wakeUp, FALLING);

  rtc.begin();

  if (rtc.lostPower()) {
   // Serial.println("RTC lost power, let's set the time!");
   // rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }

  rtc.disable32K(); // disable 32K Pin

  rtc.disableAlarm(1);
  rtc.disableAlarm(2);
  rtc.clearAlarm(1);
  rtc.clearAlarm(2);

  rtc.writeSqwPinMode(DS3231_OFF); // Place SQW pin into alarm interrupt mode

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.display();
  delay(1000);

  Timer1.initialize(1000000);
  Timer1.attachInterrupt(timerISR);

}


void loop() {

  
  // To update the Time and Date
  unsigned long currentMillisGetTimeDate = millis();
  if (currentMillisGetTimeDate - previousMillisGetTimeDate >= intervalGetTimeDate) {
    // save the last time you blinked the LED
    previousMillisGetTimeDate = currentMillisGetTimeDate;

    // Time and Date are displayed if Menu Status = False
    if (Menu_Stat == false) {
      GetDateTime();
 
      display.clearDisplay();

      //display.drawBitmap(10, 10, FSufi3, 45, 45, WHITE);
      Draw_Clock_Frame();
      Analog_Clock(_hour12,_minute,_second);


        if (Alarm_Stat == 1) {
        Alarm_Start = true;
      }


      // A condition that is executed if the alarm starts and stops
        if (digitalRead(sqwPin) == LOW){
        Alarm_Start = true;
        Alarm_Sound = !Alarm_Sound;
        if (Alarm_Sound == true) {
          Button_Sound(1);
        } else {
          Button_Sound(0);
        }

        Alarm_Duration++;
        // Change the value 59 to increase or decrease Alarm duration (default 10 minute)
        if (Alarm_Duration > 599) {
          rtc.disableAlarm(1);
          Button_Sound(0);
          Alarm_Duration = 0;
          Alarm_Start = false;
        }

        display.setTextSize(1);
        Blink_Alarm_Display = !Blink_Alarm_Display;
        if (Blink_Alarm_Display == true) {
          display.setTextColor(WHITE);
        } else {
          display.setTextColor(BLACK);
        }
      
        display.setCursor(82, 22);
        display.print("Alarm");
        display.setCursor(82, 32);

        DateTime now = rtc.now();
        char buff[] = "hh:mm";
        display.print(now.toString(buff));

      } else {
        //Digital_Clock_and_Date(_hour24, _minute, _second, _dtw, _day, _month ,_year); // 24 hour clock
        Digital_Clock_and_Date(_hour12, _minute, _second, _dtw, _day, _month ,_year); // 12 hour clock
      }
      
      display.display();
    }
  }


  read_button();

  // BUTTON USE to Stop the Alarm
  if (btn_Down == LOW && Alarm_Start == true) {
    rtc.disableAlarm(1);
    Button_Sound(0);
    Alarm_Start = false;
    Alarm_Duration = 0;
    read_button();

  }


  // Conditions for displaying to the Menu
  if (btn_Select == LOW && Menu_Stat == false) {
    delay(500);
    Menu_Cnt = 1;
    Menu_Stat = true;
  } 

  
  // Looping to display Menu
  while (Menu_Stat == true) {
    read_button();
    // Button Condition for selecting Setup Menu
    if (btn_Down == LOW) {
      delay(100);
      Menu_Cnt++;
      if (Menu_Cnt > 3) Menu_Cnt = 1;
    }

    if (btn_Select == LOW && Menu_Cnt == 1) {
      delay(500);
      Menu_Set = true;
      Menu_Set_cnt = 1;
      Menu_Set_TimeDate = 1;      
    }
  
    if (btn_Select == LOW && Menu_Cnt == 2) {
      delay(500);
      Menu_Set = true;
      Menu_Set_cnt = 2;
      Menu_Set_Alarm = 1;
    }

    if (btn_Select == LOW && Menu_Cnt == 3) {
      delay(500);
      Menu_Cnt = 1;
      Menu_Stat = false;
    }


    // Conditions for displaying Menu contents
    if (Menu_Cnt == 1) {
      Menu_Display(Menu_Cnt);
    } else if (Menu_Cnt == 2) {
      Menu_Display(Menu_Cnt);
    } if (Menu_Cnt == 3) {
      Menu_Display(Menu_Cnt);
    } 


    // Looping for Time and Date Setting Menu
    while (Menu_Set == true && Menu_Set_cnt == 1) {
      Set_Time_Date();
      delay(50);
    }


    // Looping for Alarm Settings Menu
    while (Menu_Set == true && Menu_Set_cnt == 2) {
      Set_Alarm();
      delay(50);
    }
    delay(50);
  }

  // Check if it's time to sleep when no button is pressed.
  if (millis() - lastActivityTime > sleepTimeout) {
    display.ssd1306_command(SSD1306_DISPLAYOFF);
    Timer1.stop();
    sleep();
    Timer1.start();
  }
}


void sleep() { // sleep forever until interrupt
  attachInterrupt(digitalPinToInterrupt(sqwPin), wakeUp, FALLING);
  LowPower.powerDown(SLEEP_FOREVER, ADC_OFF, BOD_OFF);
  display.ssd1306_command(SSD1306_DISPLAYON);
}


// Subroutines for reading Buttons
void read_button() {
  btn_Select = digitalRead(4);
  btn_Down = digitalRead(3);

  if (btn_Select == LOW || btn_Down == LOW || digitalRead(sqwPin) == LOW){
    lastActivityTime = millis();
  }
}


void GetDateTime(){
  DateTime now = rtc.now();
  _day    = now.day();
  _month  = now.month();
  _year   = now.year();
  _hour24 = now.hour();
  _minute = now.minute();
  _second = now.second();
  _dtw    = now.dayOfTheWeek();

  hr24=_hour24;
  if (hr24>12) {
    _hour12=hr24-12;
  }
  else if (hr24==0) {
    _hour12=12;
  }
  else {
    _hour12=hr24;
  }

  if (hr24<12) {
    strcpy(st, "AM");
  }
  else {
    strcpy(st, "PM");
  } 
}


//____________________________________Subroutine for drawing Analog Clock
void Analog_Clock(byte h, byte m, byte s) {
  Draw_Line_Seconds(s);
  Draw_Line_Minutes(m);
  Draw_Line_Hours(h,m);
  
  for (byte i = 30; i < 33; i++) {
    display.drawPixel(i, 30, SSD1306_BLACK);
    display.drawPixel(i, 31, SSD1306_BLACK);
    display.drawPixel(i, 32, SSD1306_BLACK);
  }
}


// Subroutines for drawing Seconds on an Analog Clock
void Draw_Line_Seconds(int s) {
  float angle = s * 6 ;
  angle = (angle / 57.29577951); //--> Convert degrees to radians 
   
  // 16 is the length of the "second line" on the Analog Clock
  int xS = (clockCenterX + (sin(angle) * (16)));
  int yS = (clockCenterY - (cos(angle) * (16)));

  // Special condition at the 15th second, because at that second the line is not symmetrical
  if (s == 15) {
    display.drawLine(clockCenterX, clockCenterY, xS, yS + 1, WHITE);
  } else {
    display.drawLine(clockCenterX, clockCenterY, xS, yS, WHITE);
  }
}

// Subroutine for drawing Minutes on an Analog Clock
void Draw_Line_Minutes(int m) {
  float angle = m * 6 ;
  angle = (angle / 57.29577951) ; //Convert degrees to radians  

  // 17 is the length of the "minute line" on the Analog Clock
  int xM = (clockCenterX + (sin(angle) * (17)));
  int yM = (clockCenterY - (cos(angle) * (17)));

  // Special condition at minute 15, because at that minute the line is not symmetrical
  if (m == 15) {
    display.drawLine(clockCenterX, clockCenterY - 1, xM, yM + 1, WHITE);
    display.drawLine(clockCenterX - 1, clockCenterY, xM, yM + 1, WHITE);
    display.drawLine(clockCenterX, clockCenterY, xM, yM + 1, WHITE);
    display.drawLine(clockCenterX + 1, clockCenterY, xM, yM + 1, WHITE);
    display.drawLine(clockCenterX, clockCenterY + 1, xM, yM + 1, WHITE);
  } else {
    display.drawLine(clockCenterX, clockCenterY - 1, xM, yM, WHITE);
    display.drawLine(clockCenterX - 1, clockCenterY, xM, yM, WHITE);
    display.drawLine(clockCenterX, clockCenterY, xM, yM, WHITE);
    display.drawLine(clockCenterX + 1, clockCenterY, xM, yM, WHITE);
    display.drawLine(clockCenterX, clockCenterY + 1, xM, yM, WHITE);
  }
}


// Subroutine for drawing Hour on an Analog Clock
void Draw_Line_Hours(int h, int m) {
  float angle = h * 30 + int((m / 12) * 6);
  angle = (angle / 57.29577951) ; //Convert degrees to radians

  // 12 is the length of the "hour line" on the Analog Clock
  int xH = (clockCenterX + (sin(angle) * (12)));
  int yH = (clockCenterY - (cos(angle) * (12)));

  // Special condition at 12 o'clock, because at that hour the line is not symmetrical
  if (h == 12 && m < 12) {
    display.drawLine(clockCenterX, clockCenterY - 2, xH + 1, yH, WHITE);
    display.drawLine(clockCenterX - 2, clockCenterY, xH + 1, yH, WHITE);    
    display.drawLine(clockCenterX, clockCenterY - 1, xH + 1, yH, WHITE);
    display.drawLine(clockCenterX - 1, clockCenterY, xH + 1, yH, WHITE);
    display.drawLine(clockCenterX, clockCenterY, xH + 1, yH, WHITE);
    display.drawLine(clockCenterX + 1 ,clockCenterY, xH + 1, yH, WHITE);
    display.drawLine(clockCenterX, clockCenterY + 1, xH + 1, yH, WHITE);
    display.drawLine(clockCenterX + 2, clockCenterY, xH + 1, yH ,WHITE);
    display.drawLine(clockCenterX, clockCenterY + 2, xH + 1, yH, WHITE);
  } else {
    display.drawLine(clockCenterX, clockCenterY - 2, xH, yH, WHITE);
    display.drawLine(clockCenterX - 2, clockCenterY, xH, yH, WHITE);    
    display.drawLine(clockCenterX, clockCenterY - 1, xH, yH, WHITE);
    display.drawLine(clockCenterX - 1, clockCenterY, xH, yH, WHITE);
    display.drawLine(clockCenterX, clockCenterY, xH, yH, WHITE);
    display.drawLine(clockCenterX + 1 ,clockCenterY, xH, yH, WHITE);
    display.drawLine(clockCenterX, clockCenterY + 1, xH, yH, WHITE);
    display.drawLine(clockCenterX + 2, clockCenterY, xH, yH ,WHITE);
    display.drawLine(clockCenterX, clockCenterY + 2, xH, yH, WHITE);
  }
}

// Subroutine for drawing frames on an analog clock
void Draw_Clock_Frame() {
  display.drawBitmap(0, 0, Clock_Frame, 63, 63, WHITE);
}


// Subroutines for displaying Digital Clock and Date
void Digital_Clock_and_Date(byte h, byte m, byte s, byte dtw, byte dy, byte mt, int yr) {
  display.setTextSize(1);
  display.setTextColor(WHITE);

  display.setCursor(73, 0);
  if (h < 10) {
    display.print("0");
    display.print(h);
  } else {
    display.print(h);
  }
  display.print(":");
  if (m < 10) {
    display.print("0");
    display.print(m);
  } else {
    display.print(m);
  }
  display.print(":");
  if (s < 10) {
    display.print("0");
    display.print(s);
  } else {
    display.print(s);
  }
  

  // To display Day Name
  if (Menu_Stat == false) {
    strcpy_P(_nameoftheDay,(char*)pgm_read_word(&(daysOfTheWeek_table[dtw])));
    byte display_center_area = (127 - 65) / 2;
    byte center_text = (strlen(_nameoftheDay) * 6) / 2;
    byte x_text = 66 + (display_center_area - center_text);
    display.setCursor(x_text, 23); //--> (x position, y position)
    display.println(_nameoftheDay); 
  }


  // To display the Date
  display.setTextSize(1);
  strcpy_P(_monthsName,(char*)pgm_read_word(&(months_name_table[mt-1])));
  display.setCursor(76, 45); //--> (x position, y position)
  if (dy < 10) {
    display.print("0");
    display.print(dy);
  } else {
    display.print(dy);
  }
  display.print(", ");
  display.print(_monthsName);
  display.setCursor(85, 55);
  display.print(yr);
}

// Subroutine to display Menu Display
void Menu_Display(byte slct) {
  display.clearDisplay();
  
  display.setTextSize(1);
  display.setTextColor(WHITE);

  display.setCursor(40, 0);
  display.print("--MENU--");

  display.setCursor(7, 20);
  display.print("Set Time and Date");

  display.setCursor(7, 30);
  display.print("Set Alarm");

  display.setCursor(7, 55);
  display.print("Back");

  // Conditions for the cursor position on the Menu
  if (slct == 1) {
    display.drawBitmap(0, 20, Select_Side, 3, 5, WHITE);
  } else if (slct == 2) {
    display.drawBitmap(0, 30, Select_Side, 3, 5, WHITE);
  } else if (slct == 3) {
    display.drawBitmap(0, 55, Select_Side, 3, 5, WHITE);
  } 

  display.display();
}

// Subroutines for displaying Time and Date settings
void Set_Time_Date() {

  read_button();

  display.clearDisplay();
  
  Digital_Clock_and_Date(_hour24, _minute, _second, _dtw, _day, _month ,_year);
  
  display.setCursor(7, 55);
  display.print("Back");

  display.setCursor(7, 45);
  display.print("Save");

  if (btn_Down == LOW) {
    delay(100);
    Menu_Set_TimeDate++;
    if (Menu_Set_TimeDate > 7) Menu_Set_TimeDate = 1;
  }

  if (btn_Select == LOW && Menu_Set_TimeDate == 1) {
    delay(500);
    set_Hour = true;
  }

  if (btn_Select == LOW && Menu_Set_TimeDate == 2) {
    delay(500);
    set_Minute = true;
  }

  if (btn_Select == LOW && Menu_Set_TimeDate == 3) {
    delay(500);
    set_Day = true;
  }

  if (btn_Select == LOW && Menu_Set_TimeDate == 4) {
    delay(500);
    set_Month = true;
  }

  if (btn_Select == LOW && Menu_Set_TimeDate == 5) {
    delay(500);
    set_Year = true;
  }

  if (btn_Select == LOW && Menu_Set_TimeDate == 6) {
    delay(500);
    rtc.adjust(DateTime(_year, _month, _day, _hour24, _minute, 0));
    Display_to_save();
  }


  if (btn_Select == LOW && Menu_Set_TimeDate == 7) {
    delay(100);
    Menu_Set_cnt = 0;
    Menu_Set = false;
  }


  // Conditions for the cursor position
  if (Menu_Set_TimeDate == 1) {
    Set_Time_Date_Display(Menu_Set_TimeDate);
  } else if (Menu_Set_TimeDate == 2) {
    Set_Time_Date_Display(Menu_Set_TimeDate);
  } else if (Menu_Set_TimeDate == 3) {
    Set_Time_Date_Display(Menu_Set_TimeDate);
  } else if (Menu_Set_TimeDate == 4) {
    Set_Time_Date_Display(Menu_Set_TimeDate);
  } else if (Menu_Set_TimeDate == 5) {
    Set_Time_Date_Display(Menu_Set_TimeDate);
  } else if (Menu_Set_TimeDate == 6) {
    Set_Time_Date_Display(Menu_Set_TimeDate);
  } else if (Menu_Set_TimeDate == 7) {
    Set_Time_Date_Display(Menu_Set_TimeDate);
  } 

  display.display();

  // Looping to set Hour
  while (set_Hour == true) {
    read_button();
    display.clearDisplay();

    display.setCursor(0, 0);
    display.print("Set");
    
    display.setCursor(0, 10);
    display.print("the hour");

    display.setCursor(7, 55);
    display.print("Back");
  
    display.setCursor(7, 45);
    display.print("Save");
    
    Digital_Clock_and_Date(_hour24, _minute, _second, _dtw, _day, _month ,_year);

    if (btn_Down == LOW) {
      _delay = 50;
      delay(_delay);
      _hour24++;
      if (_hour24 > 23) _hour24 = 0;
    }

    if (btn_Select == LOW) {
      delay(500);
      set_Hour = false;
    }

    if (btn_Down == HIGH && btn_Select == HIGH) {
      _delay = 100;
    }

    blink_cursor = !blink_cursor;
    if (blink_cursor == true) {
      display.drawBitmap(76, 10, Select_Top, 5, 3, WHITE);
    } else {
      display.drawBitmap(76, 10, Select_Top, 5, 3, BLACK);
    }
    
    display.display();
    delay(_delay);
  }


  // Looping to set Minute
  while (set_Minute == true) {
    read_button();
    display.clearDisplay();

    display.setCursor(0, 0);
    display.print("Set");
    
    display.setCursor(0, 10);
    display.print("the minute");

    display.setCursor(7, 55);
    display.print("Back");
  
    display.setCursor(7, 45);
    display.print("Save");

    if (btn_Down == LOW) {
      _delay = 50;
      delay(_delay);
      _minute++;
      if (_minute > 59) _minute = 0;
    }

    if (btn_Select == LOW) {
      delay(500);
      set_Minute = false;
    }

    if (btn_Down == HIGH && btn_Select == HIGH) {
      _delay = 100;
    }

    Digital_Clock_and_Date(_hour24, _minute, _second, _dtw, _day, _month ,_year);

    blink_cursor = !blink_cursor;
    if (blink_cursor == true) {
      display.drawBitmap(94, 10, Select_Top, 5, 3, WHITE);
    } else {
      display.drawBitmap(94, 10, Select_Top, 5, 3, BLACK);
    }
    
    display.display();
    delay(_delay);
  }


  // Looping to set Day / Date
  while (set_Day == true) {
    read_button();
    display.clearDisplay();

    display.setCursor(0, 0);
    display.print("Set");
    
    display.setCursor(0, 10);
    display.print("the day");

    display.setCursor(7, 55);
    display.print("Back");
  
    display.setCursor(7, 45);
    display.print("Save");

    if (btn_Down == LOW) {
      _delay = 50;
      delay(_delay);
      _day++;
      if (_day > 31) _day = 1;
    }

    if (btn_Select == LOW) {
      delay(500);
      set_Day = false;
    }

    if (btn_Down == HIGH && btn_Select == HIGH) {
      _delay = 100;
    }

    Digital_Clock_and_Date(_hour24, _minute, _second, _dtw, _day, _month ,_year);

    blink_cursor = !blink_cursor;
    if (blink_cursor == true) {
      display.drawBitmap(79, 40, Select_Buttom, 5, 3, WHITE);
    } else {
      display.drawBitmap(79, 40, Select_Buttom, 5, 3, BLACK);
    }
    
    display.display();
    delay(_delay);
  }


  // Looping to set Month
  while (set_Month == true) {
    read_button();
    display.clearDisplay();

    display.setCursor(0, 0);
    display.print("Set");
    
    display.setCursor(0, 10);
    display.print("the month");

    display.setCursor(7, 55);
    display.print("Back");
  
    display.setCursor(7, 45);
    display.print("Save");

    if (btn_Down == LOW) {
      _delay = 50;
      delay(_delay);
      _month++;
      if (_month > 12) _month = 1;
    }

    if (btn_Select == LOW) {
      delay(500);
      set_Month = false;
    }

    if (btn_Down == HIGH && btn_Select == HIGH) {
      _delay = 100;
    }

    Digital_Clock_and_Date(_hour24, _minute, _second, _dtw, _day, _month ,_year);

    blink_cursor = !blink_cursor;
    if (blink_cursor == true) {
      display.drawBitmap(106, 40, Select_Buttom, 5, 3, WHITE);
    } else {
      display.drawBitmap(106, 40, Select_Buttom, 5, 3, BLACK);
    }
    
    display.display();
    delay(_delay);
  }


  // Looping to set Year
  while (set_Year == true) {
    read_button();
    display.clearDisplay();

    display.setCursor(0, 0);
    display.print("Set");
    
    display.setCursor(0, 10);
    display.print("the year");

    display.setCursor(7, 55);
    display.print("Back");
  
    display.setCursor(7, 45);
    display.print("Save");

    if (btn_Down == LOW) {
      _delay = 50;
      delay(_delay);
      _year++;
      if (_year > 2100) _year = 2000;
    }

    if (btn_Select == LOW) {
      delay(500);
      set_Year = false;
    }

    if (btn_Down == HIGH && btn_Select == HIGH) {
      _delay = 100;
    }

    Digital_Clock_and_Date(_hour24, _minute, _second, _dtw, _day, _month ,_year);

    blink_cursor = !blink_cursor;
    if (blink_cursor == true) {
      display.drawBitmap(80, 56, Select_Side, 3, 5, WHITE);
    } else {
      display.drawBitmap(80, 56, Select_Side, 3, 5, BLACK);
    }
    
    display.display();
    delay(_delay);
  }
}

// Subroutines for displaying a cursor to select settings
void Set_Time_Date_Display(byte slc) {
   display.setTextSize(1);
   display.setTextColor(WHITE);
    
  if (slc == 1) {
    display.setCursor(0, 0);
    display.print("Set");
    display.setCursor(0, 10);
    display.print("the hour");
    display.drawBitmap(76, 10, Select_Top, 5, 3, WHITE);
  } else if (slc == 2) {
    display.setCursor(0, 0);
    display.print("Set");
    display.setCursor(0, 10);
    display.print("the minute");
    display.drawBitmap(94, 10, Select_Top, 5, 3, WHITE);
  } else if (slc == 3) {
    display.setCursor(0, 0);
    display.print("Set");
    display.setCursor(0, 10);
    display.print("the day");
    display.drawBitmap(79, 40, Select_Buttom, 5, 3, WHITE);
  } else if (slc == 4) {
    display.setCursor(0, 0);
    display.print("Set");
    display.setCursor(0, 10);
    display.print("the month");
    display.drawBitmap(106, 40, Select_Buttom, 5, 3, WHITE);
  } else if (slc == 5) {
    display.setCursor(0, 0);
    display.print("Set");
    display.setCursor(0, 10);
    display.print("the year");
    display.drawBitmap(80, 56, Select_Side, 3, 5, WHITE);
  } else if (slc == 6) {
    display.setCursor(0, 0);
    display.print("Save");
    display.setCursor(0, 10);
    display.print("Settings");
    display.drawBitmap(0, 45, Select_Side, 3, 5, WHITE);
  } else if (slc == 7) {
    display.drawBitmap(0, 55, Select_Side, 3, 5, WHITE);
  } 
}


void setAlarmTime(int hour, int minute) {
  rtc.disableAlarm(1);
  rtc.clearAlarm(1);

  DateTime now = rtc.now();
  DateTime alarmTime(now.year(), now.month(), now.day(), hour, minute, 0);

  if (alarmTime < now) {
    alarmTime = alarmTime + TimeSpan(1, 0, 0, 0);
  }
  rtc.setAlarm1(alarmTime, DS3231_A1_Hour);
}



// Subroutines for Alarm Settings
void Set_Alarm() {
  read_button();
  
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);

  Set_Alarm_Display();

  if (btn_Down == LOW) {
    delay(100);
    Menu_Set_Alarm++;
    if (Menu_Set_Alarm > 5) Menu_Set_Alarm = 1;
  }

  if (btn_Select == LOW && Menu_Set_Alarm == 1) {
    delay(250);
    Set_hour_alarm = true;
  }

  if (btn_Select == LOW && Menu_Set_Alarm == 2) {
    delay(250);
    Set_minute_alarm = true;
  }

  // Button Condition to enable Alarm and save Alarm settings
  if (btn_Select == LOW && Menu_Set_Alarm == 3) { // enable alarm
    delay(500);
    
    Display_to_save();

    Alarm_Stat = 1;
    delay(100);
  }


  // Button Condition to disable Alarm
  if (btn_Select == LOW && Menu_Set_Alarm == 4) { // disable alarm
    delay(500);
    // Disable and clear alarm
    rtc.disableAlarm(1);
    rtc.clearAlarm(1);
    
    Display_to_save();
    
    Alarm_Stat = 0;
    delay(100);
  }


  if (btn_Select == LOW && Menu_Set_Alarm == 5) {
    delay(500);
    Menu_Set_Alarm = 0;
    Menu_Stat = false;
    Menu_Set = false;
  }


  // Conditions for displaying the cursor position on the Alarm Settings
  if (Menu_Set_Alarm == 1) {
    Set_Alarm_Cursor(Menu_Set_Alarm);
  } else if (Menu_Set_Alarm == 2) {
    Set_Alarm_Cursor(Menu_Set_Alarm);
  } else if (Menu_Set_Alarm == 3) {
    Set_Alarm_Cursor(Menu_Set_Alarm);
  } else if (Menu_Set_Alarm == 4) {
    Set_Alarm_Cursor(Menu_Set_Alarm);
  } else if (Menu_Set_Alarm == 5) {
    Set_Alarm_Cursor(Menu_Set_Alarm);
  } 


  // Looping for setting the Hour for Alarm
  while (Set_hour_alarm == true && Menu_Set_Alarm == 1) {
    read_button();
    
    display.clearDisplay();

    if (btn_Down == LOW) {
      DateTime alarmTime = rtc.getAlarm1();
      _delay = 50;
      delay(_delay);
      int newHour = (alarmTime.hour() + 1) % 24;
      setAlarmTime(newHour, alarmTime.minute());
    }

    if (btn_Select == LOW) {
      delay(500);
      Set_hour_alarm = false;
    }

    if (btn_Down == HIGH && btn_Select == HIGH) {
      _delay = 100;
    }

    Set_Alarm_Display();

    blink_cursor = !blink_cursor;
    if (blink_cursor == true) {
      display.drawBitmap(51, 26, Select_Top, 5, 3, WHITE);
    } else {
      display.drawBitmap(51, 26, Select_Top, 5, 3, BLACK);
    }

    display.display();
    delay(_delay);
  }


  // Looping for setting the Minute for Alarm
  while (Set_minute_alarm == true && Menu_Set_Alarm == 2) {
    read_button();
    
    display.clearDisplay();

    if (btn_Down == LOW) {
      DateTime alarmTime = rtc.getAlarm1();
      _delay = 50;
      delay(_delay);
      int newMinute = (alarmTime.minute() + 1) % 60;
      setAlarmTime(alarmTime.hour(), newMinute);
    }

    if (btn_Select == LOW) {
      delay(500);
      Set_minute_alarm = false;
    }

    if (btn_Down == HIGH && btn_Select == HIGH) {
      _delay = 100;
    }

    Set_Alarm_Display();

    blink_cursor = !blink_cursor;
    if (blink_cursor == true) {
      display.drawBitmap(69, 26, Select_Top, 5, 3, WHITE);
    } else {
      display.drawBitmap(69, 26, Select_Top, 5, 3, BLACK);
    }

    display.display();
    delay(_delay);
  }
  
  display.display();
}



// Subroutines for the Alarm Settings display
void Set_Alarm_Display() {

  if (Alarm_Stat == 0) {
    display.setCursor(15, 0);
    display.print("Status : Disable");
  } else {
    display.setCursor(18, 0);
    display.print("Status : Enable");
  }


  //DateTime now = rtc.now();
  DateTime alarmTime = rtc.getAlarm1();

  if (alarmTime.hour() < 10) {
    display.setCursor(48, 15);
    display.print("0");
    display.print(alarmTime.hour(), DEC);
  } else {
    display.setCursor(48, 15);
    display.print(alarmTime.hour(), DEC);
  }
  display.print(":");
  if (alarmTime.minute() < 10) {
    display.print("0");
    display.print(alarmTime.minute(), DEC);
  } else {
    display.print(alarmTime.minute(), DEC);
  }

  display.setCursor(7, 35);
  display.print("Enable");

  display.setCursor(7, 45);
  display.print("Disable");

  display.setCursor(7, 55);
  display.print("Back");
}


// Subroutines for display and cursor position in Alarm Settings
void Set_Alarm_Cursor(byte slc) {
  if (slc == 1) {
    display.drawBitmap(51, 26, Select_Top, 5, 3, WHITE);
  } else if (slc == 2) {
    display.drawBitmap(69, 26, Select_Top, 5, 3, WHITE);
  } else if (slc == 3) {
    display.drawBitmap(0, 35, Select_Side, 3, 5, WHITE);
  } else if (slc == 4) {
    display.drawBitmap(0, 45, Select_Side, 3, 5, WHITE);
  } else if (slc == 5) {
    display.drawBitmap(0, 55, Select_Side, 3, 5, WHITE);
  } 
}


// Subroutine to display the Save
void Display_to_save() {
  display.clearDisplay(); 
  
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(33, 24);
  display.print("Saved");
  
  display.display();

  //Button_Sound(1); uncomment this & 3 below to enable saved sound.
  delay(500);
  //Button_Sound(0);
  delay(100);
  //Button_Sound(1);
  //delay(500);
  //Button_Sound(0);
  //delay(100);
}

// Subroutines to turn the Buzzer on or off
void Button_Sound(byte snd) {
  digitalWrite(Buzzer, snd);
}
