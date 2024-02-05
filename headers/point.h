
#pragma once
namespace Shapes2d
{
    // use inheritance
    class Point
    {

    public:
        Point();
        Point(double x, double y);
        ~Point();

        double x();
        double y();

    private:
        double mX;
        double mY;
    };
}