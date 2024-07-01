#include <iostream>

using namespace std;

int main()
{
    signed long long x, y, z;
    cin >> x >> y >> z;

    signed long long maxVal, minVal;

    // Finding the maximum value
    if (x >= y && x >= z)
    {
        maxVal = x;
    }
    else if (y >= x && y >= z)
    {
        maxVal = y;
    }
    else
    {
        maxVal = z;
    }

    // Finding the minimum value
    if (x <= y && x <= z)
    {
        minVal = x;
    }
    else if (y <= x && y <= z)
    {
        minVal = y;
    }
    else
    {
        minVal = z;
    }

    cout << minVal << " " << maxVal << endl;

    return 0;
}
