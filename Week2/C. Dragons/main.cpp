#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int strength, dragons;
    cin >> strength >> dragons;

    vector<pair<int, int>> dragon_strengths;

    for (int i = 0; i < dragons; ++i) {
        int x, y;
        cin >> x >> y;
        dragon_strengths.push_back({x, y});
    }

    // Sort dragons by their strength
    sort(dragon_strengths.begin(), dragon_strengths.end());

    bool win = true;
    for (int i = 0; i < dragons; ++i) {
        int dragon_strength = dragon_strengths[i].first;
        int bonus_strength = dragon_strengths[i].second;

        if (strength > dragon_strength) {
            strength += bonus_strength;
        } else {
            win = false;
            break;
        }
    }

    if (win) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
