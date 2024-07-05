#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int A, B;
    cin >> A >> B;

    // Calculate the GCD of A and B using the Euclidean algorithm
    int result = gcd(A, B);

    // Output the GCD
    cout << result << endl;

    return 0;
}
