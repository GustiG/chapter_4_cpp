#include <iostream>
using namespace std;

bool isRotation(const string& str1, const string& str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    string concatenated = str1 + str1;
    return concatenated.find(str2) != string::npos;
}

int main() {
    string s1 = "abcde";
    string s2 = "deabc";

    if (isRotation(s1, s2)) {
        cout << s2 << " is a rotation of " << s1 << endl;
    } else {
        cout << s2 << " is not a rotation of " << s1 << endl;
    }

    return 0;
}
