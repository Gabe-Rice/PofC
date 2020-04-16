#ifndef MINIONLAIR_HPP
#define MINIONLAIR_HPP
#include "Character.hpp"
#include "Space.hpp"
#include "StartSpace.hpp"
#include "Wand.hpp"
#include "Frodo.hpp"
#include "RandNum.hpp"
#include "PlayAgain.hpp"
#include "Rous2.hpp"
#include "SharpStick.hpp"
#include "TreeTrunk.hpp"
#include "PassRoom.hpp"


class MinionLair : public Space
{
    protected:

        Character *rous;
        Character *rous2;
        Character *sharpstick;
        Character *treeTrunk;

    public:
        MinionLair(Frodo*);
        ~MinionLair();
        void virtual spaceOutput();
        void virtual minLairOut();
};

#endif // MINIONLAIR_HPP
