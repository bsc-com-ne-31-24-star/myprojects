#include <iostream>
#include "Box.h"
using namespace std;

int main() {
    Box box1(2.0, 3.0, 4.0);
    Box box2(1.0, 2.0, 3.0);

    Box box3 = box1 + box2;

    cout << "Volume of Box1: " << box1.GetVolume() << endl;
    cout << "Volume of Box2: " << box2.GetVolume() << endl;
    cout << "Volume of Box3: " << box3.GetVolume() << endl;

    return 0;
}