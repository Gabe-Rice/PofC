#ifndef SPACE_HPP
#define SPACE_HPP
#include "Character.hpp"
#include "Frodo.hpp"
#include "Edges.hpp"
//#include "StartSpace.hpp"


class Space
{
    protected:
        Frodo *frodo;
        Space *top;
        Space *right;
        Space *left;
        Space *bottom;
        Space *currentSpace;
        Space *sSpace;
        Space *entSpace;
        Space *swampSpace;
        Space *minSpace;
        Space *passRoomSpace;
        Space *gyroSpace;
        bool isTop;
        bool isRight;
        bool isLeft;
        bool isBottom;
        Character *edgePath;
        Character ***space;
        int rows, cols;
    public:
        Space(Frodo*);
        virtual void printSpace();
        virtual void spaceOutput();
        virtual ~Space() = 0;
        virtual void setIsTop(bool);
        virtual bool getIsTop();
        virtual void setIsRight(bool);
        virtual bool getIsRight();
        virtual void setIsLeft(bool);
        virtual bool getIsLeft();
        virtual void setIsBottom(bool);
        virtual bool getIsBottom();

        virtual void setTop(Space*);
        virtual Space *getTop();
        virtual void setRight(Space*);
        virtual Space *getRight();
        virtual void setLeft(Space*);
        virtual Space *getLeft();
        virtual void setBottom(Space*);
        virtual Space *getBottom();
};

#endif // SPACE_HPP
