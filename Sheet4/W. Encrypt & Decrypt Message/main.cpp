#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    string result;

    if (n == 1) // Encryption
    {
        for (int i = 0; i < s.size(); ++i)
        {
            size_t pos = Original.find(s[i]);
            if (pos != string::npos)
            {
                result += Key[pos];
            }
            else
            {
                result += s[i]; // If character is not found, keep it as it is.
            }
        }
    }
    else if (n == 2) // Decryption
    {
        for (int i = 0; i < s.size(); ++i)
        {
            size_t pos = Key.find(s[i]);
            if (pos != string::npos)
            {
                result += Original[pos];
            }
            else
            {
                result += s[i]; // If character is not found, keep it as it is.
            }
        }
    }

    cout << result << endl;

    return 0;
}
