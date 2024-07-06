#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n ;
    cin >> n ;
    int count = 0 ;
    vector <int> v ;
    for (int i =1 ; i<= n ; ++i)
    {
        if (n % i == 0)
        {
        ++ count ;
         v.push_back(i) ;
        }

    }
      cout << count << endl ;
    for (int i = 0 ; i < v.size() ; ++i)
    {
        cout << v[i] << " " ;
    }
    cout << endl ;
    return 0;
}
