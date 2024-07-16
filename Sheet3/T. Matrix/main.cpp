#include <iostream>
#include <cmath>
using namespace std;

int main()
{
     int n ;
     cin >> n ;
     int arr [n][n] ;

       for ( int i = 0 ; i< n ; ++i)
     {
         for (int j =0 ; j< n ; ++j)
         {
             cin >> arr[i][j];

         }
     }


     int sum_primary = 0 ;
     int sum_secondary = 0 ;


     for (int i = 0 ; i< n ; i++)
     {
         sum_primary += arr[i][i];

     }


      for (int i = 0 ; i< n ; i++)
     {
         sum_secondary += arr[i][n-1-i];
     }


    int difference = abs (sum_primary - sum_secondary);
     cout << difference << endl ;
    return 0;
}
