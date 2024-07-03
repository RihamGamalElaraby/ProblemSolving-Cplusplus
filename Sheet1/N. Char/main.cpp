#include <iostream>

using namespace std;

int main()
{
    char x;
    cin >> x;

    // Check if the character is lowercase
    if (x >= 'a' && x <= 'z') {
        cout << char(x - 32) << endl;  // Convert to uppercase
    }
    // Check if the character is uppercase
    else if (x >= 'A' && x <= 'Z') {
        cout << char(x + 32) << endl;  // Convert to lowercase
    }

    return 0;
}
