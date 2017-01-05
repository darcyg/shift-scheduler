/*Author: Sophie Rehrig
  Date Started: 17 November 2016
  Last Modified: 4 January 2017

  This is a header file for the hour class for an automatic shift scheduler.
*/

#ifndef Hour_H
#define Hour_H

#include <string>
#include "worker.h"
#define NUM_WORKERS 3

class Hour {
    int shift;
    char day;
    int hr;
    char type;
    Worker* workers = new Worker [NUM_WORKERS];
  public:
    Hour(int s,char d,int h,char t);
    //~Hour();
    int getID();
    char getType();
    void show();
    void phours();
    int* getAval();
};

#endif