#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1 && b == 1 && c == 1)
        {
            ++count;
        }
        else if ((a == 1 && b == 1) || (a == 1 && c == 1) || (b == 1 && c == 1))
        {
            ++count;
        }
        --n;
    }
    cout << count << endl;
    return 0;
}
