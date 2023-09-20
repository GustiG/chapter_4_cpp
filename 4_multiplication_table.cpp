#include <iostream>
using namespace std;

int main() {
    // multiplication table up to 10
    int n {};
    cout << "Enter an integer: ";
    cin >> n;

    for (int i = 0; i <= 10; ++i) {
        int result = i*n;
        cout << n << " X " << i << " = "; '\n';
        cout << result << '\n';
    }
    
    return 0;
}