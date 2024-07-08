#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t; // Corrected input statement

    while (t--)
    {
        int n;
        cin >> n; // Corrected input statement
        vector<long long> arr(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i]; // Corrected input statement
        }

        vector<long long> results; // To store the maximum values of all sub-arrays

        for (int i = 0; i < n; ++i)
        {
            long long max_val = arr[i]; // Initialize with the first element of the sub-array
            results.push_back(max_val);
            for (int j = i + 1; j < n; ++j)
            {
                max_val = max(max_val, arr[j]); // Find the maximum in the current sub-array
                results.push_back(max_val);
            }
        }

        // Print the results for the current test case
        for (auto val : results)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
