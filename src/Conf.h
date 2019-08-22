#ifndef Conf_h
#define Conf_h


#include "Servo.h"


#define buzzer              4

#define buttonPin_1         5
#define buttonPin_2         5
#define buttonPin_3         5
#define buttonPin_4         5
#define buttonPin_5         5
#define buttonPin_6         5
#define buttonPin_7         5
#define buttonPin_8         5
#define buttonPin_9         5
#define buttonPin_10        5
#define buttonPin_11        5
#define buttonPin_12        5

#define foodLed_1           6
#define foodLed_2           7
#define foodLed_3           8
#define foodLed_4           9
#define foodLed_5           10
#define foodLed_6           11
#define foodLed_7           12
#define foodLed_8           13
#define foodLed_9           14
#define foodLed_10          15
#define foodLed_11          16
#define foodLed_12          17

#define servoPin_0          18
#define servoPin_1          19
#define servoPin_2          20
#define servoPin_3          21
#define servoPin_4          22
#define servoPin_5          23
#define servoPin_6          24
#define servoPin_7          25
#define servoPin_8          26
#define servoPin_9          27
#define servoPin_10         28
#define servoPin_11         29
#define servoPin_12         30

#define foodServoPin_1      31
#define foodServoPin_2      32
#define foodServoPin_3      33
#define foodServoPin_4      34
#define foodServoPin_5      35
#define foodServoPin_6      36
#define foodServoPin_7      37
#define foodServoPin_8      38
#define foodServoPin_9      39
#define foodServoPin_10     40
#define foodServoPin_11     41
#define foodServoPin_12     42

int timer                 = 0;

int button_pressed_1      = 0;
int button_pressed_2      = 0;
int button_pressed_3      = 0;
int button_pressed_4      = 0;
int button_pressed_5      = 0;
int button_pressed_6      = 0;
int button_pressed_7      = 0;
int button_pressed_8      = 0;
int button_pressed_9      = 0;
int button_pressed_10     = 0;
int button_pressed_11     = 0;
int button_pressed_12     = 0;

int foodSensor_1          = 1;
int foodSensor_2          = 1;
int foodSensor_3          = 1;
int foodSensor_4          = 1;
int foodSensor_5          = 1;
int foodSensor_6          = 1;
int foodSensor_7          = 1;
int foodSensor_8          = 1;
int foodSensor_9          = 1;
int foodSensor_10         = 1;
int foodSensor_11         = 1;
int foodSensor_12         = 1;

boolean buzzerFlag_1      = false;
boolean buzzerFlag_2      = false;
boolean buzzerFlag_3      = false;
boolean buzzerFlag_4      = false;
boolean buzzerFlag_5      = false;
boolean buzzerFlag_6      = false;
boolean buzzerFlag_7      = false;
boolean buzzerFlag_8      = false;
boolean buzzerFlag_9      = false;
boolean buzzerFlag_10     = false;
boolean buzzerFlag_11     = false;
boolean buzzerFlag_12     = false;

Servo gateServo;
Servo myServo_1;
Servo myServo_2;
Servo myServo_3;
Servo myServo_4;
Servo myServo_5;
Servo myServo_6;
Servo myServo_7;
Servo myServo_8;
Servo myServo_9;
Servo myServo_10;
Servo myServo_11;
Servo myServo_12;

Servo myFoodServo_1;
Servo myFoodServo_2;
Servo myFoodServo_3;
Servo myFoodServo_4;
Servo myFoodServo_5;
Servo myFoodServo_6;
Servo myFoodServo_7;
Servo myFoodServo_8;
Servo myFoodServo_9;
Servo myFoodServo_10;
Servo myFoodServo_11;
Servo myFoodServo_12;


void button_pins_setup() {
    pinMode(buttonPin_1, INPUT);
    pinMode(buttonPin_2, INPUT);
    pinMode(buttonPin_3, INPUT);
    pinMode(buttonPin_4, INPUT);
    pinMode(buttonPin_5, INPUT);
    pinMode(buttonPin_6, INPUT);
    pinMode(buttonPin_7, INPUT);
    pinMode(buttonPin_8, INPUT);
    pinMode(buttonPin_9, INPUT);
    pinMode(buttonPin_10, INPUT);
    pinMode(buttonPin_11, INPUT);
    pinMode(buttonPin_12, INPUT);
}


void food_pins_setup() {
    pinMode(foodLed_1, OUTPUT);
    pinMode(foodLed_2, OUTPUT);
    pinMode(foodLed_3, OUTPUT);
    pinMode(foodLed_4, OUTPUT);
    pinMode(foodLed_5, OUTPUT);
    pinMode(foodLed_6, OUTPUT);
    pinMode(foodLed_7, OUTPUT);
    pinMode(foodLed_8, OUTPUT);
    pinMode(foodLed_9, OUTPUT);
    pinMode(foodLed_10, OUTPUT);
    pinMode(foodLed_11, OUTPUT);
    pinMode(foodLed_12, OUTPUT);
}


void servo_pins_setup() {
    gateServo.attach(servoPin_0);
    myServo_1.attach(servoPin_1);
    myServo_2.attach(servoPin_2);
    myServo_3.attach(servoPin_3);
    myServo_4.attach(servoPin_4);
    myServo_5.attach(servoPin_5);
    myServo_6.attach(servoPin_6);
    myServo_7.attach(servoPin_7);
    myServo_8.attach(servoPin_8);
    myServo_9.attach(servoPin_9);
    myServo_10.attach(servoPin_10);
    myServo_11.attach(servoPin_11);
    myServo_12.attach(servoPin_12);
}


void food_servo_pins_setup() {
    myFoodServo_1.attach(foodServoPin_1);
    myFoodServo_2.attach(foodServoPin_2);
    myFoodServo_3.attach(foodServoPin_3);
    myFoodServo_4.attach(foodServoPin_4);
    myFoodServo_5.attach(foodServoPin_5);
    myFoodServo_6.attach(foodServoPin_6);
    myFoodServo_7.attach(foodServoPin_7);
    myFoodServo_8.attach(foodServoPin_8);
    myFoodServo_9.attach(foodServoPin_9);
    myFoodServo_10.attach(foodServoPin_10);
    myFoodServo_11.attach(foodServoPin_11);
    myFoodServo_12.attach(foodServoPin_12);
}


void button_read() {
    button_pressed_1 = digitalRead(buttonPin_1);
    button_pressed_2 = digitalRead(buttonPin_2);
    button_pressed_3 = digitalRead(buttonPin_3);
    button_pressed_4 = digitalRead(buttonPin_4);
    button_pressed_5 = digitalRead(buttonPin_5);
    button_pressed_6 = digitalRead(buttonPin_6);
    button_pressed_7 = digitalRead(buttonPin_7);
    button_pressed_8 = digitalRead(buttonPin_8);
    button_pressed_9 = digitalRead(buttonPin_9);
    button_pressed_10 = digitalRead(buttonPin_10);
    button_pressed_11 = digitalRead(buttonPin_11);
    button_pressed_12 = digitalRead(buttonPin_12);
}

void buzzer_activated();

void timer_food();

void move_servo_1();

void move_servo_2();

void move_servo_3();

void move_servo_4();

void move_servo_5();

void move_servo_6();

void move_servo_7();

void move_servo_8();

void move_servo_9();

void move_servo_10();

void move_servo_11();

void move_servo_12();


#endif