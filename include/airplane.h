#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <iostream>
#include <vector>
class airplane
{
private:
    std::string airplaneID; 
    static std::vector <airplane *> airplaneList;
public:
    std::string id();
    airplane(/* args */);
    virtual ~airplane();
    static bool remove(std::string);
};

#endif