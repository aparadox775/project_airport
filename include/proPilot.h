#ifndef PROPILOT_H
#define PROPILOT_H

#include "pilot.h"

class propilot : private pilot
{
private:
    int rank;
public:
    propilot(int rank);
    ~propilot();
};

#endif