#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    string fullText;

    // Read lines until an empty line is encountered
    while (getline(cin, line)) {
        if (line.empty()) {
            break; // Stop reading when an empty line is encountered
        }
        fullText += line + '\n';
    }
    for (int i =0 ; i< fullText.size() ; i++)
    {
        if(fullText[i] == "\\" && fullText[i+1] == "*" )
        {

        }
    }
    return 0;
}
