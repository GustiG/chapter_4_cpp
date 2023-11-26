#include <iostream>
using namespace std;

string encryptCaesarCipher(const string& plaintext, int shift) {
    string ciphertext = "";

    for (char ch : plaintext) {
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            ciphertext += static_cast<char>((ch - base + shift) % 26 + base);
        } else {
            ciphertext += ch;
        }
    }

    return ciphertext;
}

int main() {
    string message = "Hello, World!";
    int shift = 3;
    string encryptedMessage = encryptCaesarCipher(message, shift);

    cout << "Encrypted Message: " << encryptedMessage << endl;

    return 0;
}
