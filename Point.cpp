//
// Created by Andrew Agenbroad on 9/16/2015.
//

#include "Point.h"
#include <cmath>

// Default constructor
// Initializes the point to (0.0, 0.0)
Point::Point() {
    x = 0.0;
    y = 0.0;
    z = 0.0;        //new variable z is added
}

// Constructor
// Initializes the point to (initX, initY)
Point::Point(double initX, double initY, double initZ) {
    x = initX;
    y = initY;
    z = initZ;      //new constructor variable for the new point z
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point() {
    // no-op
}

// Mutator methods
// Change the values of private member variables

void Point::setX(double newX) {
    x = newX;
}

void Point::setY(double newY) {
    y = newY;
}

void Point::setZ(double newZ) {     //new mutator to access new point z
    z = newZ;
}
// Accessors
// Return the current values of private member variables

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}

double Point::getZ() {      //new accessor to access the new point
    return z;
}

double Point::distanceTo(Point &b) {      //function to calculate the distance between two points (a and b)
    double n = this->getX();        //This block of code assigns the x, y and z values to variables for calculating
    double m = this->getY();
    double o = this->getZ();

    double n1 = b.getX();
    double m1 = b.getY();
    double o1 = b.getZ();

    double n2;                  //Variables are created to store the differences between coordinates
    double n3;
    double n4;

    n2 = n1 - n;     //difference calculations for the distance formula below
    n3 = m1 - m;
    n4 = o1 - o;


    double c;

    c = sqrt(pow(n2, 2) + pow(n3, 2) + pow(n4, 2));     //distance formula calculations


    return c;
}
