#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    // Using the formula for the sum of the first N natural numbers
    long long sum = (n * (n + 1)) / 2;

    cout << sum << endl;

    return 0;
}
