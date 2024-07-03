#include <iostream>
#include <iomanip>
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



 // for std::setw and std::setfill
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Calculate (A * B * C * D) % 100 directly
    long long product = A * B * C * D;
    int result = product % 100;

    // Output the last 2 digits, ensuring two digits are printed
    cout << setw(2) << setfill('0') << result << endl;

    return 0;
}
