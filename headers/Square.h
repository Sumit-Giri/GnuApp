#pragma once
#include "GeometricShape2d.h"
#include "point.h"
class Square : public shape
{
private:
    double mlength;

public:
    Square(Point o, double mlength);

    void Drawing();

    ~Square();
};