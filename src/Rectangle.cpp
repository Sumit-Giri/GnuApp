#include <iostream>
#include <cmath>
#include <fstream>
#include "../headers/Rectangle.h"
using namespace std;
using namespace Shapes2d;

Rectangle::Rectangle(Point d1, Point d2)
{
    mandatory = d1;
    mDiagonal2 = d2;
}
Rectangle::~Rectangle()
{
}

void Rectangle::Drawing()
{
    ofstream myfile("../textfile/Rectangle.txt");
    if (myfile)
    {
        cout << "file opened" << endl;
    }
    myfile << mandatory.x() << " " << mandatory.y() << endl;
    myfile << mDiagonal2.x() << " " << mandatory.y() << endl;
    myfile << mDiagonal2.x() << " " << mDiagonal2.y() << endl;
    myfile << mandatory.x() << " " << mDiagonal2.y() << endl;
    myfile << mandatory.x() << " " << mandatory.y() << endl;

    myfile.close();
}
