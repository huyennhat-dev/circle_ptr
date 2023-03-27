#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    Circle myCircle(r);

    cout << "Area: " << myCircle.getArea() << endl;
    cout << "Diameter: " << myCircle.getDiameter() << endl;
    cout << "Circumference: " << myCircle.getCircumference() << endl;

    return 0;
}
