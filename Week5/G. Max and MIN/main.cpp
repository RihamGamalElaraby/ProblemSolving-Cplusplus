#include <iostream>
#include <algorithm> // for sort

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + n); // Corrected: Added semicolon

    cout << arr[0] << " " << arr[n - 1] << endl; // Corrected: Added <<
return 0 ;

}
