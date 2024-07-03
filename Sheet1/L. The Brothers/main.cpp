#include <iostream>
#include <string>

using namespace std;

int main()
{
    string firstName1, secondName1;
    string firstName2, secondName2;

    // Read the first name and second name of the first person
    cin >> firstName1 >> secondName1;
    // Read the first name and second name of the second person
    cin >> firstName2 >> secondName2;

    if (secondName1 == secondName2)
    {
        cout << "ARE Brothers" << endl;
    }
    else
    {
        cout << "NOT" << endl;
    }

    return 0;
}
