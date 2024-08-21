#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int x = s.size();
    bool isPalindrome = true;

    for (int i = 0; i < x / 2; ++i)
    {
        if (s[i] != s[x - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
