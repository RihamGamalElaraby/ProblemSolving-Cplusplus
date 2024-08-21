#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        string S, T;
        cin >> S >> T;
        string result = "";

        int minLength = min(S.size(), T.size());

        // Alternate characters from both strings
        for (int i = 0; i < minLength; ++i) {
            result += S[i];
            result += T[i];
        }

        // Append remaining characters from the longer string
        if (S.size() > T.size()) {
            result += S.substr(minLength);
        } else if (T.size() > S.size()) {
            result += T.substr(minLength);
        }

        cout << result << endl;
    }

    return 0;
}
