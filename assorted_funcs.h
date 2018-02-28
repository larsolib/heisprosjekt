#ifndef __ASSORTED_FUNCS_H__
#define __ASSORTED_FUNCS_H__

#include <stdlib.h>
#include <time.h>
#include "elev.h"
#include "io.h"
#include "orders.h"

/*
Initialization of the elevator.
Elevator moves upwards and stops at nearest floor.
@return Current floor
*/
int initialize_lift(void);


/*
Starte the motor.
@param current_floor	Elevators current floor
@param desired_floor	The requested floor to go to
*/
void move_to_floor(double current_floor, int desired_floor);


/*

*/
int timer(int count_s, clock_t reference);


#endif	//#ifndef __ASSORTED_FUNCS_H__