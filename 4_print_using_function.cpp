#include <iostream>
using namespace std;

void print(int age) {
    cout << "I am " << age << " years old, and what is this?";
}

int main() {
    int age;
    cout << "How old are you? ";
    cin >> age;
    print(age);

    return 0;
}