#include "unexperiencedPilot.h"

unexperiencedpilot::unexperiencedpilot(int fNumber, int age,std::string name):pilot(age,name)
{
    this->flightsnumber = fNumber;
}

unexperiencedpilot::~unexperiencedpilot()
{
}
void unexperiencedpilot::increase()
{
    flightsnumber ++;
}