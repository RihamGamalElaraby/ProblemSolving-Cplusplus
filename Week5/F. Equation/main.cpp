#include <iostream>
#include <vector>
#include <cmath> // for pow function
using namespace std;

int main()
{
    int x ,y ;
    cin >> x >> y ;
    vector <int> even ;
     int total = 0 ;
    for (int i = 0 ; i<= y ;i++)
    {
        if (i%2 == 0)
        {
            even.push_back(i);
        }
    }
    for (int i = 0 ; i < even.size() ; i++)
    {
       if (even[i] ==0 )
       {
           total = pow(x, even[i]) -1 ;
       } else
       {
             total += pow(x , even[i]);
       }

    }
       cout << total ;

    return 0;
}
