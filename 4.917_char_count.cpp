#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string input = "programming";
    unordered_map<char, int> charCount;

    for (char ch : input) {
        charCount[ch]++;
    }

    cout << "Character counts:" << endl;
    for (const auto& pair : charCount) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
