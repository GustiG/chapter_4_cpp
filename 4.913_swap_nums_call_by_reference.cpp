#include <iostream>
using namespace std;

void cyclic_swap(int*, int*, int*);

int main()
{
    int a, b, c;

    cout << "Enter values for a, b, c: ";
    cin >> a >> b >> c;

    cout << "Value before sqapping:\n";

    cout << "a = " << a << '\n';
    cout << "b = " << b << '\n';
    cout << "c = " << c << '\n';

    cyclic_swap(&a, &b, &c);

    cout << "Value after sqapping numbers in cycle:\n";
    cout << "a = " << a << '\n';
    cout << "b = " << b << '\n';
    cout << "c = " << c << '\n';

    return 0;
}

void cyclic_swap(int *n1, int *n2, int *n3)
{
    int temp;
    temp = *n2;
    *n2 = *n1;
    *n1 = *n3;
    *n3 = temp;
}