#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isProperlyNested(const string& s) {
    stack<char> stk;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            stk.push(c);
        } else {
            // If stack is empty and we encounter a closing bracket, it's invalid
            if (stk.empty()) return false;

            // Check if the top of the stack matches the closing bracket
            char top = stk.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '[')) {
                stk.pop();  // Pop the matching opening bracket
            } else {
                return false;  // Mismatched brackets
            }
        }
    }

    // Stack should be empty if all brackets were properly matched
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
