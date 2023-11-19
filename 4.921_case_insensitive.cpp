#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

bool caseInsensitiveCompare(const string& str1, const string& str2) {
    return equal(str1.begin(), str1.end(), str2.begin(), str2.end(),
                  [](char c1, char c2) { return tolower(c1) == tolower(c2); });
}

int main() {
    string str1 = "Hello";
    string str2 = "hElLo";

    if (caseInsensitiveCompare(str1, str2)) {
        cout << "Strings are equal (case-insensitive)." << endl;
    } else {
        cout << "Strings are not equal (case-insensitive)." << endl;
    }

    return 0;
}
