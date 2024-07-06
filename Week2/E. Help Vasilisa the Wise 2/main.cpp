#include <iostream>
#include <set>
using namespace std;

int main() {
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    // Try all possible values for box1, box2, box3, box4
    for (int box1 = 1; box1 <= 9; ++box1) {
        for (int box2 = 1; box2 <= 9; ++box2) {
            for (int box3 = 1; box3 <= 9; ++box3) {
                for (int box4 = 1; box4 <= 9; ++box4) {
                    // Check if all numbers are distinct
                    set<int> boxes = {box1, box2, box3, box4};
                    if (boxes.size() == 4) {
                        // Check if they satisfy the constraints
                        if (box1 + box2 == r1 &&
                            box3 + box4 == r2 &&
                            box1 + box3 == c1 &&
                            box2 + box4 == c2 &&
                            box1 + box4 == d1 &&
                            box2 + box3 == d2) {
                            cout << box1 << " " << box2 << endl;
                            cout << box3 << " " << box4 << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }

    // If no solution found
    cout << -1 << endl;
    return 0;
}
