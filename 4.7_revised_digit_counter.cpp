#include <iostream>
using namespace std;

int main() {

    // count digits of a number
    int number;
    cout << "Number: ";
    cin >> number;

    if (number == 0)
        cout << "That's a zero.\n";
    else {
        if (number < 0)
            //number *= -1;
            number = abs(number); // same result as above (it transforms a negative input into a positive one)

        int counter {};
        while (number > 0) {
            number /= 10;
            counter++;
        }
        cout << "There are " << counter << " digits in the number above.\n"; 
    }

    return 0;
}