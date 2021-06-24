#include "flight.h"

flight::flight(std::string origin,std::string dest,std::string pilotID,std::string planeID)
{
    this->origin = origin;
    this->destination = dest;
    this->pilotID = pilotID;
    this->planeID = planeID;
}

flight::~flight()
{
}