#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle rect1;

    float l, w;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter width: ";
    cin >> w;

    rect1.setLength(l);
    rect1.setWidth(w);

    cout << "Area of rectangle 1: " << rect1.calculateArea() << endl;

    // Second rectangle using overloaded constructor
    float l2, w2;

    cout << "\nEnter length for rectangle 2: ";
    cin >> l2;

    cout << "Enter width for rectangle 2: ";
    cin >> w2;

    Rectangle rect2(l2, w2);

    cout << "Area of rectangle 2: " << rect2.calculateArea() << endl;

    return 0;
}