#include <iostream>

int main()
{
    char c;
    std::cout << "Enter a character: ";
    std::cin >> c;

    if (isalpha(c))
    {
        std::cout << c << " is a letter.\n";
    } 
    else 
    {
        std::cout << c << " is not a letter.\n";
    }

    return 0;
}