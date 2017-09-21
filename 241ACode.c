#pragma config(Motor,  port1,           FL,            tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port2,           FR,            tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           BL,            tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           BR,            tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
#pragma competitionControl(Competition)
#pragma autonomousDuration(15)
#pragma userControlDuration(150)
#include "VEX_Competition_Includes.c"

void pre_auton (){
}
task autonomous () {
	while (1==1) {
		motor[FR]=127;
		motor[BR]=127;
		motor[FL]=127;
		motor[BL]=127;
	}
}
task usercontrol(){
	while (1==1){
		//Right joystick controls right wheels
		motor[FL] = vexRT[Ch2];
		motor[BL]  = vexRT[Ch2];
		//Left joystick controls left wheels
		motor[FR] = vexRT[Ch3];
		motor[BR]  = vexRT[Ch3];
		int x = 0;
		if(vexRT[Btn8D]){
			startTask(autonomous);
			while(x <= 15000){
				wait1Msec(1);
				x++;
			}
		}
		/* press the bottom button of the right buttons to
		start the autonomous*/
	}
}
