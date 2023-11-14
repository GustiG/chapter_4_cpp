#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation

    int randomNum = generateRandomNumber(1, 100);
    cout << "Random Number: " << randomNum << endl;

    return 0;
}
