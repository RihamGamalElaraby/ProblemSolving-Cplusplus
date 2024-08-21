#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    int n = S.size();
    if (n == 1) {
        // If string length is 1, we cannot split it, so print the original string
        cout << S << endl;
        return 0;
    }

    string smallest = S;

    // Iterate over all possible split points
    for (int i = 1; i < n; ++i) {
        string X = S.substr(0, i); // First part
        string Y = S.substr(i);    // Second part

        // Sort both parts
        sort(X.begin(), X.end());
        sort(Y.begin(), Y.end());

        // Concatenate the sorted parts
        string sorted_S = X + Y;

        // Update the smallest string if we found a new smallest one
        if (sorted_S < smallest) {
            smallest = sorted_S;
        }
    }

    // Output the smallest string
    cout << smallest << endl;

    return 0;
}
