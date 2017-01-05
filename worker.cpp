/*Author: Sophie Rehrig
  Date Started: 17 November 2016
  Last Modified: 4 January 2016

  This is a source code file for the worker class for an automatic shift scheduler.
*/

#include "worker.h"
#include "functions.h"
#include <string>
#include <iostream>

Worker::Worker() {
	name = "";
	dayHrs = 2;
	hrs = 8;
	schedule = randSchedule();
}

// Worker::Worker(std::string n) {
// 	name = n;
// 	dayHrs = 2;
// 	hrs = 8;
// }

int Worker::getHrs(){
	return hrs;
}

int Worker::getDayHrs(){
	return dayHrs;
}

void Worker::dHrs(){
	--hrs;
}

void Worker::dDayHrs(){
	--dayHrs;
}

void Worker::setSchedule(int* ts){
	for(int i=0;i<73;++i){
		schedule[i] = ts[i];
	}
}

int* Worker::getSchedule() {
	return schedule;
}

void Worker::show(){
	std::cout << name << " needs " << dayHrs << " more daytime hours and " << hrs << " more hours in total." << std::endl;
}

void Worker::nameWorker(std::string n){
	name = n;
}