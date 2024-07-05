#include <iostream>

using namespace std;

int main()
{
    long long n;
    bool prime = true; // Assume the number is prime initially
    cin >> n;

    if (n <= 1) {
        prime = false;
    } else if (n == 2) {
        prime = true;
    } else if (n % 2 == 0) {
        prime = false;
    } else {
        for (long long i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                prime = false;
                break; // No need to check further if we found a divisor
            }
        }
    }

    if (prime) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
