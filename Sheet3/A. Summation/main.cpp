#include <iostream>

using namespace std;

int main()
{
    long long n ;
    cin >> n ;
    long long arr [n] ;
    for (int i = 0 ; i < n ; ++i)
    {
        cin >> arr[i];
    }
    long long sum = 0 ;
     long long absoulte ;
    for (int i = 0 ; i < n ; ++i)
    {
        sum = sum + arr[i];
         absoulte = abs(sum);

    }
    cout << absoulte << endl ;
    return 0;
}
