#ifndef PASSROOM_HPP
#define PASSROOM_HPP
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
#include "Paths2.hpp"
#include "Rous2.hpp"


class PassRoom : public Space
{
    protected:

        Character *fire;
        Character *rous2;

    public:
        PassRoom(Frodo*);
        ~PassRoom();
        void virtual spaceOutput();
};

#endif // PASSROOM_HPP
