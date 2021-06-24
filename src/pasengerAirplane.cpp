#include "pasengerAirplane.h"


pasengerAirplane::pasengerAirplane(int capacity)
{
    this->capacity = capacity;
}

pasengerAirplane::~pasengerAirplane()
{
}

void pasengerAirplane::setCapacity(int capacity) {
    this->capacity = capacity;
}
