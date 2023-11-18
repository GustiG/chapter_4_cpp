#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    string numStr = "123";
    int num = atoi(numStr.c_str());

    cout << "Converted Integer: " << num << endl;

    return 0;
}
