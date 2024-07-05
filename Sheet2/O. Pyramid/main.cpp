#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    char sign = '*';

    for (int i = 1 ; i <= n ; ++i)
    {   for (int j = 1; j <= i; ++j) { // Inner loop for printing stars in each row
            cout << sign;
        }
        cout << endl; // Move to the next line after each row
    }
    return 0 ;
}
