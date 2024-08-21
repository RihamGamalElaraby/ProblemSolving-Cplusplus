#include <iostream>
#include <map> // Use map instead of unordered_map

using namespace std;

int main()
{
    string s;
    cin >> s;

    map<char, int> frequencyMap; // map to store frequencies and keep characters sorted

    // Calculate frequency of each character
    for (int i = 0; i < s.size(); ++i)
    {
        frequencyMap[s[i]]++;
    }

    // Print characters and their frequencies in ascending order
    for (const auto& i : frequencyMap)
    {
        cout << i.first << " : " << i.second << endl;
    }

    return 0;
}
