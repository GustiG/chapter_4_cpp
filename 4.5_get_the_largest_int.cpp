#include <iostream>
using namespace std;

int main() {
    int arr[] = { 22, 33, 11, 44, 55 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];

    cout << "Array: ";
    for (int i =  0; i < size; ++i) {
        cout << arr[i];
        if (i < size - 1)
            cout << ", ";
        else    
            cout << ".\n";
    }

    cout << "Largest: ";
    for (int i = 0; i < size; ++i) {
        if (largest < arr[i])
            largest = arr[i];
    }
    cout << largest;

    return 0;
}