/*Author: Sophie Rehrig
  Date Started: 4 January 2017
  Last Modified: 15 January 2017

  This is a source code file for extra functions for testing for an automatic shift scheduler.
*/


#include "functions.h"
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <functional>
#include <time.h>

std::vector<int> randSchedule() {
	srand(time(NULL));
	std::vector<int> tempSchedule; 
	for (int i=0;i<NUM_SHIFTS;++i) {
		tempSchedule.push_back(rand() % 3);
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

void dayHoursSort(std::vector<Worker*>& workers) {
	std::stable_sort(&workers[0],&workers[NUM_WORKERS],sortByDayHours);
}

bool sortByHours(Worker* lhs, Worker* rhs) {
	return lhs->getHrs() > rhs->getHrs();
}

void hoursSort(std::vector<Worker*>& workers) {
	std::stable_sort(&workers[0],&workers[NUM_WORKERS],sortByHours);
}

bool sortByPreference(Worker* lhs, Worker* rhs,int shift) {
	return lhs->getSchedule()[shift] > rhs->getSchedule()[shift];
}

void preferenceSort(std::vector<Worker*>& workers, int shift) {
	std::stable_sort(&workers[0],&workers[NUM_WORKERS],std::bind(sortByPreference,std::placeholders::_1,std::placeholders::_2,shift));
}

Worker* chooseBest(Hour* hour,std::vector<Worker*> workers) {
	int shift = hour->getID();
	for(int i=0;i<NUM_SHIFTS;++i) {
		preferenceSort(workers,shift);
		hoursSort(workers);
		if (hour->isDay()) {
			dayHoursSort(workers);
		}
	}
	return workers[0];
}

void fillWorker(Hour* hour, Worker* worker) {
	hour->setWorker(worker);
	worker->decHrs(hour->isDay(),worker->getHrs()!=0);
}


void printSchedule(std::vector<Hour*> schedule) {
	for (int i=0;i<NUM_SHIFTS;++i) {
		schedule[i]->show();
	}
}