#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string input = "hello";
    transform(input.begin(), input.end(), input.begin(), ::toupper);

    cout << "Uppercase string: " << input << endl;

    return 0;
}
