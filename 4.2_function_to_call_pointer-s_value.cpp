#include <iostream>
using namespace std;

void print_pointer_value(int* number_variable) {
    cout << *number_variable << "\n";
}

int main () {
    int number = 5;
    print_pointer_value(&number);

    return 0;
}
