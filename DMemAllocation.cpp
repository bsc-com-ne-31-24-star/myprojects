#include <iostream>
using namespace std;

int main() {
    int *ptr = nullptr;       // pointer to store address

    // dynamically allocate memory for a single integer
    ptr = new int;

    // assign a value
    *ptr = 100;

    // display the value
    cout << "Value stored: " << *ptr << endl;

    // free the allocated memory
    delete ptr;

    return 0;
}