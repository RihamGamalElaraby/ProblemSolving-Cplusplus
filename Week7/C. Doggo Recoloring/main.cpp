#include <iostream>
#include <vector>
#include <string>
using namespace std;

string can_standardize_puppies(int n, const string& s) {
    if (n == 1) {
        return "Yes";
    }

    vector<int> freq(26, 0);  // Step 1: Initialize frequency array

    // Step 2: Populate the frequency array
    for (char ch : s) {
        freq[ch - 'a']++;
    }

    // Step 3: Analyze the frequency array
    for (int count : freq) {
        if (count >= 2) {
            return "Yes";
        }
    }

    return "No";
}

int main() {
    int n;
    string s;

    cin >> n >> s;
    cout << can_standardize_puppies(n, s) << endl;

    return 0;
}
