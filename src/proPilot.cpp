#include "proPilot.h"

propilot::propilot(int rank, int age, std::string name) : pilot(age, name)
{
    this->rank = rank;
}

propilot::~propilot()
{
}
