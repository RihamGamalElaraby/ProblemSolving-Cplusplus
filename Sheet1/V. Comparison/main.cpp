#include <iostream>

using namespace std;

int main()
{
    int x, y;
    char sign;

    cin >> x >> sign >> y;
    if ((sign == '<' && x < y) || (sign == '>' && x > y) || (sign == '=' && x == y)) {
        cout << "Right" << endl;
    } else {
        cout << "Wrong" << endl;
    }

    return 0;
}
