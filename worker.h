/*Author: Sophie Rehrig
  Date Started: 17 November 2016
  Last Modified:  January 2017

  This is a header file for the worker class for an automatic shift scheduler.
*/

#ifndef Worker_H
#define Worker_H

#include <string>
#include <vector>

class Worker {
	int dayHrs;
	int hrs;
  int maxHrs;
	std::string name;
	//int* schedule; // = new int [73];
  std::vector<int> schedule;
  public:
  	Worker();
  	Worker(std::string n, int m);
  	//~Worker();
  	int getDayHrs();
  	int getHrs();
    int getMaxHrs();
    std::vector<int> getSchedule();
  	void setSchedule(std::vector<int>& s);
  	void dHrs();
  	void dDayHrs();
    void dMaxHrs();
    void decHrs(bool d,bool n);
  	void show();
    void nameWorker(std::string n);
    void print();
};

#endif