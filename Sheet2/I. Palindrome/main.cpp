#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(int number) {
    // Convert number to string
    string original = to_string(number);
    int n = original.length();

    // Check for palindrome using two pointers
    for (int i = 0; i < n / 2; ++i) {
        if (original[i] != original[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int reverseNumber(int number) {
    // Reverse the number iteratively
    int reversed = 0;
    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return reversed;
}

int main()
{
     int N;
    cin >> N;

    // Reverse the number
    int reversed_N = reverseNumber(N);

    // Check if N is palindrome
    if (isPalindrome(N)) {
        cout << N << endl;
        cout << "YES" << endl;
    } else {
        cout << reversed_N << endl;
        cout << "NO" << endl;
    }

    return 0;

}
