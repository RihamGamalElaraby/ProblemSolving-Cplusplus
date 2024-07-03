#include <iostream>

using namespace std;

int main()
{
    long long x, y, z;
    char operators;
    char equel;

    cin >> x >> operators >> y >> equel >> z;

    bool isCorrect = false;

    if (operators == '+' && z == (x + y)) {
        isCorrect = true;
    } else if (operators == '-' && z == (x - y)) {
        isCorrect = true;
    } else if (operators == '*' && z == (x * y)) {
        isCorrect = true;
    }

    if (isCorrect) {
        cout << "Yes" << endl;
    } else {
        long long result;
        if (operators == '+') {
            result = x + y;
        } else if (operators == '-') {
            result = x - y;
        } else if (operators == '*') {
            result = x * y;
        }
        cout << result << endl;
    }

    return 0;
}
