#include <Arduino.h>
#include "Conf.h"


unsigned long previousMillis = 0;


void buzzer_activated() {
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= 2000) {
        previousMillis = currentMillis;
        if (timer == 0) {
            timer = 1;
            tone(buzzer, 1000);
        }
        else {
            timer = 0;
            noTone(buzzer);
        }
    }
}


void timer_food() {
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= 15000) {
        previousMillis = currentMillis;
        if (timer == 0) {
            timer = 1;
            Serial.println("Food door's closing..");
        }
        else {
            timer = 0;
        }
    }
}


void move_servo_1() {
    myFoodServo_1.write(90);
    Serial.println("Food door's opened!");

    timer_food();

    myFoodServo_1.write(0);
    Serial.println("Food door's closed!");
    myServo_1.write(90);
    Serial.println("Food servant rotated!");
    digitalWrite(foodLed_1, HIGH);
}


void move_servo_2() {
    myFoodServo_2.write(90);
    Serial.println("Food door's opened!");
    
    timer_food();
    
    myFoodServo_2.write(0);
    Serial.println("Food door's closed!");
    myServo_2.write(90);
    Serial.println("Food servant rotated!");
    digitalWrite(foodLed_2, HIGH);
}


void move_servo_3() {
    myFoodServo_3.write(90);
    Serial.println("Food door's opened!");
    
    timer_food();

    myFoodServo_3.write(0);
    Serial.println("Food door's closed!");
    myServo_3.write(90);
    Serial.println("Food servant rotated!");
    digitalWrite(foodLed_3, HIGH);
}


void move_servo_4() {
    myFoodServo_4.write(90);
    Serial.println("Food door's opened!");

    timer_food();

    myFoodServo_4.write(0);
    Serial.println("Food door's closed!");
    myServo_4.write(90);
    Serial.println("Food servant rotated!");
    digitalWrite(foodLed_4, HIGH);
}


void move_servo_5() {
    myFoodServo_5.write(90);
    Serial.println("Food door's opened!");
    
    timer_food();

    myFoodServo_5.write(0);
    Serial.println("Food door's closed!");
    myServo_5.write(90);
    Serial.println("Food servant rotated!");
    digitalWrite(foodLed_5, HIGH);
}


void move_servo_6() {
    myFoodServo_6.write(90);
    Serial.println("Food door's opened!");
    
    timer_food();

    myFoodServo_6.write(0);
    Serial.println("Food door's closed!");
    myServo_6.write(90);
    Serial.println("Food servant rotated!");
    digitalWrite(foodLed_6, HIGH);
}


void move_servo_7() {
    myFoodServo_7.write(90);
    Serial.println("Food door's opened!");
    
    timer_food();

    myFoodServo_7.write(0);
    Serial.println("Food door's closed!");
    myServo_7.write(90);
    Serial.println("Food servant rotated!");
    digitalWrite(foodLed_7, HIGH);
}


void move_servo_8() {
    myFoodServo_8.write(90);
    Serial.println("Food door's opened!");
    
    timer_food();

    myFoodServo_8.write(0);
    Serial.println("Food door's closed!");
    myServo_8.write(90);
    Serial.println("Food servant rotated!");
    digitalWrite(foodLed_8, HIGH);
}


void move_servo_9() {
    myFoodServo_9.write(90);
    Serial.println("Food door's opened!");
    
    timer_food();

    myFoodServo_9.write(0);
    Serial.println("Food door's closed!");
    myServo_9.write(90);
    Serial.println("Food servant rotated!");
    digitalWrite(foodLed_9, HIGH);
}


void move_servo_10() {
    myFoodServo_10.write(90);
    Serial.println("Food door's opened!");
    
    timer_food();

    myFoodServo_10.write(0);
    Serial.println("Food door's closed!");
    myServo_10.write(90);
    Serial.println("Food servant rotated!");
    digitalWrite(foodLed_10, HIGH);
}


void move_servo_11() {
    myFoodServo_11.write(90);
    Serial.println("Food door's opened!");
    
    timer_food();

    myFoodServo_11.write(0);
    Serial.println("Food door's closed!");
    myServo_11.write(90);
    Serial.println("Food servant rotated!");
    digitalWrite(foodLed_11, HIGH);
}


void move_servo_12() {
    myFoodServo_12.write(90);
    Serial.println("Food door's opened!");
    
    timer_food();

    myFoodServo_12.write(0);
    Serial.println("Food door's closed!");
    myServo_12.write(90);
    Serial.println("Food servant rotated!");
    digitalWrite(foodLed_12, HIGH);
}