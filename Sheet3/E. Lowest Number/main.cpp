#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> arr(n); // Using vector instead of array

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int min_value = arr[0];
    int min_index = 0;

    for (int i = 1; i < n; ++i)
    {
            if (arr[i] < min_value)
            {
            min_value = arr[i];
            min_index = i;
        }

    }
    cout << min_value << " " << (min_index + 1) << endl;

    return 0;
}
