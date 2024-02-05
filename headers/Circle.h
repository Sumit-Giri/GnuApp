#pragma once
#include "point.h"
#include "GeometricShape2d.h"
using namespace Shapes2d;
class Circle : public shape
{
public:
    Circle(Point o, double r);
    ~Circle();

    void Drawing();

private:
    float mRadius;
};