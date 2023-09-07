#include <iostream>
using namespace std;

int main() {
    // Step 1: Accept a string from the user
    string text;
    cout << "Enter a string: ";
    cin >> text;

    int length = text.length();

    // Step 2: Reverse the string
    for (int i = 0; i < length / 2; ++i) {
        char temp = text[i];
        text[i] = text[length - i - 1];
        text[length - i - 1] = temp;
    }

    // Step 3:
    cout << "Reversed string: " << text << '\n';

    return 0;
}