#pragma once

#include "point.h"

#include "GeometricShape2d.h"

using namespace Shapes2d;

class Rectangle : public shape
{

public:
    Rectangle(Point d1, Point d2);

    ~Rectangle();

    void Drawing();

private:
    Point mDiagonal2;
};
