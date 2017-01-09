/*Author: Sophie Rehrig
  Date Started: 4 January 2017
  Last Modified: 4 January 2017

  This is a header file for extra functions for testing for an automatic shift scheduler.
*/

  #include <string>
  #include <vector>
  #include "hour.h"

  #define NUM_SHIFTS 73
  #define NUM_WORKERS 2

  std::vector<int> randSchedule();
  std::string IDToShift(int id);
  bool sortByDayHours(Worker* lhs, Worker* rhs);
  void dayHoursSort(std::vector<Worker> w);
  bool sortByHours(const Worker &lhs, const Worker &rhs);
  Worker* hoursSort(Worker* w);
  bool sortByPreference(const Worker &lhs, const Worker &rhs);
  Worker* preferenceSort(Worker* w);
  Worker chooseBest(Hour h, std::vector<Worker> w);

