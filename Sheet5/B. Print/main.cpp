#include <iostream>

using namespace std;

// Function to print numbers from 1 to N
void printNumbers(int n) {
    for (int i = 1; i <= n; ++i) {
        if (i > 1) {
            cout << " "; // Print a space before each number except the first one
        }
        cout << i;
    }
    cout << endl; // End the line after printing all numbers
}

int main() {
    int n;
    cin >> n; // Read the input number

    printNumbers(n); // Call the function to print numbers from 1 to N

    return 0;
}
