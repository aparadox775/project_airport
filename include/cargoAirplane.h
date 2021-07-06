#ifndef CARGOAIRPLANE_H
#define CARGOAIRPLANE_H
#include "airplane.h"
class cargoAirplane: public airplane
{
private:
    double capacity;
public:
    cargoAirplane(double);
    ~cargoAirplane();
};

#endif