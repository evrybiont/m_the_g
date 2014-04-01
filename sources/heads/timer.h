#ifndef TIMER_H
#define TIMER_H

#include "../shared/init_lsdl.h"

class Timer {
  public:
    void start();
    int  getTime();
  private:
    int startTime;
};

#endif
