/*Author: Sophie Rehrig
  Date Started: 17 November 2016
  Last Modified: 8 January 2017

  This is a source code file for the hour class for an automatic shift scheduler.
*/

#include "hour.h"
#include <string>
#include <iostream>

Hour::Hour(int s, char w, int h, char t, bool d){
	shift = s;
	weekday = w;
	hr = h;
	type = t;
	day = d;
	worker = NULL;
}

int Hour::getID() {
	return shift;
}

char Hour::getType() {
	return type;
}

bool Hour::isDay() {
	return day;
}

void Hour::show() {
	std::cout << "This is shift number " << shift << ", which is of type " << type << "." << std::endl;
}

void Hour::setWorker(Worker* w) {
	worker = w;
}

// void Hour::phours() {
// 	for (int i=0;i<73;++i) {
// 		std::cout << workers[0].getSchedule()[i] << " ";
// 	}
// 	std::cout << std::endl;
// }

// int* Hour::getAval() {
// 	int* aval = new int [NUM_WORKERS];
// 	for (int i=0;i<NUM_WORKERS;++i){
// 		aval[i] = workers[i].getSchedule()[shift];
// 	}
// 	return aval;
// }