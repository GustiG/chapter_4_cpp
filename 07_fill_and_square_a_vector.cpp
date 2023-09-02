#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    cout << "The array: ";
    for (int i = 1; i <= 12; ++i) {
        arr.push_back(i);
        cout << arr[i - 1];
        if (i < 12) { // Check if it's not the last number
            cout << ", ";
        }
    }

    cout << ".\n"; // Print the period and move to a new line after the loop

    cout << "Squared: ";
    for (int i = 0; i < arr.size();  ++i) {
         cout << arr[i] * arr[i];
        if (i < arr.size() - 1)
            cout << ", ";
    }

    cout << ".\n";

    return 0;
}
