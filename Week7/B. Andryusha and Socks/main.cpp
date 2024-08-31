#include <iostream>
#include <vector>
#include <algorithm> // for std::find

using namespace std;

int main()
{
    int n;
    cin >> n;
    int max_n = 2 * n;
    int maxAtTable = 0;
    int arr[max_n];
    vector<int> v;

    for (int i = 0; i < max_n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < max_n; i++)
    {
        auto it = find(v.begin(), v.end(), arr[i]);
        if (it != v.end()) // Element is found
        {
            v.erase(it); // Remove the element from the vector
        }
        else // Element is not found
        {
            v.push_back(arr[i]); // Add the element to the vector
        }

        if (v.size() > maxAtTable)
        {
            maxAtTable = v.size(); // Update maxAtTable if the current size is larger
        }
    }

    cout << maxAtTable;
    return 0;
}
