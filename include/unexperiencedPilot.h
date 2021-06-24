#ifndef UNEXPERIENCEDPILOT_H
#define UNEXPERIENCEDPILOT_H

#include "pilot.h"

class unexperiencedpilot : private pilot
{
private:
    int flightsnumber;
public:
    unexperiencedpilot(int);
    ~unexperiencedpilot();
};

#endif