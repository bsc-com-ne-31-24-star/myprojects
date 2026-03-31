#include <iostream>
using namespace std;

int main()
{
    //the value of x is increasing before the value of x is assigned to y
    //hence the value assigned to y is the value of x after being increases
    int x = 3;
    int y;

    y = ++x;

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}