

#include "hour.h"
#include <string>
#include <iostream>

Hour::Hour(int s){
	shift = s;
}

int Hour::getTime() {
	return shift;
}