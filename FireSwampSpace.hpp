#ifndef FIRESWAMPSPACE_HPP
#define FIRESWAMPSPACE_HPP
#include "MinionLair.hpp"
#include "Character.hpp"
#include "Space.hpp"
#include "StartSpace.hpp"
#include "Wand.hpp"
#include "Frodo.hpp"
#include "RandNum.hpp"
#include "PlayAgain.hpp"
#include "Trees.hpp"
#include "TreeTrunk.hpp"
#include "Paths2.hpp"
#include "Rous.hpp"
#include "RandNum.hpp"


class FireSwampSpace : public Space
{
    protected:
        Character *itemTree;
        Character *itemTrunk;
        Character *midPath;
        Character *rous;
        Character *rous2;
        Character *borg;

    public:
        FireSwampSpace(Frodo*);
        ~FireSwampSpace();
        void virtual spaceOutput();
        void virtual fireSwampOut();
        //void virtual FireSwampOut();
};

#endif // FIRESWAMPSPACE_HPP
