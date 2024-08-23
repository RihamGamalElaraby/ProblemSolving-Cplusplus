#include <iostream>
#include <vector>
using namespace std;

void shiftRight(vector<int>& arr, int N, int X) {
    // Calculate the effective number of shifts
    X = X % N;

    // Output the shifted array
    for (int i = N - X; i < N; ++i) {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < N - X; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    shiftRight(arr, N, X);

    return 0;
}
