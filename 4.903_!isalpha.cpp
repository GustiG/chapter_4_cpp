#include <iostream>

int main()
{
    char c;
    std::cout << "Enter a character: ";
    std::cin >> c;

    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        std::cout << c << " is a letter.\n";
    }
    else
    {
        std::cout << c << " is not a letter.";
    }
    
    return 0;
}