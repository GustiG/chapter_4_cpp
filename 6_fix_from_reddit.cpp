#include <iostream>
#include <limits> // Include the <limits> header
using namespace std;

int main() {
    char digit; // Declare a character variable to store the input digit

    cout << "Enter a digit: ";

    while (!(cin >> digit) || !isdigit(digit)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter a valid digit: ";
    }

    cout << "Digit entered: " << digit << endl;

    return 0;
}
