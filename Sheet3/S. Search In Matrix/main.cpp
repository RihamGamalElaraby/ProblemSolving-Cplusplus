#include <iostream>

using namespace std;

int main()
{ long long n , m ;
cin >> n >> m ;
long long x ;

int arr [n][m] ;
for(int i=0;i<n;i++)
	{
		for(int j=0;j < m ;j++)
		{
		    cin >> arr[i][j];
		}
    }
       cin >> x ;
bool found = false ;
for(int i=0;i<n;i++)
	{
		for(int j=0;j < m ;j++)
		{
		    if (arr[i][j] == x)
            {
                found = true  ;
            break;
            }
		}
		if(found) break ;
	}
   if(found)
   {
      cout << "will not take number" << endl ;

   }
   else
   {
        cout << "will take number" << endl ;

   }
    return 0;
}
