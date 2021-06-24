#include "pilot.h"

pilot::pilot(int Age, std::string name)
{
    this->age = Age;
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
