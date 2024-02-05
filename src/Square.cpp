#include <iostream>

#include "../headers/Square.h"

#include <fstream>

using namespace std;

Square ::Square(Point o, double mlength)
{
    mandatory = o;
    this->mlength = mlength;
}
Square ::~Square()
{
}
void Square ::Drawing()
{
    ofstream myfile("../textfile/square.txt");

    myfile << mandatory.x() << " " << mandatory.y() << endl;
    myfile << mandatory.x() + mlength << " " << mandatory.y() << endl;
    myfile << mandatory.x() + mlength << " " << mandatory.y() + mlength << endl;
    myfile << mandatory.x() << " " << mandatory.y() + mlength << endl;
    myfile << mandatory.x() << " " << mandatory.y() << endl;

    myfile.close();
}
