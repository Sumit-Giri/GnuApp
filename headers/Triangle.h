#pragma once
#include "point.h"

#include "GeometricShape2d.h"

using namespace Shapes2d;

class Triangle : public shape
{

public:
    Triangle(Point mVertex1, Point mVertex2, Point mVertex3);

    ~Triangle();

    void Drawing();

private:
    Point mVertex2;
    Point mVertex3;
};