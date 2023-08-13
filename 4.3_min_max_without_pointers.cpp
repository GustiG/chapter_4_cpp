#include <iostream>
using namespace std;

int getMin(int numbers[], int size) {
    int min = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] < min)
            min = numbers[i];
    }
    return min;
}

int getMax(int numbers[], int size) { 
    int max = numbers[0];
    for (int i = 1; i < size; i++) {  // start with i = 1, because we already have 'max' set to [0]
        if (numbers[i] > max)
            max = numbers[i];
    }
    return max;
}

int main() 
{
    int numbers[5] = {5, 4, -2, 29, 6};
    cout << "Min is " << getMin(numbers, 5) << "\n";
    cout << "Max is " << getMax(numbers, 5);

    return 0;
}
