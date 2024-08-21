#include <iostream>
#include <string>

using namespace std;

int calculateScore(int N, string S) {
    int score = 0;
    int i = 0;

    while (i < S.length()) {
        if (S[i] == 'V') {
            score += 5;
        }
        else if (S[i] == 'W') {
            score += 2;
        }
        else if (S[i] == 'X') {
            if (i + 1 < S.length()) {
                S.erase(i + 1, 1);  // Remove the next character
            }
        }
        else if (S[i] == 'Y') {
            if (i + 1 < S.length()) {
                char temp = S[i + 1];
                S.erase(i + 1, 1);  // Remove the next character
                S.push_back(temp);  // Append it to the end of the string
            }
        }
        else if (S[i] == 'Z') {
            if (i + 1 < S.length()) {
                if (S[i + 1] == 'V') {
                    score /= 5;
                    S.erase(i + 1, 1);  // Remove 'V'
                }
                else if (S[i + 1] == 'W') {
                    score /= 2;
                    S.erase(i + 1, 1);  // Remove 'W'
                }
            }
        }
        i++;
    }

    return score;
}

int main() {
    int N;
    string S;
    cin >> N >> S;

    int result = calculateScore(N, S);
    cout << result << endl;

    return 0;
}
