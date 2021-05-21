#include <REG52.h> 
 sbit DRIVER_SENSOR_PIN=P0^0;
 sbit SEAT_BELT_SENSOR_PIN=P0^1;
 
 sbit PASSENGER_SENSOR_PIN2=P1^0;
 sbit SEAT_BELT_SENSOR_PIN2=P1^1;
 
 
 sbit ALARM_LED_PIN=P3^7;
 
 void main(){
 
 //P0-input port
 P0=0xFF;
	P1=0xFF;
	 
	 
	 while(1){

if(DRIVER_SENSOR_PIN == 0 && SEAT_BELT_SENSOR_PIN == 1 ||PASSENGER_SENSOR_PIN2 == 0 && SEAT_BELT_SENSOR_PIN2 == 1 ){
ALARM_LED_PIN = 0;}
else {
ALARM_LED_PIN = 1;
}
	 }
 }