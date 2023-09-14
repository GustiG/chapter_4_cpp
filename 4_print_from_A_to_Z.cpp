#include <iostream>
using namespace std;

int main() {
    char c;

    // print letters in uppercase
    for (c = 'A'; c <= 'Z'; ++c)
        cout << c << " ";
    
    cout << '\n';

    // print letters in lowercase
    for (c = 'a'; c <= 'z'; ++c)
        cout << c << " ";

    return 0;
}