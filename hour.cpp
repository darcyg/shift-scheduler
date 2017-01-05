

#include "hour.h"
#include <string>
#include <iostream>

Hour::Hour(int s, char t){
	shift = s;
	type = t;
}

int Hour::getID() {
	return shift;
}

char Hour::getType() {
	return type;
}

void Hour::show() {
	std::cout << "This is shift number " << shift << ", which is of type " << type << "." << std::endl;
}