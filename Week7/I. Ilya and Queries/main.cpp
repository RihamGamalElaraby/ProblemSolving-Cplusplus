#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int m;
    cin >> m;
    int x, y;
    vector<int> countt;

    while (m--)
    {
        int count = 0;  // Reset count for each query
        cin >> x >> y;
        x--; // Convert to 0-based index
        y--;
        for (int i = x; i < y; i++)
        {
            if (s[i] == s[i + 1])
                count++;
        }
        countt.push_back(count);
    }

    for (int i = 0; i < countt.size(); i++)
    {
        cout << countt[i] << endl;
    }

    return 0;
}
