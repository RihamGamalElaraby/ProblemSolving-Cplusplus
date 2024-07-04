#include <iostream>

using namespace std;

int main()
{
    long long numbers ;
    cin >> numbers ;
    long long arr[numbers];
    for (int i = 0  ; i < numbers ; ++i)
    {
        cin >> arr[i];
    }
    long long evenCount = 0 ;
    long long oddCount= 0 ;
    long long positiveCount= 0 ;
    long long negativeCount = 0;
    for (int i = 0 ; i < numbers ; ++i)
    {
        if (arr[i] < 0 )
        {
          ++  negativeCount;
        }
        if (arr[i] > 0 )
        {
          ++  positiveCount;
        }
        if (arr[i] %2 == 0 )
        {
          ++  evenCount;
        }
        if (arr[i] %2 != 0 )
        {
          ++  oddCount;
        }

    }
    cout << "Even: " << evenCount << endl;
    cout << "Odd: " << oddCount << endl;
    cout << "Positive: " << positiveCount << endl;
    cout << "Negative: " << negativeCount << endl;

    return 0;
}
