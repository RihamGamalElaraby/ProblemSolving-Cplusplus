#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N; // Read the size of the string
    string S;
    cin >> S; // Read the string

    // Initialize the length of the longest valid subsequence
    int length = 1; // At least the first character will be in the subsequence

    // Iterate through the string to find the maximum length
    for (int i = 1; i < N; ++i) {
        if (S[i] != S[i - 1]) {
            ++length;
        }
    }

    // Output the result
    cout << length << endl;

    return 0;
}
