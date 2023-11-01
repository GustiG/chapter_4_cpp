#include <iostream>
using namespace std;

int main()
{
    int n, i;
    double num[100], sum = 0.0, average;

    cout << "Enter a range from 1 to 100: ";
    cin >> n;

    while (n > 100 || n < 1)
    {
        cout << "Range not between 1 and 100.\n";
        cout << "Enter the range again: ";
        cin >> n;
    }
    for (i = 0; i < n; ++i)
    {
        cout << i + 1 << "). Enter the numbers in your range:\n";
        cin >> num[i];
        sum += num[i];
    }
    average = sum / n;
    cout << "Average = " << average << '\n';

    return 0;
}