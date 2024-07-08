#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n ;
    cin >> n ;
    vector <int> arr (n);

    for (int i = 0 ; i < n ; ++i)
    {
        cin >> arr[i];
    }
        bool is_palindrome = true;

    for (int i = 0 ; i < n/2  ; ++i)
    {


            if (arr[i] != arr[n - 1 - i])
        {
            is_palindrome = false;
            break;
        }

    }
    if (is_palindrome)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


    return 0;
}
