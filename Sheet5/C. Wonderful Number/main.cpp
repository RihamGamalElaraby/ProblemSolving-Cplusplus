#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to check if a number is odd
bool isOdd(int n) {
    return n % 2 != 0;
}

// Function to check if a binary string is a palindrome
bool isBinaryPalindrome(int n) {
    string binaryStr = "";

    // Convert the number to binary string
    while (n > 0) {
        binaryStr += (n % 2 == 0) ? '0' : '1';
        n /= 2;
    }

    // Check if the binary string is a palindrome
    string reversedStr = binaryStr;
    reverse(reversedStr.begin(), reversedStr.end());
    return binaryStr == reversedStr;
}

int main() {
    int n;
    cin >> n;

    // Check if the number is odd and its binary representation is a palindrome
    if (isOdd(n) && isBinaryPalindrome(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
