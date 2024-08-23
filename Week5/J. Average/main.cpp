#include <iostream>
#include <iomanip> // For std::setprecision and std::fixed
using namespace std;

int main() {
    int n;
    cin >> n;

    double arr[n];   // Use double for better precision
    double sum = 0;  // To accumulate the sum of the array elements

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    // Set the precision to 2 decimal places for output
    cout << fixed << setprecision(6) << sum / n << endl;

    return 0;
}
