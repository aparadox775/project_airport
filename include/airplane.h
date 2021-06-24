#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <iostream>

class airplane
{
private:
    std::string airplaneID; 
public:
    std::string id();
    airplane(/* args */);
    ~airplane();
};

#endif