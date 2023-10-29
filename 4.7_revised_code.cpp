#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>  // for numeric_limits
#include <ios>     // for streamsize
using namespace std;

int main() {
    vector<string> v_names {};
    vector<int> v_scores {};
    string name;
    int score;

    cout << "Enter a name and a score:" << '\n';
    while (cin >> name) {
        // Validate if the input is a string or 'noname' to break the loop
        if (name == "noname") {
            cin >> score;
            if (cin.fail()) {
                cerr << "Invalid input. Exiting program.\n";
                return 1;
            }
            if (score == 0)
                break;
            else {
                cerr << "Invalid input. Exiting program.\n";
                return 1;
            }
        }

        cin >> score;
        if (cin.fail()) {
            cerr << "Invalid input. Exiting program.\n";
            return 1;
        }

        if (find(v_names.begin(), v_names.end(), name) != v_names.end()) {
            cout << name << " already in the list." << '\n';
            continue;
        }

        v_names.push_back(name);
        v_scores.push_back(score);
    }

    cout << "Name & score:" << '\n'; 
    for (int i = 0; i < v_names.size(); ++i) {
        cout << v_names[i] << " : " << v_scores[i] << '\n';
    }

    cout << "Search for 'name' or 'score'? type 'q' to quit.\n";
    string answer;
    string find_name;
    int find_score;
    bool found = false;

    while (cin >> answer) {
        found = false;
        if(answer == "q")
            break;
        
        if(answer == "name") {
            cout << "Please enter a name: ";
            cin >> find_name;
            if (cin.fail()) {
                cerr << "Invalid input. Exiting program.\n";
                return 1;
            }
            for (int i = 0; i < v_names.size(); i++) {
                if(find_name == v_names[i]) {
                    found = true;
                    cout << v_names[i] << " : " << v_scores[i] << '\n';
                }
            }
            if(!found)
                cout << find_name << " not found.\n";
        }

        if(answer == "score") {
            cout << "Please enter a score: ";
            while (!(cin >> find_score)) {
                cerr << "Invalid input. Please enter an integer for the score: ";
                cin.clear();             // clear input buffer to restore cin to a usable state
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  // ignore last input
            }

            for (int j = 0; j < v_scores.size(); j++) {
                if(find_score == v_scores[j]) {
                    found = true;
                    cout << v_names[j] << " : " << v_scores[j] << '\n';
                }    
            }
            if(!found)
                cout << find_score << " not found.\n";
        }

        cout << "Search for 'name' or 'score'? type 'q' to quit.\n";
    }

    return 0;
}
