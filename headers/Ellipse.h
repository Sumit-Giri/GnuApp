#pragma once
#include "GeometricShape2d.h"

using namespace Shapes2d;
class Ellipse : public shape
{

public:
    Ellipse(Point o, Point mMajorRadius, Point mMinorRadius);

    ~Ellipse();

    void Drawing();

private:
    Point mMinorRadius;

    Point mMajorRadius;
};