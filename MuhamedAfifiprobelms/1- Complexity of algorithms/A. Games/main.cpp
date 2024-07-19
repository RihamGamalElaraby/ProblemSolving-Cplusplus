#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Vector to store pairs of home and guest uniform colors
    vector<pair<int, int>> teams(n);

    // Reading the uniform colors for each team
    for (int i = 0; i < n; ++i) {
        cin >> teams[i].first >> teams[i].second; // .first is home color, .second is guest color
    }

    int clashes = 0;

    // Check each pair of teams
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                // If host's home color matches guest's away color
                if (teams[i].first == teams[j].second) {
                    clashes++;
                }
            }
        }
    }

    // Output the result
    cout << clashes << endl;

    return 0;
}
