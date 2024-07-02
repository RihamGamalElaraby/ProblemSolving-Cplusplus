#include <iostream>
#include <algorithm> // for std::max function

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "0" << endl;
    } else {
        int x = max(0, c - (a + b - 1));
        int y = max(0, b - (a + c - 1));
        int z = max(0, a - (b + c - 1));

        cout << x + y + z << endl;
    }

    return 0;
}
