#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;
using namespace shapes;

int main() {
    int choice;

    do {
        cout << "\n1. Square\n2. Triangle\n3. Circle\n4. Quit\n";
        cout << "Choose option: ";
        cin >> choice;

        if (choice == 1) {
            float s;
            cout << "Enter side: ";
            cin >> s;

            Square sq(s);
            cout << "Area: " << Area::squareArea(sq) << endl;
        }
        else if (choice == 2) {
            float b, h;
            cout << "Enter base: ";
            cin >> b;
            cout << "Enter height: ";
            cin >> h;

            Triangle t(b, h);
            cout << "Area: " << Area::triangleArea(t) << endl;
        }
        else if (choice == 3) {
            float r;
            cout << "Enter radius: ";
            cin >> r;

            Circle c(r);
            cout << "Area: " << Area::circleArea(c) << endl;
        }

    } while (choice != 4);

    return 0;
}