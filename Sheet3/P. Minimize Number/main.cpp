#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n;
    cin >> n ;
    vector <long long> A (n) ;
    for (int i = 0 ; i < n ; ++i)
    {
        cin >> A[i];
    }
    int count = 0 ;
    bool all_even = true;
   while (true)
   {
     for (int i = 0 ; i < n ; ++i)
    {
        if (A[i] % 2 != 0)
        {
           all_even = false;
                break;
         }
     }

     if (!all_even)
        {
            break;
        }

        for (int i = 0; i < n; ++i)
        {
            A[i] /= 2;
        }
        ++count;
    }

    cout << count << endl;
    return 0;
}
