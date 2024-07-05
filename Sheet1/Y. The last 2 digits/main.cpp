#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Calculate (A * B * C * D) % 100 directly
    long long result = ((A % 100) * (B % 100) % 100 * (C % 100) % 100 * (D % 100) % 100) % 100;

    // Output the last 2 digits
    cout << setw(2) << setfill('0') << result << endl;

    return 0;
}
