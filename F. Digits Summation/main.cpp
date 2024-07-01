#include <iostream>

using namespace std;

int main()
{
    unsigned long long x, y;
    cin >> x >> y; // Correct the input statement by using >> operator
    int lastDigitX = x % 10;
    int lastDigitY = y % 10; // Correct the variable name (lastDigity to lastDigitY)

    cout << lastDigitX + lastDigitY << endl;
    return 0;
}
