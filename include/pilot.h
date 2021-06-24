#ifndef PILOT_H
#define PILOT_H

#include <iostream>

class pilot
{
private:
    /* data */
    int age;
    std::string ID;
    std::string name;
public:
    pilot(int age,std::string name);
    int getAge() const;
    std::string getId();
    std::string getName();
    ~pilot();
};

#endif