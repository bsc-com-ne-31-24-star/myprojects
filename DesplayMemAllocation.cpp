#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = nullptr;       // pointer to store array address

    // dynamically allocate memory for array
    arr = new int[n];

    // input values from user
    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }

    // display the array
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // free allocated memory
    delete[] arr;

    return 0;
}