#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<string> v_names;
	vector<int> v_scores;
	string name;
	int score;

	cout << "Enter the name and score below:\n";
	while (cin >> name >> score) {
		if (name == "noname" && score == 0)
			break;
		if (find(v_names.begin(), v_names.end(), name) !=v_names.end()) {
			cout << "Name already exists.\n";
			continue;
		}
		v_names.push_back(name);
		v_scores.push_back(score);
	}
	cout << "Name & score:\n";

	for (int i = 0; i < v_names.size(); ++i) {
		cout << v_names[i] << " : " << v_scores[i] << '\n'; 
	}

	cout << "Search for 'name' or 'score':\n";
	string find_name;
	int find_score;
		string answer;
	char quit = 'q';

	while (cin >> answer) {
		if (answer == "name") {
			cout << "Please enter the name: ";
			bool found = false;
			cin >> find_name;
			for (int i = 0; i < v_names.size(); ++i) {
				if (find_name == v_names[i]) {
					found = true;
					cout << find_name << " : " << v_scores[i]  << '\n';
				}  
			}
			if (!found)
				cout << "Name not found.\n";

		}  
		if (answer == "score") {
			cout << "Please enter the score: ";
			cin >> find_score;
			bool found = false;
			for (int i = 0; i < v_scores.size(); ++i) {
				if (find_score == v_scores[i]) {
					cout << v_names[i] << " : " << find_score << '\n';
					found = true;
				}  

			} if (!found)	
					cout << "Score not found.\n";
		} 
	}
	
	return 0;
}
