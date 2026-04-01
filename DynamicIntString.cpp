#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cout << "How many numbers would you like to type? ";
    cin >> n;

    // dynamically allocate integers
    int *numbers = new int[n];

    // input numbers
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> numbers[i];
    }

    int m;

    cout << "How many strings would you like to enter? ";
    cin >> m;

    // dynamically allocate array of strings
    string *texts = new string[m];

    cin.ignore(); // clear buffer

    // input strings
    for (int i = 0; i < m; i++)
    {
        cout << "Enter string: ";
        getline(cin, texts[i]);
    }

    // output integers
    cout << "You have entered numbers: ";
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }

    // output strings
    cout << "\nYou have entered strings: ";
    for (int i = 0; i < m; i++)
    {
        cout << texts[i] << " ";
    }

    // free memory
    delete[] numbers;
    delete[] texts;

    return 0;
}