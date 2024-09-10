#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        if (s == "push") {
            int n;
            cin >> n;
            st.push(n);
        }
        else if (s == "pop") {
            st.pop();
        }
        else if (s == "top") {
            cout << st.top() << endl;
        }
    }
    return 0;
}
