/*Author: Sophie Rehrig
  Date Started: 4 January 2017
  Last Modified: 4 January 2017

  This is a source code file for extra functions for testing for an automatic shift scheduler.
*/


#include "functions.h"
#include <stdlib.h>
#include <iostream>
#include <algorithm>

std::vector<int> randSchedule() {
	std::vector<int> tempSchedule; // = new int [73];
	for (int i=0;i<73;++i) {
		tempSchedule[i] = rand() % 3;
	}
	return tempSchedule;
}

std::string IDToShift(int id) {
	//day hour type
	std::cout << "not implemented"; 
	return "error";
}

bool sortByDayHours(Worker* lhs, Worker* rhs) {
	return lhs->getDayHrs() > rhs->getDayHrs();
}

void dayHoursSort(std::vector<Worker> workers) {
	//Worker temp [NUM_WORKERS] = (*workers);
	std::vector<int> temp = {3,6,1,8};
	std::sort(&temp[0],&temp[4]);
	std::cout << temp[1] << std::endl;
	//std::stable_sort(&workers[0],&workers[NUM_WORKERS])//,sortByDayHours);
}

Worker chooseBest(Hour hour,std::vector<Worker> workers) {
	int shift = hour.getID();
	for(int i=0;i<NUM_SHIFTS;++i) {
		std::cout << "not done " << workers[i].getSchedule()[shift] << std::endl;
	}
	return workers[0];
}