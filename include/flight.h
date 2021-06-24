#ifndef FLIGHT_H
#define FLIGHT_H


#include <iostream>


class flight
{
private:
    std::string origin;
    std::string destination;
    std::string pilotID;
    std::string planeID;
public:
    flight(std::string ,std::string ,std::string ,std::string);
    ~flight();
};

#endif