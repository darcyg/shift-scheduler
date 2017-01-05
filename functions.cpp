

#include "functions.h"
#include <stdlib.h>

int* randSchedule() {
	int* tempSchedule = new int [73];
	for (int i=0;i<73;++i) {
		tempSchedule[i] = rand() % 3;
	}
	return tempSchedule;
}