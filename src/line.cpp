#include <iostream>
#include "../headers/Line.h"
#include <cmath>

#include <fstream>

using namespace std;

Line::Line(Point d1, Point d2)
{
    mandatory = d1;
    this->d2 = d2;
}
Line ::~Line()
{
}
void Line ::Drawing()
{
    ofstream myFile("../textfile/line.txt");

    myFile << mandatory.x() << " " << mandatory.y() << endl;
    myFile << d2.x() << " " << d2.y() << endl;

    myFile.close();
}
