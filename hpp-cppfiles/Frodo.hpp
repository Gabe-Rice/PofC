#ifndef FRODO_HPP
#define FRODO_HPP
#include "Character.hpp"
#include <string>


class Frodo : public Character
{
    private:
        std::string items[4]; //wand, magic water, sharp stick of destiny, gyro
    public:
        Frodo();
        void addItems(std::string);
        void showItems();
        void removeItem(std::string);
        bool hasItems(std::string);
        void attack();
        void endLife();

};

#endif // FRODO_HPP
