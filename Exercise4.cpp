#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter number between 5 and 10: ";
    cin >> number;

    while (number < 5 || number > 10) {
        cout << "Invalid. Enter again: ";
        cin >> number;
    }

    cout << "Accepted: " << number << endl;

    return 0;
}