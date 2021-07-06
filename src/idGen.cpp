#include "idGen.h"


#define RANDOM_ID_GENERATOR_LENGTH 10

std::string generateRandomId(const IdPrefix &prefix)
{
    // Create engine only one time
    static std::default_random_engine randEng{
        static_cast<unsigned long>(time(nullptr))};
    static std::vector<char> possibleCharacters = {};

    // It is executed only at initial invocation
    if (possibleCharacters.empty())
    {
        for (char i = 'a'; i <= 'z'; i++)
        {
            possibleCharacters.push_back(i);
        }
        for (char i = '0'; i <= '9'; i++)
        {
            possibleCharacters.push_back(i);
        }
    }

    std::string id = prefix + "_";

    std::uniform_int_distribution<size_t> randDist(0, possibleCharacters.size() - 1);

    for (size_t i = 0; i < RANDOM_ID_GENERATOR_LENGTH; i++)
    {
        id.push_back(possibleCharacters[randDist(randEng)]);
    }

    return id;
}
