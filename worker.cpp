/*Author: Sophie Rehrig
  Date Started: 17 November 2016
  Last Modified:  January 2016

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
	maxHrs = 8;
	schedule = randSchedule();
}

Worker::Worker(std::string n, int m) {
	name = n;
	dayHrs = 2;
	hrs = 8;
	maxHrs = m;
	schedule = randSchedule();
}

int Worker::getHrs(){
	return hrs;
}

int Worker::getDayHrs(){
	return dayHrs;
}

int Worker::getMaxHrs(){
	return maxHrs;
}

void Worker::dHrs(){
	--hrs;
	--maxHrs;
}

void Worker::dDayHrs(){
	--dayHrs;
	--hrs;
	--maxHrs;
}

void Worker::dMaxHrs(){
	--maxHrs;
}

void Worker::setSchedule(std::vector<int>& ts){
	for(int i=0;i<73;++i){
		schedule.push_back(ts[i]);
	}
}

std::vector<int> Worker::getSchedule() {
	return schedule;
}

void Worker::show(){
	std::cout << name << " needs " << dayHrs << " more daytime hours and " << hrs << " more hours in total." << std::endl;
}

void Worker::nameWorker(std::string n){
	name = n;
}

void Worker::print() {
	std::cout << name;
}

void Worker::decHrs(bool isDay, bool isNeeded) {
	if (isDay) {
		--dayHrs;
		--hrs;
	} else if (isNeeded) {
		--hrs;
	}
	--maxHrs;
}