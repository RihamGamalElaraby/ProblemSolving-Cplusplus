#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    vector<int> arr(n);
    for (int i =0 ; i < n ; ++i)
    {
        cin >> arr[i];
    }

       int minIndex = 0, maxIndex = 0;

    for(int i=0; i<n;i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    swap(arr[minIndex], arr[maxIndex]);

     for (int i =0 ; i < n ; ++i)
    {
         cout << arr[i] << " ";
    }




    return 0;
}
