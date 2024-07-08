#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    bool isValid = (s.size() == a + b + 1) && (s[a] == '-');

    for (int i = 0; i < s.size(); ++i)
    {
        if (i != a && !isdigit(s[i]))
        {
            isValid = false;
            break;
        }
    }

    if (isValid)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
