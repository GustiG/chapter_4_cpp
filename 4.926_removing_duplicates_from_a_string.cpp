#include <iostream>
#include <unordered_set>
using namespace std;

string removeDuplicates(const string& str) {
    unordered_set<char> seen;
    string result = "";

    for (char ch : str) {
        if (seen.find(ch) == seen.end()) {
            seen.insert(ch);
            result += ch;
        }
    }

    return result;
}

int main() {
    string input = "programming";
    string result = removeDuplicates(input);

    cout << "String after removing duplicates: " << result << endl;

    return 0;
}
