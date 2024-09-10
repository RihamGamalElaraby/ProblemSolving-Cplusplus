#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> colors(n + 2, 0); // Adjusted size to n+2
    int colorCount = 0;

    // Step 1: Identify and color primes
    for (int i = 2; i <= n + 1; i++) {
        if (colors[i] == 0) { // i is a prime number
            colorCount++;
            colors[i] = colorCount;
            // Step 2: Color multiples of this prime
            for (int j = i * 2; j <= n + 1; j += i) {
                if (colors[j] == 0) {
                    colors[j] = colorCount;
                }
            }
        }
    }

    // Output the number of colors used
    cout << colorCount << endl;
    // Output the color assigned to each jewelry piece
    for (int i = 2; i <= n + 1; i++) {
        cout << colors[i] << " ";
    }
    cout << endl;

    return 0;
}
