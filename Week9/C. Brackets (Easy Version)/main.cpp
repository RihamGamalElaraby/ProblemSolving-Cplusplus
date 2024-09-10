#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isProperlyNested(const string& s) {
    stack<char> stk;

    for (char c : s) {
        if (c == '(') {
            // Push opening parenthesis onto the stack
            stk.push(c);
        } else if (c == ')') {
            // Check if there is a matching opening parenthesis
            if (!stk.empty()) {
                stk.pop();  // Found a matching pair
            } else {
                return false;  // No matching opening parenthesis
            }
        }
    }

    // If the stack is empty, all parentheses are properly nested
    return stk.empty();
}

int main() {
    string s;
    cin >> s;

    if (isProperlyNested(s)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
