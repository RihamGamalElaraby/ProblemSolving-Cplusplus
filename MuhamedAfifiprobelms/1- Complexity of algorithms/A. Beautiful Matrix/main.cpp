#include <iostream>
#include <algorithm>
using namespace std;

int main()
{   int arr [5][5];
    int row ;
    int coulmn ;
     for (int i = 0 ; i < 5 ; ++i)
     {
         for (int j =0 ; j < 5 ; ++j)
         {
             cin >> arr[i][j];
             if( arr[i][j]  == 1 )
            {
                row = i ;
                coulmn = j ;
            }
         }
     }

   int  result = abs(row - 2 ) + abs (coulmn -2 );
     cout << result << endl ;

    return 0;
}
