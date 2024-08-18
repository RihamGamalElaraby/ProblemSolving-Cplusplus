#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);  // Get the entire line of input

    for (char x : s)  // Loop through each character in the string
    {
        if (x == '\\')  // If the character is a backslash, break the loop
        {
            break;
        }
        cout << x;  // Print the character
    }

    return 0;
}
