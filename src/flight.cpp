#include "flight.h"

flight::flight(std::string origin, std::string dest, std::string pilotID, std::string planeID)
{
    this->origin = origin;
    this->destination = dest;
    this->pilotID = pilotID;
    this->planeID = planeID;
}

flight::~flight()
{
}

std::ostream const &flight::print(std::ostream &out)
{
    // std::ostream & << this
    return out << "origin : " << this->origin << "\tdestination: " << this->destination << "\tpilot: " << this->pilotID << "\tplane: " << this->planeID << std::endl;
}

bool flight::remove(std::vector<flight *> &vec, std::string id)
{
    auto it = vec.begin();
    char ch;
    for (flight *temp : vec)
    {
        if (temp->pilotID == id)
        {
            temp->print(std::cout);
            std::cout << "do you wanna remove this flight? [Y/n]";
            std::cin >> ch;
            switch (ch)
            {
            case 'y':
            case 'Y':
                vec.erase(it);
                break;
            case 'n':
            case 'N':
                break;

            default:
                vec.erase(it);
                break;
            }
        }
        it++;
    }
    return false;
}
std::string flight::getPilotID(){ return this->pilotID; }
std::string flight::getPlneID(){ return this->planeID; }
std::string flight::getDest() { return this->destination; }
std::string flight::getOrigin() { return this->origin;}
