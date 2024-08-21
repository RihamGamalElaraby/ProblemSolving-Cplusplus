#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int countL = 0, countR = 0;
    vector<string> words;
    int start = 0;  // to keep track of the start of a balanced substring

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'R')
        {
            countR += 1;
        }
        else if (s[i] == 'L')
        {
            countL += 1;
        }

        // When we find a balanced substring
        if (countL == countR)
        {
            string neww = s.substr(start, i - start + 1);
            words.push_back(neww);
            start = i + 1; // move the start to the next character after the current balanced substring
        }
    }

    cout << words.size() << endl;
    for (const string &word : words)
    {
        cout << word << endl;
    }

    return 0;
}
