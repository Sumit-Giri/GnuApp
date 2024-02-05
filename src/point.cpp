
#include "../headers/Point.h"
#include <iostream>
using namespace Shapes2d;

Point ::Point()
{
    mX = 0.0;
    mY = 0.0;
}
Point::~Point() {}
Point::Point(double x, double y)
{
    mX = x;
    mY = y;
}

double Point::x()
{
    return mX;
}

double Point::y()
{
    return mY;
}
