#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long double x , y ;
    cin >> x >> y ;
      long double z = x / y ;
    cout << "floor " << x << " / " << y << " = " <<  floor(z)<< endl;
    cout << "ceil " << x << " / " << y << " = " <<  ceil(z)<< endl;
    cout << "round " << x << " / " << y << " = " <<  round(z)<< endl;


    return 0;
}
