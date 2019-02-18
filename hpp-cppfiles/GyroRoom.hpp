#ifndef GYROROOM_HPP
#define GYROROOM_HPP
#include "Character.hpp"
#include "Space.hpp"
#include "StartSpace.hpp"
#include "Wand.hpp"
#include "Frodo.hpp"
#include "RandNum.hpp"
#include "PlayAgain.hpp"
#include "Borg.hpp"
#include "Gyro.hpp"


class GyroRoom : public Space
{
    protected:
        Character *gyro;
    public:
        GyroRoom(Frodo*);
        ~GyroRoom();
        void virtual spaceOutput();
};

#endif // GYROROOM_HPP
