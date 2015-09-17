// A 3-dimensional point class!
// Coordinates are double-precision floating point

#ifndef PA2_POINT_CPP_H
#define PA2_POINT_CPP_H

class Point {

private:
    double x;
    double y;
    double z;       //new private member z (third point)
public:
    // Constructors
    Point();                      // default constructor
    Point(double x, double y, double z);    // three argument constructor updated from the original two argument

    // Destructor
    ~Point();

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);         //prototype for new mutator method for point z

    // Accessor methods
    double getX();
    double getY();
    double getZ();                  //prototype for new accessor method for point z

    double distanceTo(Point &);   //new function to find the distance between two points
};

#endif //PA2_POINT_CPP_H
