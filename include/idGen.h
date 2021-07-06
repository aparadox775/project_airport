#ifndef IDGEN_H
#define IDGEN_H


#include <stdexcept>
#include <random>
#include <fstream>


using IdPrefix = std::string;
std::string generateRandomId(const IdPrefix &);
#endif