#include <iostream>
using namespace std;

void print_pointer_value(void* pointer, char type) {
    switch (type) {
        case 'i': cout << *static_cast<int*>(pointer); // Cast the pointer before dereferencing
                  break;
        case 'c': cout << *static_cast<char*>(pointer);
                  break;
    }
}

int main () {
    int number = 5;
    char letter = 'a';
    print_pointer_value(&number, 'i');
    print_pointer_value(&letter, 'c');

    return 0;
}
