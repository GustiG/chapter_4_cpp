#include <iostream>
using namespace std;

int main() {

    // reverse a number
    int number, reversed_number {};
    cout << "Number: ";
    cin >> number;

    while (number > 0) {
        reversed_number *= 10;
        int last_digit = number % 10;
        reversed_number += last_digit;
        // reversed_number += number % 10 <- a shorter version without "last digit" variable
        number /= 10;
    }
    cout << "Reversed: " << reversed_number;

    return 0;
}