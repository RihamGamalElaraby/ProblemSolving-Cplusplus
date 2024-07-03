#include <iostream>

using namespace std;

int main()
{
    long long x;
    cin >> x;

    // Extract the first digit of x
    long long firstdigit = x;
    while (firstdigit >= 10) {
        firstdigit /= 10;
    }

    // Check if the first digit is even or odd
    if (firstdigit % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }

    return 0;
}
