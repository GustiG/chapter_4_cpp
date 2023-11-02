#include <iostream>
using namespace std;

int main()
{
    int i {};
    double arr[5];

    cout << "Enter five numbers:\n";
    for (i = 0; i < 5; ++i)
    {
        cin >> arr[i];
    }
    for (i = 0; i < 5; ++i)
    {
        if  (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    cout << "Largest element: " << arr[0] << '\n';

    return 0;
}   