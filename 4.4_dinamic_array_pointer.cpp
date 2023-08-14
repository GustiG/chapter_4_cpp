#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Size of the array: ";
    cin >> size;

    int *the_array = new int[size]; // pointer = 'new' needed to allocate dinamic memory for the array's size

    for (int i = 0; i < size; i++) {
        cout << "Array[" << i << "]: ";
        cin >> the_array[i];        // add elements to the array starting from array[0] to array[size]
    }

    for (int i = 0; i < size; i++) {
        cout << the_array[i] << " "; // dereferencing the array could also be: << *(the_array+i) << " ";
    }

    delete[] the_array;     // brackets needed because they were used with 'new'
    the_array = nullptr;    // won't point to any memory address

    return 0;
}