#include <iostream>
#include <algorithm> // For std::swap

using namespace std;

// Function to perform Bubble Sort
void bubbleSort(string &s) {
    int n = s.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (s[j] > s[j + 1]) {
                // Swap if the element found is greater than the next element
                swap(s[j], s[j + 1]);
            }
        }
    }
}

int main() {
    int N;
    string S;

    // Read input
    cin >> N;
    cin >> S;

    // Check if the size of the string matches N
    if (S.size() != static_cast<size_t>(N)) {
        cerr << "Error: The length of the string does not match the provided size." << endl;
        return 1;
    }

    // Sort the string
    bubbleSort(S);

    // Output the sorted string
    cout << S << endl;

    return 0;
}
