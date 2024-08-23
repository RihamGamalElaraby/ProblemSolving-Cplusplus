#include <iostream>
#include <algorithm>
using namespace std;
void isprime (int arr[n])
{
    for (int i = 0 ; i < n ; ++i)
    {
       if (arr[i] <= 1) return false;  // Numbers less than or equal to 1 are not prime
    if (arr[i] <= 3) return true;   // 2 and 3 are prime numbers

    if (arr[i] % 2 == 0 || arr[i] % 3 == 0) return false; // Check for divisibility by 2 and 3

    // Check for factors from 5 to sqrt(x)
    for (int i = 5; i * i <= arr[i]; i += 6) {
        if (arr[i] % i == 0 ||arr[i] % (i + 2) == 0) return false;
    }

    return true;
    }
}
int main()
{
    int n ;
    cin >> n ;
    int arr[n];
    for (int i =0 ; i <n ; i++)
    {
        cin >> arr[i];
    }
    sort (arr, arr+n) ;
    cout << "The maximum number : " << arr[n-1];
    cout << "The minimum  number : " << arr[0];
    isprime(arr) ;
    isplindamore(arr) ;
    isdivisaple (arr);
    return 0;
}
