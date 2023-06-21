#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,1);
#define trig 6
#define echo 7 
int t_puls = 0, distance = 0, No_people = 0;
int initial_distance = 400;
const int sound_speed = 57; // you can change it depend on the weather 

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  // making puls with width 10µs to Trigger 
  for(int i=0; i<3; i++)
  {
    delayMicroseconds(i*5);
    digitalWrite(trig, i%2);
  }

  t_puls = pulseIn(echo, HIGH);
  distance = t_puls / sound_speed;
  initial_distance = distance;
  Serial.println(initial_distance);

  lcd.begin(16, 2);
  lcd.backlight();

  lcd.setCursor(5,0);
  lcd.print("Hello");
  delay(1500);
  lcd.clear();

  lcd.setCursor(2,1);
  lcd.print("Person passed");
}

void loop() {

  // making puls with width 10µs to Trigger 
  for(int i=0; i<3; i++)
  {
    delayMicroseconds(i*5);
    digitalWrite(trig, i%2);
  }
  t_puls = pulseIn(echo, HIGH);
  distance = t_puls / sound_speed;
  delay(100);

  if(distance <= initial_distance - 30) // you can change distance 30 depend on the position of the sensor
  {
    while(distance != initial_distance)
    {
      for(int i=0; i<3; i++)
      {
        delayMicroseconds(i*5);
        digitalWrite(trig, i%2);
      }
      t_puls = pulseIn(echo, HIGH);
      distance = t_puls / sound_speed;
      delay(50);
    }
    No_people++;
  }
    lcd.setCursor(8,0);
    lcd.print(No_people);
}
