/*#include <iostream>

using namespace std;

int main()
{
    long long  n ;
    cin >> n ;
    long long sum = 0  ;
    for(long long  i = 1 ; i <= n ; ++i)
    {
        if (i % 2 != 0)
        {
            sum += -i ;
        } else
        {
            sum += i ;
        }
    }

    cout << sum << endl;
    return 0;
}
*/
#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long result;
    if (n % 2 == 0) {
        result = n / 2;
    } else {
        result = -(n + 1) / 2;
    }

    cout << result << endl;
    return 0;
}
