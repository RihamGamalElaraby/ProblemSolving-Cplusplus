#include <iostream>

using namespace std;

int main()
{ int n ;
cin >> n ;
    for (int j = 1 ; j <= n *4 ; j ++)
    {
        if (j % 4 == 0)
        {
            cout << "PUM" << endl ;
        } else
        {
           cout << j << " "  ;
        }
    }

    return 0;
}
