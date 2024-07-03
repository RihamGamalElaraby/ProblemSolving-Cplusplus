#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n ;
    long long count = 0 ;
    cin >> n ;
    long long arr [n] ;
    for ( int i = 0 ; i < n ; ++i)
    {
        cin >> arr [i];
    }

    sort (arr , arr + n);

    for (int i = 0 ; i  < n ; ++i)
    {
        for (int j = i+1 ; j <n ; ++j)
        {
            if(i != j && arr [i]+arr [j] == arr[0]+ arr[n-1])
            {
                count ++ ;
            }
        }
    }
    cout << count << endl;
    return 0;
}
