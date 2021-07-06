#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <iostream>
#include <vector>
#include "idGen.h"
class airplane
{
private:
    std::string airplaneID; 
    static std::vector <airplane *> airplaneList;
public:
    std::string id();
    airplane(/* args */);
    virtual ~airplane() = 0;
    static bool remove(std::vector <airplane *>&,std::string);
};

#endif