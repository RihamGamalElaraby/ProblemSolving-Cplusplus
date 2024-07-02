/*
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a , b , c ,d ;
    cin >> a >> b >> c >>d ;
    if (pow(a , b) >pow(c , d) )
    cout << "YES" << endl;
    else
    cout << "NO" << endl;

    return 0;
}
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Calculate B * log(A) and D * log(C)
    double left = B * log(A);
    double right = D * log(C);

    // Compare using logarithmic properties
    if (left > right) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
