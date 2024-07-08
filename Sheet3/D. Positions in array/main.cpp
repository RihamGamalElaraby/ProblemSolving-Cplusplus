#include <iostream>

using namespace std;

int main()
{
    long long n ;
    cin >>n ;
    long long arr [n];
    for (int i =0 ; i < n ; ++i)
    {
        cin >> arr[i] ;
    }
    for (int i =0 ; i < n ; ++i)
    {
        if (arr[i] <= 10 )
        {
            cout << "A[" <<  i << "] = " << arr[i] << endl ;
        }
    }

    return 0;
}

