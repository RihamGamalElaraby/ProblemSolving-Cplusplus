#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;

    long long count = 0;
    for (long long k = 1; k < x; ++k) {
        if (x % k == 0) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
