#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    // input dimensions with validation
    do {
        cout << "Enter number of rows (max 3): ";
        cin >> rows;
    } while (rows > 3 || rows <= 0);

    do {
        cout << "Enter number of columns (max 3): ";
        cin >> cols;
    } while (cols > 3 || cols <= 0);

    // dynamically allocate 2D array
    double **array = new double*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new double[cols];
    }

    // assign values using nested loops
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // output values
    cout << "\nArray elements are:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // free memory
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}