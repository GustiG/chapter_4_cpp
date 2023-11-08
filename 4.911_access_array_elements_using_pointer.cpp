#include <iostream>
using namespace std;

int main()
{
    int data[5];
    cout << "Enter five digits:\n";

    for (int i = 0; i < 5; ++i)
        cin >> data[i];
    
    cout << "Your array is: ";

    for (int i = 0; i < 5; ++i)
    {    
        cout << *(data + i);
        
        if (i < 4)  // Add comma for all elements except the last one
            cout << ", ";
        else       // Add dot for the last element
            cout << ".";
    }

    return 0;
}
