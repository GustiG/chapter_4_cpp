#include <iostream>
using namespace std;

int main() {

    int users_pin = 1234;
    int pin {};
    int error_counter {};

    do {
        cout << "Enter your PIN: ";
        cin >> pin;
        if (pin != users_pin)
            error_counter++;

    } while (error_counter < 3 && pin != users_pin);

    if (error_counter < 3)
        cout << "PIN accepted.\n";
    else
        cout << "Card blocked, please contact our customer support at 555-0123-2000\n";

    return 0;
}