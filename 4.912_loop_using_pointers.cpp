#include <iostream>
using namespace std;

int main()
{
    int num[5], *ptr;
    cout << "Enter any 5 integers: ";

    for (ptr = &num[0]; ptr <= &num[4]; ++ptr)
    {
        cin >> *ptr;
    }
    cout << "Your numbers are: ";

    for (ptr = num; ptr <= &num[4]; ++ptr)
    {
        cout << *ptr;
        if (*ptr < 4)
            cout << ", ";
        else
            cout << '.';
    }

    return 0;
}