#include <iostream>
#include <cmath>
using namespace std;

double calculate_sd(double data[]);

int main()
{
    int i {};
    double data[10];
    cout << "Enter 10 elements:\n";

    for (i = 0; i < 10; ++i)
    {
        cin >> data[i];
    }
    cout << "Standard Deviation = " << calculate_sd(data);

    return 0;
}

double calculate_sd(double data[])
{
    double sum = 0.0, mean, sd = 0.0;
    int i {};

    for (i = 0; i < 10 ; ++i)
    {
        sum += data[i];
    }
    mean = sum / 10;

    for (i = 0; i < 10; ++i)
    {
        sd += pow(data[i] - mean, 2);
    }
    return sqrt(sd / 10);
}