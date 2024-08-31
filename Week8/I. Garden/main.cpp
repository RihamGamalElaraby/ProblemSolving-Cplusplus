#include <iostream>
#include <climits>  // For INT_MAX

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int minimum = INT_MAX;  // Initialize to a very large value
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (k % arr[i] == 0)
        {
            int result = k / arr[i];
            if (result < minimum)
            {
                minimum = result;
            }
        }
    }

    cout << minimum;

    return 0;
}
