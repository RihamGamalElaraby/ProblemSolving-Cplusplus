#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        int num = s[i] - '0'; // Convert character to integer
        sum += num;
    }

    cout << sum << endl;
    return 0;
}
