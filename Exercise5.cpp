#include <iostream>
using namespace std;

double triangle(double b, double h) {
    return 0.5 * b * h;
}

double rectangle(double l, double w) {
    return l * w;
}

double square(double s) {
    return s * s;
}

int main() {
    int choice;

    do {
        cout << "\n1.Triangle 2.Rectangle 3.Square 4.Quit\n";
        cin >> choice;

        if (choice == 1) {
            double b, h;
            cout << "Enter base and height: ";
            cin >> b >> h;
            cout << "Area = " << triangle(b, h) << endl;
        }
        else if (choice == 2) {
            double l, w;
            cout << "Enter length and width: ";
            cin >> l >> w;
            cout << "Area = " << rectangle(l, w) << endl;
        }
        else if (choice == 3) {
            double s;
            cout << "Enter side: ";
            cin >> s;
            cout << "Area = " << square(s) << endl;
        }
        else if (choice != 4) {
            cout << "Invalid choice\n";
        }

    } while (choice != 4);

    return 0;
}