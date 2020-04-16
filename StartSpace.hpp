#ifndef STARTSPACE_HPP
#define STARTSPACE_HPP
#include "StartGame.hpp"
#include "Character.hpp"
#include "Space.hpp"
#include "Wand.hpp"
#include "Trees.hpp"
#include "TreeTrunk.hpp"
#include "Frodo.hpp"
#include "Paths.hpp"
#include "Paths2.hpp"
#include "Paths3.hpp"
#include "Orc.hpp"
#include "WindOfEchos.hpp"
#include "RandNum.hpp"
#include "PlayAgain.hpp"
#include "Space.hpp"
#include "EnterpriseSpace.hpp"
#include "FireSwampSpace.hpp"
#include "GyroRoom.hpp"


class StartSpace : public Space
{
    protected:
        Character *item1;
        Character *itemTree;
        Character *itemTrunk;
        Character *highPath;
        Character *midPath;
        Character *lowPath;
        Character *orc;
        Character *wind;
       // Space *currentSpace;
       // Space *entSpace;

    public:
        StartSpace(Frodo*);
        ~StartSpace();
        void spaceOutput();
};

#endif // STARTSPACE_HPP
