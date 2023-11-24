#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

int main() {
    string input = "Hello";
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(input.begin(), input.end());

    cout << "Shuffled String: " << input << endl;

    return 0;
}
