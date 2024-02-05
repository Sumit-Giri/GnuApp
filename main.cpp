#include <iostream>
#include "headers/Triangle.h"
#include "headers/Rectangle.h"
#include "headers/Line.h"
#include "headers/Circle.h"
#include "headers/Ellipse.h"
#include "headers/Square.h"

using namespace std;
using namespace Shapes2d;

int main()
{

    while (1)
    {
        cout << "WELCOME" << endl;
        cout << "1.Rectangle " << endl
             << "2.Circle " << endl
             << "3.Triangle " << endl
             << "4.Ellipse " << endl
             << "5.Line " << endl
             << "6.square" << endl
             << "7.to Exit" << endl;

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Rectangle" << endl;

            double x1;
            double y1;
            double x2;
            double y2;

            cout << "Input all 4 coordinates of diagnonal1 and diagonal2 " << endl;
            cin >> x1 >> y1 >> x2 >> y2;

            Point d1(x1, y1);
            Point d2(x2, y2);

            Rectangle r1(d1, d2);
            r1.Drawing();

            break;
        }
        case 2:
        {

            cout << "Circle" << endl;
            double x1;
            double y1;
            double radius;

            cout << "Input coordinates of centre and length of radius " << endl;

            cin >> x1 >> y1 >> radius;

            Point d1(x1, y1);

            Circle c1(d1, radius);

            c1.Drawing();
            break;
        }

      
        case 3:
        {
            cout << "Triangle" << endl;

            double x1;
            double y1;
            double x2;
            double y2;
            double x3;
            double y3;

            cout << "input all 6 coordinates of Triangle" << endl;

            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

            Point d1(x1, y1);
            Point d2(x2, y2);
            Point d3(x3, y3);

            Triangle t1(d1, d2, d3);
            t1.Drawing();

            break;
        }
        case 4:
        {
            cout << " Ellipse " << endl;
            double x1;
            double y1;
            double x2;
            double y2;
            double x3;
            double y3;
            cout << " input all 6 coordinates of Ellipse including coordinates of Majoraxis and Minoraxis " << endl;
            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

            Point d1(x1, y1);
            Point d2(x2, y2);
            Point d3(x3, y3);

            Ellipse e1(d1, d2, d3);

            e1.Drawing();

            cout << endl;

            break;
        }
        case 5:
        {
            cout << "Line" << endl;
            double x1;
            double y1;
            double x2;
            double y2;

            cout << "input all 4 coordinates of Line" << endl;

            cin >> x1 >> y1 >> x2 >> y2;

            Point d1(x1, y1);
            Point d2(x2, y2);

            Line l1(d1, d2);

            l1.Drawing();

            cout << endl;

            break;
        }
        case 6:
        {
            cout << " Square " << endl;

            double x1;
            double y1;

            double mlength;

            cout << "Input coordinates of centre and length of square " << endl;

            cin >> x1 >> y1 >> mlength;

            Point d1(x1, y1);

            Square s1(d1, mlength);

            s1.Drawing();

            cout << endl;

            break;
        }
        case 7:
        {
            cout << "Bye" << endl;
            break;
        }
        default:
        {
            cout << "Invalid Input....." << endl;
            break;
        }
        }
    }
}
