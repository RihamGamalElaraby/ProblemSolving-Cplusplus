#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
     int arr [n] ;
     for (int i = 0 ; i < n ; ++i)
     {
         cin >> arr[i];
     }
       int mini =INT_MAX ;
     for (int i = 0 ; i < n ; ++i)
     {

         if (arr [i] < mini)
         {
             mini = arr[i];
         }
     }
     int countt = 0 ;
          for (int i = 0 ; i < n ; ++i)
     {

         if (arr [i] == mini)
         {
          ++  countt ;
         }
     }

     if (countt % 2 != 0)

     {
         cout << "Lucky" << endl ;
     } else
     {
         cout << "Unlucky" << endl ;
     }

    return 0;
}
