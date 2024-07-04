#include <iostream>

using namespace std;

int main()
{
    const int correct = 1999 ;
    int password ;

    while (true)
    {
        cin >> password ;
        if (password != correct)
        {
             cout << "Wrong" << endl ;
        } else
        {
             cout << "Correct" << endl;
            break ;
        }
    }

    return 0;
}
