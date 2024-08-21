#include <iostream>
#include <sstream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string url;
    getline(cin, url);

    // Extract the query part of the URL
    size_t pos = url.find('?');
    if (pos == string::npos) {
        cerr << "Invalid URL format: missing query part." << endl;
        return 1;
    }

    string query = url.substr(pos + 1);
    stringstream ss(query);
    string item;
    map<string, string> params;

    // Extract each parameter-value pair
    while (getline(ss, item, '&')) {
        size_t equalPos = item.find('=');
        if (equalPos != string::npos) {
            string key = item.substr(0, equalPos);
            string value = item.substr(equalPos + 1);
            params[key] = value;  // Insert or update the key-value pair
        }
    }

    // Parameters to output in the specified order
    const string parameters[] = {"username", "pwd", "profile", "role", "key"};

    // Print the results in the specified format
    for (const string &param : parameters) {
        if (params.find(param) != params.end()) {
            cout << param << ": " << params[param] << endl;
        }
    }

    return 0;
}
