#include "pilot.h"

pilot::pilot(int age, std::string name):ID(generateRandomId("pilot"))
{
    this->age = age;
    // this->ID = std::move(id);
    this->name = std::move(name);
}
pilot::~pilot()
{
}

int pilot::getAge() const
{
    return age;
}

std::string pilot::getId()
{
    return ID;
}

std::string pilot::getName()
{
    return name;
}

bool pilot::remove(std::vector<pilot *> &pilots, std::string idforRemove)
{
    std::vector<pilot *>::iterator it = pilots.begin();
    for (pilot *temp : pilots)
    {
        if (temp->getId() == idforRemove)
        {
            pilots.erase(it);
            return true;
        }

        it++;
    }
    return false;
}
