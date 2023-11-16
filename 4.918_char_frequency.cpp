#include <iostream>
using namespace std;

int main()
{
    string str = "C++ Programming is awesome";
    char check;
    int count = 0;

    cout << "String = " << str << '\n';
    cout << "Enter a character: ";
    cin >> check;

    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == check)
            ++ count;
    }
    cout << "Number of " << check << " = " << count;

    return 0; 
}