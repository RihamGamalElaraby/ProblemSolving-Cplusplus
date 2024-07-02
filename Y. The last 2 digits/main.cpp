#include <iostream>
/*
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Calculate the product
    long long product = A * B * C * D;

    // Extract the last 2 digits
    int last_two_digits = product % 100;

    // Output the last 2 digits
    cout << last_two_digits << endl;


    return 0;
}
*/


using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Calculate (A * B * C * D) % 100 directly
    int result = ((A % 100) * (B % 100) % 100 * (C % 100) % 100 * (D % 100) % 100) % 100;

    // Output the last 2 digits
    cout << result << endl;

    return 0;
}

