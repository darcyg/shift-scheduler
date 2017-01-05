/*Author: Sophie Rehrig
  Date Started: 4 January 2017
  Last Modified: 4 January 2017

  This is a source code file for extra functions for testing for an automatic shift scheduler.
*/


#include "functions.h"
#include <stdlib.h>

int* randSchedule() {
	int* tempSchedule = new int [73];
	for (int i=0;i<73;++i) {
		tempSchedule[i] = rand() % 3;
	}
	return tempSchedule;
}

std::string IDToShift(int id) {
	//day hour type 
	return "error";
}