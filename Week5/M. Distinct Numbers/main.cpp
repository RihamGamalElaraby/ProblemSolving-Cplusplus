#include <iostream>
#include <set> // To use the set data structure
using namespace std;

int countDistinctNumbers(int arr[], int n) {
    set<int> distinctNumbers;

    // Insert all elements into the set
    for (int i = 0; i < n; ++i) {
        distinctNumbers.insert(arr[i]);
    }

    // The size of the set will be the number of distinct elements
    return distinctNumbers.size();
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Count and print the number of distinct numbers
    cout << countDistinctNumbers(arr, n) << endl;

    return 0;
}
