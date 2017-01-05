/*Author: Sophie Rehrig
  Date Started: 17 November 2016
  Last Modified: 17 November 2016

  This is a header file for the worker class for an automatic shift scheduler.
*/

#ifndef Worker_H
#define Inventory_H

#include <string>

class Worker {
	int dayHrs;
	int hrs;
	std::string name;
	int* schedule; // = new int [73];
  public:
  	Worker();
  	//Worker(std::string n);
  	//~Worker();
  	int getDayHrs();
  	int getHrs();
  	void setSchedule(int* s);
  	void dHrs();
  	void dDayHrs();
  	void show();
};

#endif