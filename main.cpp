

#include <iostream>
#include "hour.h"
// #include "worker.h"
// #include "functions.h"

int main() {
	std::cout << "Testing" << std::endl;
	Worker* me = new Worker();
	me->show();
	Hour* test = new Hour(0,'h');
	test->show();
	// int* rs = randSchedule();
	// std::cout << rs[1] << " " << rs[2] << " " << rs[15] << std::endl;
}