#include <iostream>
using namespace std;

// Function to calculate sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        int digitSum = sumOfDigits(i);
        if (digitSum >= a && digitSum <= b) {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}
