#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string input = "This is a sample sentence.";
    stringstream ss(input);
    vector<string> tokens;

    string token;
    while (ss >> token) {
        tokens.push_back(token);
    }

    cout << "Tokens: ";
    for (const auto& t : tokens) {
        cout << t << " ";
    }

    return 0;
}
