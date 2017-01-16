/*Author: Sophie Rehrig
  Date Started: 17 November 2016
  Last Modified: 15 January 2017

  This is a source code file for the hour class for an automatic shift scheduler.
*/

#include "hour.h"
#include <string>
#include <iostream>

//start of code from http://stackoverflow.com/a/17863204
 #include <sstream>

std::string itos(int i){
    std::stringstream ss;
    ss<<i;
    return ss.str();
}
//end of copied code

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
	//std::cout << "This is shift number " << shift << ", which is of type " << type << "." << std::endl;
	std::cout << "This is a shift of type " << type << " on " << getDay() << " at " << getHour() << ", worked by " << worker->getName() << "." << std::endl;
}

void Hour::setWorker(Worker* w) {
	worker = w;
}

Worker* Hour::getWorker() {
	return worker;
}

std::string Hour::getDay() {
	if (weekday=='m') {
		return "Monday";
	} else if (weekday == 't') {
		return "Tuesday";
	} else if (weekday == 'w') {
		return "Wednesday";
	} else if (weekday == 'h') {
		return "Thursday";
	} else if (weekday == 'f') {
		return "Friday";
	} else if (weekday == 's') {
		return "Saturday";
	} else if (weekday == 'u') {
		return "Sunday";
	} else {
		return NULL;
	}
}

std::string Hour::getHour() {
	std::string retstr = "";
	if (hr > 0 && hr < 13) {
		return itos(hr) + " AM";
	} else if (hr > 12 && hr < 24) {
		return itos(hr-12) + " PM";
	} else {
		return NULL;
	}
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