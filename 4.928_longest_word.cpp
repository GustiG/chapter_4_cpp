#include <iostream>
#include <sstream>
using namespace std;

string findLongestWord(const string& sentence) {
    stringstream ss(sentence);
    string word, longestWord;

    while (ss >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }

    return longestWord;
}

int main() {
    string input = "This is a programming challenge";
    string longest = findLongestWord(input);

    cout << "Longest Word: " << longest << endl;

    return 0;
}
