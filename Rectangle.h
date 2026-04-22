#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle();                  // Default constructor
    Rectangle(float l, float w);  // Overloaded constructor
    ~Rectangle();                 // Destructor

    void setLength(float l);
    void setWidth(float w);

    float getLength();
    float getWidth();

    float calculateArea();
};

#endif