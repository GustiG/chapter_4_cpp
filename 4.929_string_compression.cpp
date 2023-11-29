#include <iostream>
using namespace std;

string compressString(const string& str) {
    string compressed = "";
    char currentChar = str[0];
    int count = 1;

    for (size_t i = 1; i < str.length(); ++i) {
        if (str[i] == currentChar) {
            ++count;
        } else {
            compressed += currentChar + to_string(count);
            currentChar = str[i];
            count = 1;
        }
    }

    compressed += currentChar + to_string(count);

    return compressed.length() < str.length() ? compressed : str;
}

int main() {
    string input = "aabcccccaaa";
    string compressed = compressString(input);

    cout << "Compressed String: " << compressed << endl;

    return 0;
}
