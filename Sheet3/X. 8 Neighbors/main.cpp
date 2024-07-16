#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    char grid[N][M];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> grid[i][j];
        }
    }

    int X, Y;
    cin >> X >> Y;
    --X; // convert to 0-based index
    --Y; // convert to 0-based index

    // Define the 8 possible neighbors manually
    int neighborX[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int neighborY[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < 8; ++i) {
        int newX = X + neighborX[i];
        int newY = Y + neighborY[i];

        if (newX >= 0 && newX < N && newY >= 0 && newY < M) {
            if (grid[newX][newY] != 'x') {
                cout << "no" << endl;
                return 0;
            }
        }
    }

    cout << "yes" << endl;
    return 0;
}
