#include <iostream>
using namespace std;

int main() {
    int n, reverse = 0, remainder;
    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0) {
        remainder = n % 10;                     // get the last digit of the number
        reverse = (reverse * 10) + remainder;   // make a new number starting the last digit
        n /= 10;                                // update the original number so it misses the last digit
    }

    cout << "Reversed Number: " << reverse << '\n';

    return 0;
}
