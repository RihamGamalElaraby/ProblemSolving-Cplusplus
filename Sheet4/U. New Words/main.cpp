#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int counte = 0;
    int countg = 0;
    int county = 0;
    int countp = 0;
    int countt = 0;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'e' || s[i] == 'E')
        {
            counte += 1;
        }
        else if (s[i] == 'g' || s[i] == 'G')
        {
            countg += 1;
        }
        else if (s[i] == 'y' || s[i] == 'Y')
        {
            county += 1;
        }
        else if (s[i] == 'p' || s[i] == 'P')
        {
            countp += 1;
        }
        else if (s[i] == 't' || s[i] == 'T')
        {
            countt += 1;
        }
    }

    // Calculate the number of "EGYPT" words that can be formed
    int countWord = min({counte, countg, county, countp, countt});

    cout << countWord << endl;
    return 0;
}
