#include <iostream>

using namespace std;

int main()
{
    char sign ;
    cin >> sign ;
    int n ;
    cin >> n ;
    int arr [n];
    for (int i = 0 ; i < n ; ++i)
    {
        cin >> arr[i];
    }
    for (int i =0 ; i < n ; ++i)
    {
        int temp = arr[i];
        for (int j = 0 ; j < temp ; ++j)
        {
            cout << sign ;
        }
         cout << endl;
    }
    return 0;
}
