#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long  n , m ;
    cin >> n ;
    cin >> m ;
      long long  poww = pow(2,n);
      long long  result = m% poww;

    cout << result << endl;
    return 0;
}
