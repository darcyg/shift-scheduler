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
    Worker* workers = new Worker [20];
  public:
    Hour(int s);
    //~Hour();
    int getTime();

};

#endif