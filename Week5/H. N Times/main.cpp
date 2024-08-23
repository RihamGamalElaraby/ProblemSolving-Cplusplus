#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    int x ;
    char y ;
    while (n--)
    {
    cin >> x >> y ;
        for (int i = 0 ; i < x ; i++)
            cout << y << " " ;
    }
    return 0;
}
