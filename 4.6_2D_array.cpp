#include <iostream>
using namespace std;

int main() {
    int data[3][2] = {
        {2, 4},
        {3, 6},
        {4, 8}
    };

    for(int row = 0; row < 3; ++row) {
        for(int col = 0; col < 2; ++col) {
            cout << data[row][col] << " ";
        }
    }

    return 0;
}