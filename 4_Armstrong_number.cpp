#include <iostream>
using namespace std;

// in the case of an Armstrong number of 3 digits, the sum of cubes of each digit is equal to the number itself
// ex: 153 = 1*1*1 + 5*5*5 + 3*3*3

int main() {
    int num, temp, remainder, result = 0;

    cout << "Enter a three-digit integer: ";
    cin >> num;

    temp = num;

    while (temp != 0) {
        // remainder contains the last digit
        remainder = temp % 10;

        // sum of cubes of each digit
        result += remainder * remainder * remainder;

        // remove last digit from temp
        temp /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}