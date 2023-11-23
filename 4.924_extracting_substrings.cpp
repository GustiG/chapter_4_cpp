#include <iostream>
using namespace std;

int main() {
    string original = "Programming is fun!";
    string extracted = original.substr(12, 3);

    cout << "Extracted Substring: " << extracted << endl;

    return 0;
}
