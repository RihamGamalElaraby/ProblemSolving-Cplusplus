#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n ;
    cin >> n ;
    long long  A [n];
    for (int i = 0 ; i<n ; ++i)
    {
        cin >> A[i];
    }
    sort(A, A+n) ;
    long long  B [n];
     for (int i = 0 ; i<n ; ++i)
    {
        cin >> B[i];
    }
    sort(B, B+n) ;
    bool allDone = true ;

         for (int i = 0 ; i<n ; ++i)
    {
        if(A[i] != B[i] )
        {
             allDone = false ;
             break ;
        }
    }


    if (allDone)
    {
        cout << "yes" << endl;

    }
    else
    {
        cout << "no" << endl;

    }
    return 0;
}
