#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    std::string filename;
    std::cout << "Enter the filename: ";
    std::cin >> filename;

    std::ifstream inputFile(filename);
    
    if (!inputFile) {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    std::string line;
    int wordCount = 0;

    while (std::getline(inputFile, line)) {
        std::stringstream ss(line);
        std::string word;
        
        while (ss >> word) {
            wordCount++;
        }
    }

    inputFile.close();

    std::cout << "Total words: " << wordCount << std::endl;

    return 0;
}

