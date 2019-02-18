#ifndef ENTERPRISESPACE_HPP
#define ENTERPRISESPACE_HPP
#include "Character.hpp"
#include "Space.hpp"
#include "StartSpace.hpp"
#include "Wand.hpp"
#include "Frodo.hpp"
#include "RandNum.hpp"
#include "PlayAgain.hpp"
#include "Borg.hpp"
#include "Gyro.hpp"


class EnterpriseSpace : public Space
{
    protected:
        Character *borg;
        Character *gyro;
    public:
        EnterpriseSpace(Frodo*);
        ~EnterpriseSpace();
        void virtual spaceOutput();
        void virtual enterpriseOut();
        int fibRecTime(int);
};

#endif // ENTERPRISESPACE_HPP
