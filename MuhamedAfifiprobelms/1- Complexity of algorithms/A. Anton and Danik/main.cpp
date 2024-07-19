#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    string x ;
    cin >> x ;
    int d = 0;
    int a = 0;
    for (char c : x)
    {
        if (c == 'A')
        {
            ++a ;
        } else if (c == 'D')
        {
            ++d ;
        }
    }


    if (a > d) cout << "Anton" << endl;
    if (a < d) cout << "Danik" << endl;
    if (a == d) cout << "Friendship" << endl;

    return 0;
}
