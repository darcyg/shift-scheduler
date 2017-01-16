/*Author: Sophie Rehrig
  Date Started: 4 January 2017
  Last Modified: 15 January 2017

  This is a header file for extra functions for testing for an automatic shift scheduler.
*/

#include <string>
#include <vector>
#include "hour.h"

#define NUM_SHIFTS 143
#define NUM_WORKERS 2

std::vector<int> randSchedule();
std::string IDToShift(int id);
bool sortByDayHours(Worker* lhs, Worker* rhs);
void dayHoursSort(std::vector<Worker*>& w);
bool sortByHours(Worker* lhs, Worker* rhs);
void hoursSort(std::vector<Worker*>& w);
bool sortByPreference(Worker* lhs, Worker* rhs, int s);
void preferenceSort(std::vector<Worker*>& w,int s);
Worker* chooseBest(Hour* h, std::vector<Worker*> w);
void fillWorker(Hour* h,Worker* w);
void printSchedule(std::vector<Hour*> s);
