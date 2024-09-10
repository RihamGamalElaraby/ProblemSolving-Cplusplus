#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int t;  // number of test cases
    cin >> t;

    while (t--)
    {
        int n;  // number of trucks
        cin >> n;

        stack<int> sideStreet;
        int waitFor = 1;  // the truck we are waiting for
        bool canReorder = true;  // flag to check if reordering is possible

        for (int i = 0; i < n; i++)
        {
            int nextTruck;
            cin >> nextTruck;

            // Keep popping from the side street if the top is the truck we're waiting for
            while (!sideStreet.empty() && sideStreet.top() == waitFor)
            {
                sideStreet.pop();
                waitFor++;
            }

            if (nextTruck == waitFor)
            {
                // If the truck is the one we're waiting for, increment waitFor
                waitFor++;
            }
            else
            {
                // Otherwise, push it onto the side street, but ensure it follows stack order
                if (!sideStreet.empty() && sideStreet.top() < nextTruck)
                {
                    // If the top of the stack is smaller than the nextTruck, it's impossible
                    canReorder = false;
                }
                else
                {
                    // Push the truck to the side street
                    sideStreet.push(nextTruck);
                }
            }
        }

        // After all trucks are processed, check if the reordering was possible
        if (canReorder)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
