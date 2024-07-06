#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    vector <int> X ;

    if (n >= 1)
        X.push_back(0); // fib(1)
    if (n >= 2)
        X.push_back(1); // fib(2)

    for ( int i = 2 ; i < n ; ++i)
    {

        int next_fib = X[i - 1] + X[i - 2];
        X.push_back(next_fib);



    }
    for (int i = 0 ; i < X.size() ; ++i)
    {
        cout << X[i] << " " ;
    }
    cout << endl ;
    return 0;
}
