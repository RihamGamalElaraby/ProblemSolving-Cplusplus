#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a , b ;
    cin >> a >> b ;
    string c = a+b ;
    cout << a.size() << " " << b.size() << endl ;
    cout << c << endl ;
    swap(a[0], b[0]);
    cout << a << " " << b << endl ;
    return 0;
}
