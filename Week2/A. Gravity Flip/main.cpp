#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int coulms ;
    cin >> coulms ;
    int arr [coulms];
    for (int i = 0 ; i <coulms ; ++i )
    {
        cin >> arr[i];
    }
    sort (arr , arr + coulms) ;
    for (int i = 0 ;  i < coulms ; ++i)
    {
        cout << arr[i] << " " ;

    }
    cout << endl;
    return 0;
}
