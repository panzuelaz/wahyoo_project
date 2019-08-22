#include <Arduino.h>
#include <SoftwareSerial.h>
#include "Conf.h"
unsigned long previousMillis = 0;

SoftwareSerial BTserial(2, 3); // RX | TX
// Connect the HC-05 TX to Arduino pin 2 RX. 
// Connect the HC-05 RX to Arduino pin 3 TX through a voltage divider.

String command        = "";


void setup()
{
  Serial.begin(115200);
  BTserial.begin(9600);

  Serial.println("The device started, now you can pair it with bluetooth!");

  /* PINS SETUP*/
  button_pins_setup();
  food_pins_setup();
  servo_pins_setup();
  food_servo_pins_setup();

  pinMode(buzzer, OUTPUT);
}


void loop()
{
  button_read();

  
  /** READ COMMAND FROM BLUETOOTH **/
  if (BTserial.available())
  {
    command = BTserial.readStringUntil('\n' || '\r');


     /* SERVO 0; AUTO-GATE */
    if (command == "0") {
      Serial.println("Command received: " + command);
      gateServo.write(90);
      Serial.println("Gate opened!");
      
      // pin_0 = true;
      // while(pin_0) {
      //   timer++;
      //   Serial.println(timer);
      //   if(timer == 1500) {
      //     Serial.println("Gate's closing..");
      //     pin_0 = false;
      //     timer = 0;
      //     break;
      //   }
      // }

      unsigned long currentMillis = millis();
      if (currentMillis - previousMillis >= 2000) {
        previousMillis = currentMillis;
        if (timer == 0) {
          timer = 1;
          Serial.println("Gate's closing..");
        }
        else {
          timer = 0;
        }
      }

      gateServo.write(0);
      Serial.println("Gate's closed!");
    }


    /* SERVO 1 */
    if (command == "1") {
      Serial.println("Command received: " + command);
      move_servo_1();
      foodSensor_1++;
    }


    /* SERVO 2 */
    if (command == "2") {
      Serial.println("Command received: " + command);
      move_servo_2();
      foodSensor_2++;
    }


    /* SERVO 3 */
    if (command == "3") {
      Serial.println("Command received: " + command);
      move_servo_3();
      foodSensor_3++;
    }


    /* SERVO 4 */
    if (command == "4") {
      Serial.println("Command received: " + command);
      move_servo_4();
      foodSensor_4++;
    }


    /* SERVO 5 */
    if (command == "5") {
      Serial.println("Command received: " + command);
      move_servo_5();
      foodSensor_5++;
    }


    /* SERVO 6 */
    if (command == "6") {
      Serial.println("Command received: " + command);
      move_servo_6();
      foodSensor_6++;
    }


    /* SERVO 7 */
    if (command == "7") {
      Serial.println("Command received: " + command);
      move_servo_7();
      foodSensor_7++;
    }


    /* SERVO 8 */
    if (command == "8") {
      Serial.println("Command received: " + command);
      move_servo_8();
      foodSensor_8++;
    }

    
    /* SERVO 9 */
    if (command == "9") {
      Serial.println("Command received: " + command);
      move_servo_9();
      foodSensor_9++;
    }


    /* SERVO 10 */
    if (command == "10") {
      Serial.println("Command received: " + command);
      move_servo_10();
      foodSensor_10++;
    }


    /* SERVO 11 */
    if (command == "11") {
      Serial.println("Command received: " + command);
      move_servo_11();
      foodSensor_11++;
    }


    /* SERVO 12 */
    if (command == "12") {
      Serial.println("Command received: " + command);
      move_servo_12();
      foodSensor_12++;
    }
  }


  /*Food Sensor 1 */
  if (foodSensor_1 >= 1)
  {
    Serial.println("Please refill the food number 1.");
    buzzer_activated();

    // while (timer == 0) {
    //   tone(buzzer, 1000);
    //   timer++;
    //   if (timer == 300) {
    //     noTone(buzzer);
    //     timer = 0;
    //     break;
    //   }
    // }
  }

  /*Food Sensor 2 */
  if (foodSensor_2 >= 1)
  {
    Serial.println("Please refill the food number 2.");
    buzzer_activated();
  }

  /*Food Sensor 3 */
  if (foodSensor_3 >= 1)
  {
    Serial.println("Please refill the food number 3.");
    buzzer_activated();
  }

  /*Food Sensor 4 */
  if (foodSensor_4 >= 1)
  {
    Serial.println("Please refill the food number 4.");
    buzzer_activated();
  }

  /*Food Sensor 5 */
  if (foodSensor_5 >= 1)
  {
    Serial.println("Please refill the food number 5.");
    buzzer_activated();
  }

  /*Food Sensor 6 */
  if (foodSensor_6 >= 1)
  {
    Serial.println("Please refill the food number 6.");
    buzzer_activated();
  }

  /*Food Sensor 7 */
  if (foodSensor_7 >= 1)
  {
    Serial.println("Please refill the food number 7.");
    buzzer_activated();
  }

  /*Food Sensor 8 */
  if (foodSensor_8 >= 1)
  {
    Serial.println("Please refill the food number 8.");
    buzzer_activated();
  }

  /*Food Sensor 9 */
  if (foodSensor_9 >= 1)
  {
    Serial.println("Please refill the food number 9.");
    buzzer_activated();
  }

/*Food Sensor 10 */
  if (foodSensor_10 >= 1)
  {
    Serial.println("Please refill the food number 10.");
    buzzer_activated();
  }

  /*Food Sensor 11 */
  if (foodSensor_11 >= 1)
  {
    Serial.println("Please refill the food number 11.");
    buzzer_activated();
  }

  /*Food Sensor 12 */
  if (foodSensor_12 >= 1)
  {
    Serial.println("Please refill the food number 12.");
    buzzer_activated();
  }


  /* Button State */
  if (button_pressed_1 == HIGH) {
    digitalWrite(foodLed_1, LOW);
    Serial.println("Food number 1 refilled.");
    buzzerFlag_1 = true;
  }

  if (button_pressed_2 == HIGH) {
    digitalWrite(foodLed_2, LOW);
    Serial.println("Food number 2 refilled.");
    buzzerFlag_2 = true;
  }

  if (button_pressed_3 == HIGH) {
    digitalWrite(foodLed_3, LOW);
    Serial.println("Food number 3 refilled.");
    buzzerFlag_3 = true;
  }

  if (button_pressed_4 == HIGH) {
    digitalWrite(foodLed_4, LOW);
    Serial.println("Food number 4 refilled.");
    buzzerFlag_4 = true;
  }

  if (button_pressed_5 == HIGH) {
    digitalWrite(foodLed_5, LOW);
    Serial.println("Food number 5 refilled.");
    buzzerFlag_5 = true;
  }

  if (button_pressed_6 == HIGH) {
    digitalWrite(foodLed_6, LOW);
    Serial.println("Food number 6 refilled.");
    buzzerFlag_6 = true;
  }

  if (button_pressed_7 == HIGH) {
    digitalWrite(foodLed_7, LOW);
    Serial.println("Food number 7 refilled.");
    buzzerFlag_7 = true;
  }

  if (button_pressed_8 == HIGH) {
    digitalWrite(foodLed_8, LOW);
    Serial.println("Food number 8 refilled.");
    buzzerFlag_8 = true;
  }

  if (button_pressed_9 == HIGH) {
    digitalWrite(foodLed_9, LOW);
    Serial.println("Food number 9 refilled.");
    buzzerFlag_9 = true;
  }

  if (button_pressed_10 == HIGH) {
    digitalWrite(foodLed_10, LOW);
    Serial.println("Food number 10 refilled.");
    buzzerFlag_10 = true;
  }

  if (button_pressed_11 == HIGH) {
    digitalWrite(foodLed_11, LOW);
    Serial.println("Food number 11 refilled.");
    buzzerFlag_11 = true;
  }

  if (button_pressed_12 == HIGH) {
    digitalWrite(foodLed_12, LOW);
    Serial.println("Food number 12 refilled.");
    buzzerFlag_11 = true;
  }


  /* Turn off the buzzer */
  if (buzzerFlag_1 && buzzerFlag_2 && buzzerFlag_3 && buzzerFlag_4 && buzzerFlag_5 && buzzerFlag_6 &&
      buzzerFlag_7 && buzzerFlag_8 && buzzerFlag_9 && buzzerFlag_10 && buzzerFlag_11 && buzzerFlag_12) {
        foodSensor_1 = 0;
        foodSensor_2 = 0;
        foodSensor_3 = 0;
        foodSensor_4 = 0;
        foodSensor_5 = 0;
        foodSensor_6 = 0;
        foodSensor_7 = 0;
        foodSensor_8 = 0;
        foodSensor_9 = 0;
        foodSensor_10 = 0;
        foodSensor_11 = 0;
        foodSensor_12 = 0;
        buzzerFlag_1 = false;
        buzzerFlag_2 = false;
        buzzerFlag_3 = false;
        buzzerFlag_4 = false;
        buzzerFlag_5 = false;
        buzzerFlag_6 = false;
        buzzerFlag_7 = false;
        buzzerFlag_8 = false;
        buzzerFlag_9 = false;
        buzzerFlag_10 = false;
        buzzerFlag_11 = false;
        buzzerFlag_12 = false;
  }
}