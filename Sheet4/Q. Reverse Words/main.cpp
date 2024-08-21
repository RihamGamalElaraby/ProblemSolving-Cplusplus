#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
