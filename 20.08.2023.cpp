#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> arr;
	vector <int> primes;

	cout << "Max range of the array: ";
	int max = 0;
	cin >> max;
	for (int i = 0; i < max; i++)
		arr.push_back(i);
    cout << "Your array ranges from 0 to " << max << '\n';

    for (int i = 0; i < arr.size(); ++i) {
        bool is_prime = true;
        for (int j = 2; j*j <= i; j++) {
            if (i % j == 0)
                is_prime = false;
        }
        if (is_prime)
            primes.push_back(i);
    }

    int how_many;
    cout << "How many prime numbers from your range do you want to display?\n";
    cin >> how_many;

    if (how_many > primes.size()) {
        cout << "There aren't that many prime numbers in your array.\n";
        cout << "All the prime numbers here are: ";
        for (int i = 2; i < primes.size(); ++i) {
            cout << primes[i];
            if (i < primes.size() -1)
                cout << ", ";
            else
                cout << ".\n";
        }
   }  else {
        for (int i = 2; i <= how_many+1; ++i) {
            cout << primes[i];
            if (i < primes.size() -1)
                cout << ", ";
            else
                cout << ".\n";
        }
    }

	return 0;
}
