#ifndef PROPILOT_H
#define PROPILOT_H

#include "pilot.h"

class propilot : public pilot
{
private:
    int rank;
public:
    propilot(int rank,int age,std::string name);
    ~propilot();
};

#endif