#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

void reverseWords(string& sentence) {
    stack<string> words;
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        words.push(word);
    }

    sentence = "";
    while (!words.empty()) {
        sentence += words.top() + " ";
        words.pop();
    }
}

int main() {
    string sentence = "Hello World C++";
    reverseWords(sentence);

    cout << "Reversed Words: " << sentence << endl;

    return 0;
}
