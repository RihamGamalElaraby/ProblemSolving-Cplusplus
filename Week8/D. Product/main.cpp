#include <iostream>

using namespace std;

int main() {
    long long L, R, M;
    cin >> L >> R >> M;

    long long product = 1;

    for (long long i = L; i <= R; ++i) {
        product = (product * i) % M;
    }

    cout << product << endl;

    return 0;
}
