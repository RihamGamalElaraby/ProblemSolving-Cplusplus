#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Initialize vector and set with the first two Fibonacci numbers
    vector<int> fibs = {0, 1};
    unordered_set<int> fib_set = {0, 1};

    // Generate Fibonacci numbers up to n
    while (true) {
        int next_fib = fibs.back() + fibs[fibs.size() - 2];
        if (next_fib > n) break;  // Stop if the next Fibonacci number exceeds n
        fibs.push_back(next_fib);
        fib_set.insert(next_fib);
    }

    // Find three Fibonacci numbers whose sum is n
    for (int i = 0; i < fibs.size(); ++i) {
        for (int j = 0; j < fibs.size(); ++j) {
            int remaining = n - fibs[i] - fibs[j];
            if (fib_set.count(remaining)) {
                cout << fibs[i] << " " << fibs[j] << " " << remaining << endl;
                return 0;
            }
        }
    }

    // If no combination is found, print the default error message
    cout << "I'm too stupid to solve this problem" << endl;
    return 0;
}
