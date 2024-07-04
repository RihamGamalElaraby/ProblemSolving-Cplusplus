
#include <iostream>


using namespace std;

int main()
{
    int n;
    cin >> n;

    bool hasEvenNumbers = false;

    for (int i = 2; i <= n; i += 2)
    {
        cout << i << endl;
        hasEvenNumbers = true;
    }

    if (!hasEvenNumbers)
    {
        cout << "-1" << endl;
    }

    return 0;
}
