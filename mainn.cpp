#include <iostream>
#include "polygon.h"
#include "Rectanglee.h"
#include "Trianglee.h"

using namespace std; 

int main() {
        Rectanglee rect;
        Trianglee trgl;
        rect.SetValues (4,5);
        trgl.SetValues (4,5);
        cout << rect.Area() << '\n';
        cout << trgl.Area() << '\n';
        return 0;
    };

