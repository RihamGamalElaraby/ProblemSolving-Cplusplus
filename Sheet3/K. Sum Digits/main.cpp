#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long n ;
    cin >> n ;
    string s ;
    cin >> s ;
    int sum =0  ;
    for (int i = 0 ; i< n ; ++i)
    {
        sum = sum + (s[i] - '0')  ;

    }
    cout << sum ;
    return 0;
}
