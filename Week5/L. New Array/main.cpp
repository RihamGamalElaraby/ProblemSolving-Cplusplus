#include <iostream>
using namespace std;

void concatenate(int arrA[], int arrB[], int n) {
    int arrC[2 * n]; // Array C will have size 2*n

    // Copy elements of B into C
    for (int i = 0; i < n; ++i) {
        arrC[i] = arrB[i];
    }

    // Copy elements of A into C, starting after elements of B
    for (int i = 0; i < n; ++i) {
        arrC[n + i] = arrA[i];
    }

    // Print the elements of the new array C
    for (int i = 0; i < 2 * n; ++i) {
        cout << arrC[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arrA[n], arrB[n];

    // Input array A
    for (int i = 0; i < n; ++i) {
        cin >> arrA[i];
    }

    // Input array B
    for (int i = 0; i < n; ++i) {
        cin >> arrB[i];
    }

    // Call the concatenate function
    concatenate(arrA, arrB, n);

    return 0;
}
