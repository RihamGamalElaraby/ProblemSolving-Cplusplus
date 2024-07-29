#include <iostream>
using namespace std;

int main() {
    int y, k, n;
    cin >> y >> k >> n;

    bool found = false;

    // Calculate the first x that makes (x + y) divisible by k
    int start = ((y / k) + 1) * k - y;
    if (start <= 0) {
        start += k;
    }

    // Output all valid x values
    for (int x = start; x <= n - y; x += k) {
        cout << x << " ";
        found = true;
    }

    if (!found) {
        cout << "-1" << endl;
    }

    return 0;
}
