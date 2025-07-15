#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main() {
    cout << "Enter numbers to add (space-separated): ";

    string line;
    getline(cin, line);   // read full input line

    stringstream ss(line);
    vector<int> nums;
    int num;

    while (ss >> num) {
        nums.push_back(num);
    }

    int sum = 0;
    for (int x : nums) {
        sum += x;
    }

    cout << "Sum = " << sum << "\n";
    return 0;
}
