#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename;
    std::cout << "Enter the filename: ";
    std::cin >> filename;

    std::ifstream inputFile(filename);
    
    if (!inputFile) {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    std::string searchWord;
    std::cout << "Enter the word to search for: ";
    std::cin >> searchWord;

    std::string line;
    int lineCount = 0;
    bool wordFound = false;

    while (std::getline(inputFile, line)) {
        lineCount++;
        
        size_t pos = line.find(searchWord);
        if (pos != std::string::npos) {
            std::cout << "Word found at line " << lineCount << ", position " << pos + 1 << std::endl;
            wordFound = true;
        }
    }

    inputFile.close();

    if (!wordFound) {
        std::cout << "Word not found in the file." << std::endl;
    }

    return 0;
}
