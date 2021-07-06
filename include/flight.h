#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include <vector>

class flight
{
private:
    std::string origin;
    std::string destination;
    std::string pilotID;
    std::string planeID;

public:
    flight(std::string, std::string, std::string, std::string);
    ~flight();
    std::ostream const &print(std::ostream &);
    static bool remove(std::vector<flight *> &, std::string);
    std::string getPilotID();
    std::string getPlneID();
    std::string getDest();
    std::string getOrigin();
};

#endif