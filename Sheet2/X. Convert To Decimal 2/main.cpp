#include <iostream>
#include <string>

using namespace std;

string decimalToBinary(int n) {
    // Special case for zero
    if (n == 0) return "0";
    string binary = "";
    // Continue until n becomes 0
    while (n > 0) {
        // Record the remainder (0 or 1)
        int remainder = n % 2;
        // Prepend the remainder to the binary string
        binary = to_string(remainder) + binary;
        // Update n to be the quotient
        n = n / 2;
    }
    return binary;
}

int countOnes(const string &binary) {
    int count = 0;
    for (char c : binary) {
        if (c == '1') {
            ++count;
        }
    }
    return count;
}

int binaryOnesToDecimal(int onesCount) {
    // Create a binary number with the same number of '1's
    string binaryOnes = string(onesCount, '1');
    // Convert this binary number to decimal
    int decimalValue = 0;
    for (char c : binaryOnes) {
        decimalValue = decimalValue * 2 + (c - '1' + 1); // essentially just +1
    }
    return decimalValue;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string binaryNumber = decimalToBinary(N);
        int onesCount = countOnes(binaryNumber);
        int result = binaryOnesToDecimal(onesCount);

        cout << result << endl;
    }

    return 0;
}
