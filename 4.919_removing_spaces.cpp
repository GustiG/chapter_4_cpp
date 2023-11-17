#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string input = "   Remove   spaces   ";
    input.erase(remove_if(input.begin(), input.end(), ::isspace), input.end());

    cout << "String without spaces: " << input << endl;

    return 0;
}
