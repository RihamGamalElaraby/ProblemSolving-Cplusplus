#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    char sign = '*' ;
    for (int i = 0; i < n; ++i) {
        // Print spaces
        for (int j = 0; j < n - i - 1; ++j) {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < 2 * i + 1; ++k) {
            cout << sign;
        }
        cout << endl;
    }
      for (int i = n - 1; i >= 0; --i) {
        // Print spaces
        for (int j = 0; j < n - i - 1; ++j) {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < 2 * i + 1; ++k) {
            cout << sign;
        }
        cout << endl;
    }
    return 0;
}
