#include <iostream>
#include <cmath>
using namespace std;

long long convert(int);

int main() {
    int n {};
    int binary;
    cout << "Enter an integer: ";
    cin >> n;
    binary = convert(n);
    cout << n << " in binary is: " << binary << '\n';
    return 0;
}

long long convert(int n) {
    long long binary {};
    int rem;
    int i = 1;

    while (n!=0) {
        rem = n % 2;
        n /= 2;
        binary += rem * i;
        i *= 10;
    }
    return binary;
}