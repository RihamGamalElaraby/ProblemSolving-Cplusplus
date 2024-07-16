#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    string s;

    // Input the length of the string
    cin >> n;

    // Input the string itself
    cin >> s;

    int count_0 = 0, count_1 = 0;

    // Count the number of 0s and 1s in the string
    for (char c : s) {
        if (c == '0') count_0++;
        else if (c == '1') count_1++;
    }

    // The minimum length of the remaining string
    int result = abs(count_0 - count_1);

    // Output the result
    cout << result << endl;

    return 0;
}
