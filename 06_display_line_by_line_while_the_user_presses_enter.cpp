#include <iostream>
#include <string>
#include <cstdlib>  // For using the system("pause") function

int main() {
    std::string input;

    while (true) {
        std::cout << "Press Enter to display the next line (or type 'exit' to quit): ";
        std::getline(std::cin, input);

        if (input == "exit") {
            break;
        }

        // Print a line
        std::cout << "This is the next line." << std::endl;
    }

    return 0;
}
