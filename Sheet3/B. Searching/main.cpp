#include <iostream>

using namespace std;

int main()
{
    long long  n ;
    cin >> n ;
        long long arr [n];
    for ( int i = 0 ; i< n ; ++i )
    {
        cin >> arr[i];
    }
        long long x ;
        cin >> x ;
        bool found = false ;
     for ( int i = 0 ; i < n ; ++i )
    {
      if (x == arr[i] )
      {
          cout << i ;
          found = true ;
          break ;
      }
    }
      if (!found)
      {
          cout << "-1";
      }

    return 0;
}
