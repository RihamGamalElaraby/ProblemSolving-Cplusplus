#include <iostream>
#include <string>
#include <vector>

using namespace std;


bool is_lucky_number(int num) {
    string num_str = to_string(num);
    for (char c : num_str) {
        if (c != '4' && c != '7') {
            return false;
        }
    }
    return true;
}

void lucky_numbers_between(int A, int B) {
    vector<int> lucky_numbers;
    for (int num = A; num <= B; ++num) {
        if (is_lucky_number(num)) {
            lucky_numbers.push_back(num);
        }
    }

    if (!lucky_numbers.empty()) {
        for (int i = 0; i < lucky_numbers.size(); ++i) {
            cout << lucky_numbers[i];
            if (i < lucky_numbers.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    } else {
        cout << "-1" << endl;
    }
}

int main() {
    int A, B;

    cin >> A >> B;

    lucky_numbers_between(A, B);

    return 0;
}
