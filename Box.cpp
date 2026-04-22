#include "Box.h"

// Default constructor
Box::Box() {
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}

// Parameterized constructor
Box::Box(const double newLength, const double newBreadth, const double newHeight) {
    length = newLength;
    breadth = newBreadth;
    height = newHeight;
}

// Destructor
Box::~Box() {}

// Get volume
double Box::GetVolume() {
    return length * breadth * height;
}

// Setters
void Box::SetLength(double len) {
    length = len;
}

void Box::SetBreadth(double bre) {
    breadth = bre;
}

void Box::SetHeight(double hei) {
    height = hei;
}

// Operator overloading (+)
Box Box::operator+(const Box& b) {
    Box box;
    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;
}