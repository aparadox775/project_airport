#ifndef PASENGERAIRPLANE_H
#define PASENGERAIRPLANE_H

#include "airplane.h"

class pasengerAirplane : public airplane
{
private:
    int capacity;
public:
    pasengerAirplane(int);
    ~pasengerAirplane();
    void setCapacity(int);
};

#endif