#include <iostream>
#include <cmath>
using namespace std;

// function declaration
int convert(long long);

int main() {
    long long n;
    cout << "Enter a binary number: ";
    cin >> n;
    cout << n << " binary is " << convert(n) << " decimal." << '\n';
    return 0;
}

// function definition
int convert(long long n) {
    int decimal {};
    int i {};
    int rem {};

    while(n!=0) {
        rem = n % 10;
         n /= 10;
         decimal += rem * pow(2, i);
    }
    return decimal;
}
