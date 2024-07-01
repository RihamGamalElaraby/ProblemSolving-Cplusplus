#include <iostream>

using namespace std;

int main()
{
    long long x, y;
    char sign;
    cin >> x >> sign >> y;

    if (sign == '+')
    {
        cout << x + y << endl;
    }
    else if (sign == '-')
    {
        cout << x - y << endl;
    }
    else if (sign == '*')
    {
        cout << x * y << endl;
    }
    else if (sign == '/')
    {
        if (y != 0)
        {
            cout << x / y << endl;
        }
        else
        {
            cout << "Error: Division by zero" << endl;
        }
    }
    else
    {
        cout << "Error: Invalid operator" << endl;
    }

    return 0;
}
