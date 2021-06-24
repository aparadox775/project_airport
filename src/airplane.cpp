#include "airplane.h"




airplane::airplane(/* args */)
{

    airplaneList.push_back(this);
    
}

airplane::~airplane()
{
}


std::string airplane::id()
{
    return airplaneID;
}

bool airplane::remove(std::string idforRemove)
{
    std::vector <airplane *>::iterator it = airplaneList.begin();
    for (airplane * temp:airplaneList)
    {
        if (temp->id() == idforRemove)
        {
            airplaneList.erase(it);
        }
        it++;
    }
        
}