

#include <iostream>
#include "hour.h"
// #include "worker.h"
// #include "functions.h"


void test() {
	std::cout << "Testing" << std::endl;
	Worker* me = new Worker();
	me->nameWorker("Sophie");
	me->show();
	Hour* test = new Hour(0,'m',8,'h');
	test->show();
	//test->phours();
	int* ta = test->getAval();
	std::cout << ta[0] << " " << ta[1] << std::endl;
	// int* rs = randSchedule();
	// std::cout << rs[1] << " " << rs[2] << " " << rs[15] << std::endl;
}

void real() {
	Hour* semester = new Hour [73];
}


int main() {
	test();
	//real();
}