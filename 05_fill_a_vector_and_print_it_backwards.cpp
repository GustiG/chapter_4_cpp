#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    for (int i = 1; i <= 25; i++) {
        nums.push_back(i);
        cout << nums[i - 1];
        if (i < 25)     // nums.size() wont give the desired effect of printing a line separated by a comma.
            cout << ", ";
    }
    cout << ".\n"; 

    for (int j = nums.size() - 1; j > 0; j--) {
        cout << nums[j] << ", ";
    }
    cout << nums[0] << ".\n";

    return 0;
}
