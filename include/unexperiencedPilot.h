#ifndef UNEXPERIENCEDPILOT_H
#define UNEXPERIENCEDPILOT_H

#include "pilot.h"

class unexperiencedpilot : private pilot
{
private:
    int flightsnumber;
    void increase();
public:
    unexperiencedpilot(int,int,std::string);
    ~unexperiencedpilot();
};

#endif