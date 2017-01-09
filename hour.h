/*Author: Sophie Rehrig
  Date Started: 17 November 2016
  Last Modified: 8 January 2017

  This is a header file for the hour class for an automatic shift scheduler.
*/

#ifndef Hour_H
#define Hour_H

#include <string>
#include "worker.h"

class Hour {
    int shift;
    char weekday;
    int hr;
    char type;
    char day;
    Worker* worker;
  public:
    Hour(int s,char w,int h,char t,bool d);
    //~Hour();
    int getID();
    char getType();
    bool isDay();
    void show();
    void setWorker(Worker* w);
    //void phours();
    //int* getAval();
};

#endif