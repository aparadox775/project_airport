#include "airplane.h"



airplane::airplane(/* args */):airplaneID(generateRandomId("airplane"))
{

    // airplaneList.push_back(this);
    
}

airplane::~airplane()
{
}


std::string airplane::id()
{
    return airplaneID;
}

bool airplane::remove(std::vector <airplane *>& airplaneList, std::string idforRemove)
{
    std::vector <airplane *>::iterator it = airplaneList.begin();
    for (airplane * temp:airplaneList)
    {
        if (temp->id() == idforRemove)
        {
            airplaneList.erase(it);
            return true;
        }
        it++;
    }
    return false;
        
}