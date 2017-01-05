/*Author: Sophie Rehrig
  Date Started: 17 November 2016
  Last Modified: 17 November 2016

  This is a header file for the worker class for an automatic shift scheduler.
*/

#ifndef Hour_H
#define Hour_H

#include <string>
#include "worker.h"
//class Worker;

class Hour {
    int shift;
    char type;
    Worker* workers = new Worker [1];
  public:
    Hour(int s,char t);
    //~Hour();
    int getID();
    char getType();
    void show();
};

#endif