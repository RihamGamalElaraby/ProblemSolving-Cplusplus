#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int j = 0; j < n; ++j)
        {
            cin >> arr[j];
        }

        int minvalue = INT_MAX;

        for (int j = 0; j < n; ++j)
        {
            for (int r = j + 1; r < n; ++r)
            {
                int current_value = arr[j] + arr[r] + (r - j);
                if (current_value < minvalue)
                {
                    minvalue = current_value;
                }
            }
        }

        cout << minvalue << endl;
    }

    return 0;
}
