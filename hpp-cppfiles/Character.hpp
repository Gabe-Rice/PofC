#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>

class Character
{
    protected:
        char charPtr;
        std::string itemName;
        char threat;
        int strength;
        int lives;
        int xCoord;
        int yCoord;
    public:
        Character();
        void setCharPtr(char);
        char getCharPtr();
        void setThreat(char);
        void setStrength(int);
        int getStrength();
        void setLives(int);
        int getLives();
        void setXCoord(int);
        int getXCoord();
        void setYCoord(int);
        int getYCoord();
        void attack(Character *);
        virtual ~Character() = 0;
};

#endif // CHARACTER_HPP
