

#include <iostream>
#include "hour.h"
// #include "worker.h"
#include "functions.h"
#include "info.h"


void test() {
	std::cout << "Testing" << std::endl;
	Worker* me = new Worker();
	Worker* sam = new Worker();
	Worker* nemo = new Worker();
	me->nameWorker("Sophie");
	me->show();
	sam->nameWorker("Samantha");
	sam->show();
	nemo->nameWorker("Nermeen");
	Hour* test = new Hour(0,'m',8,'h',true);
	test->show();
	std::vector<Worker*> testvec = {me,sam,nemo};
	preferenceSort(testvec,34);
	testvec[0]->print();
	std::cout << std::endl;
	//test->phours();
	//int* ta = test->getAval();
	//std::cout << ta[0] << " " << ta[1] << std::endl;
	// int* rs = randSchedule();
	// std::cout << rs[1] << " " << rs[2] << " " << rs[15] << std::endl;
}

void real() {
	std::vector<Hour*> week;
	std::vector<Worker*> staff;
	buildShifts(week);
	buildStaff(staff);
	for(int i=0;i<NUM_SHIFTS;++i) {
		fillWorker(week[i],chooseBest(week[i],staff));
	}
	printSchedule(week);
}


int main() {
	//test();
	real();
}