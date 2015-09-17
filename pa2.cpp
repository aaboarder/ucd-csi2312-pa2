////
//  Andrew Agenbroad 102357365
//


#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

double computeArea(Point &, Point &, Point &) ;     //computeArea functuion prototype

int main(void) {
    double x;       //variables for the user input
    double y;
    double z;


    cout << "This program calculates the area of a 3D triangle based off of points input by the user" << endl;
    cout << "Input the x coordinate of the first point in the form 0.0" << endl;
    cin >> x;
    cout << "Input the y coordinate of the first point in the form 0.0" << endl;
    cin >> y;
    cout << "Input the z coordinate of the first point in the form 0.0" << endl;
    cin >> z;
    Point p1(x, y, z);      //Creates a new point based off of the user's input of the x, y and z values
    x, y, x = 0;            //Sets the variables to zero so they can be resued in future input

    cout << "Input the x coordinate of the second point in the form 0.0" << endl;
    cin >> x;
    cout << "Input the y coordinate of the second point in the form 0.0" << endl;
    cin >> y;
    cout << "Input the z coordinate of the second point in the form 0.0" << endl;
    cin >> z;
    Point p2(x, y, z);
    x, y, z = 0;

    cout << "Input the x coordinate of the third point in the form 0.0" << endl;
    cin >> x;
    cout << "Input the y coordinate of the third point in the form 0.0" << endl;
    cin >> y;
    cout << "Input the z coordinate of the third point in the form 0.0" << endl;
    cin >> z;
    Point p3(x, y, z);

    double area;        //varaible holding the return value of computeArea
    area = computeArea(p1, p2, p3);
    cout << "The area is: " << area << endl;\



    return 0;
}



double computeArea(Point &a, Point &b, Point &c) {      //computes the area of the points provided

    double x;
    x = a.distanceTo(b);
    double y;
    y = a.distanceTo(c);
    double z;
    z = b.distanceTo(c);

    double s;
    s = (x + y + z) / 2;      //calculates the s component of heron's theorum

    double area1;

    area1 = sqrt(s * (s - x) * (s - y) * (s - z));      //heron's theorum calculatoins

    return area1;
}

