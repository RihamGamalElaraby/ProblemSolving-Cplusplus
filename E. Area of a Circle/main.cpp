#include <iostream>
#include <iomanip> // Include this header for setprecision
#include <cmath>

using namespace std;

int main()
{
    double pi = 3.141592653; // Correct the definition of pi
   long double R;
    cin >> R;
    cout << fixed << setprecision(9);

    cout << pi * pow(R, 2) << endl;
    return 0;
}
