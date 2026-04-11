#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() {
    length = 0;
    width = 0;
}

// Overloaded constructor
Rectangle::Rectangle(float l, float w) {
    length = l;
    width = w;
}

// Destructor
Rectangle::~Rectangle() {
    // nothing for now
}

// Setters
void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

// Getters
float Rectangle::getLength() {
    return length;
}

float Rectangle::getWidth() {
    return width;
}

// Area function
float Rectangle::calculateArea() {
    return length * width;
}