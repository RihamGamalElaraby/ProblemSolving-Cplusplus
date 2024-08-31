#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        bool containsZero = false;
        bool hasAnotherEvenDigit = false;
        int sum = 0;
        int zeroCount = 0;

        // Iterate over each character in the string
        for (char c : s) {
            int digit = c - '0';
            sum += digit;

            if (digit == 0) {
                containsZero = true;
                zeroCount++;
            } else if (digit % 2 == 0) {
                hasAnotherEvenDigit = true;
            }
        }

        // Conditions to check divisibility by 60
        // 1. At least one '0' should be present
        // 2. At least one other even digit (either another '0' or any even number)
        // 3. The sum of digits should be divisible by 3
        if (containsZero && (hasAnotherEvenDigit || zeroCount > 1) && sum % 3 == 0) {
            cout << "red" << endl;
        } else {
            cout << "cyan" << endl;
        }
    }

    return 0;
}
