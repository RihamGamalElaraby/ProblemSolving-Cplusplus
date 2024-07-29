#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> teleports(n);
    for (int i = 0; i < n; ++i) {
        cin >> teleports[i].first >> teleports[i].second;
    }

    int farthestReach = 0;

    for (const auto& teleport : teleports) {
        int a = teleport.first;
        int b = teleport.second;

        if (a > farthestReach) {
            break;
        }

        farthestReach = max(farthestReach, b);
    }

    if (farthestReach >= m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
