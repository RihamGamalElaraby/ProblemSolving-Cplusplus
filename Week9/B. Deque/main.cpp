#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> q;
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        if (s == "push_back") {
            int x;
            cin >> x;
            q.push_back(x);
        }
        else if (s == "push_front") {
            int x;
            cin >> x;
            q.push_front(x);
        }
        else if (s == "front") {
            cout << q.front() << "\n";
        }
        else if (s == "back") {
            cout << q.back() << "\n";
        }
        else if (s == "pop_front") {
            q.pop_front();
        }
        else if (s == "pop_back") {
            q.pop_back();
        }
        else if (s == "print") {
            int x;
            cin >> x;
            cout << q[x - 1] << "\n";  // Convert 1-based index to 0-based index
        }
    }
    return 0;
}
