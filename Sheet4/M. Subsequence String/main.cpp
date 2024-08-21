#include <iostream>

using namespace std;

int main()
{
    string s;                  // Declare a string variable to store the input
    cin >> s;                  // Read the input string from the user

    string target = "hello";   // Define the target sequence to look for
    int targetIndex = 0;       // Initialize the index for the target string

    for (char c : s) {         // Loop through each character in the input string
        if (c == target[targetIndex]) {  // Check if the current character matches the target character at targetIndex
            targetIndex++;    // Move to the next character in the target sequence
            if (targetIndex == target.size()) {  // Check if we have found all characters in the target sequence
                break;        // Exit the loop if the entire target sequence is found
            }
        }
    }

    if (targetIndex == target.size()) {  // If we have matched all characters in the target sequence
        cout << "YES";  // Output "YES" indicating that the sequence "hello" was found
    } else {
        cout << "NO";   // Output "NO" indicating that the sequence "hello" was not found
    }

    return 0;             // Return 0 to indicate successful completion
}
