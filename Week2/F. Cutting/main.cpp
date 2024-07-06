#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> cutCosts;
    int countOdd = 0, countEven = 0;

    // Iterate through the array to find valid cut points and their costs
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] % 2 == 0) {
            ++countEven;
        } else {
            ++countOdd;
        }

        if (countEven == countOdd) {
            int cutCost = abs(arr[i] - arr[i + 1]);
            cutCosts.push_back(cutCost);
        }
    }

    // Sort the costs of the cuts in ascending order
    sort(cutCosts.begin(), cutCosts.end());

    int totalCost = 0;
    int maxCuts = 0;

    // Select the maximum number of cuts within the budget
    for (int cost : cutCosts) {
        if (totalCost + cost <= b) {
            totalCost += cost;
            ++maxCuts;
        } else {
            break;
        }
    }

    cout << maxCuts << endl;
    return 0;
}
