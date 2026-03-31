#include <iostream>
using namespace std;

int main()
{
    int numbersArray[5];
    int *pPointer = nullptr;

    //assign the address to the first element to the pointer
    pPointer = numbersArray;

    *pPointer = 10;

    //increment the pointer using pointer arithmetic
    pPointer++;

    *pPointer = 20;

    //assign the address of the third element to the pointer
    pPointer = &numbersArray[2];
    *pPointer = 30;

    /*assign the address of the fourth element to the pointer
    using pointer arithmetic*/
    pPointer = numbersArray + 3;

    *pPointer = 40;

    //assign the address to the first element to the pointer
    pPointer = numbersArray;

    *(pPointer + 4) = 50;

    //iterate and output all the elements in the array
    for (int n = 0; n < 5; n++)
    {
        cout << numbersArray[n] << ", ";
    }

    return 0;
}