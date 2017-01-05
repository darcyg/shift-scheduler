

#include "worker.h"
#include <string>
#include <iostream>

Worker::Worker() {
	name = "";
	dayHrs = 2;
	hrs = 8;
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

void Worker::show(){
	std::cout << name << " needs " << dayHrs << " more daytime hours and " << hrs << " more hours in total." << std::endl;
}