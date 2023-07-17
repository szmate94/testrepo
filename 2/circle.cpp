// member initialization

#include <iostream>
using namespace std;

class Circle
{
    double radius;

  public:
    Circle(double r) : radius(r)
    {
    }
    double area()
    {
        return radius * radius * 3.14159265;
    }
};
