//------------------------------BULLs & COWs----------------------------
#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include <algorithm>
#include <random>
#include <cctype> // For isdigit

using namespace std;

// Function to validate if input is a digit
bool isDigit(const string& input) {
    return !input.empty() && all_of(input.begin(), input.end(), ::isdigit);
}

int main() {
    // Generate a random 4-digit number for the player to guess
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(0, 9);

    vector<int> to_be_guessed;
    for (int i = 0; i < 4; ++i) {
        to_be_guessed.push_back(distrib(gen));
    }

    vector<int> guessing;

    cout << "Welcome to the Bulls & Cows game.\n";
    this_thread::sleep_for(chrono::seconds(1));

    cout << "What is your name?\n";
    string name;
    cin >> name;
    cout << "Hello, " << name << ". Guess my 4-digit number to win.\n";
    this_thread::sleep_for(chrono::seconds(1));
    
    int attempts = 0;

    while (true) {
        cout << "Enter your guess: ";
        string input;
        cin >> input;

        // Check if the user wants to see the solution
        if (input == "solution") {
            cout << "The solution is: ";
            for (int digit : to_be_guessed) {
                cout << digit << " ";
            }
            cout << "\n";
            break;  // End the game after showing the solution
        }

        // Validate input
        if (!isDigit(input) || input.size() != 4) {
            cout << "Invalid input. Please enter a 4-digit number using spaces or type 'solution'.\n";
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue; // Restart the loop
        }

        guessing.clear();

        for (char digit : input) {
            guessing.push_back(digit - '0');
        }

        // Check if the guess is correct
        if (guessing == to_be_guessed) {
            cout << "Congratulations, " << name << "! You guessed the number.\n";
            break;
        } else {
            // Provide feedback (Bulls and Cows)
            int bulls = 0, cows = 0;

            for (int i = 0; i < 4; ++i) {
                if (guessing[i] == to_be_guessed[i]) {
                    bulls++;
                } else if (find(to_be_guessed.begin(), to_be_guessed.end(), guessing[i]) != to_be_guessed.end()) {
                    cows++;
                }
            }

            cout << "Bulls: " << bulls << ", Cows: " << cows << ".\n";
            attempts++;
        }
    }

    cout << "It took you " << attempts << " attempts to guess the number.\n";

    return 0;
}
