#include <iostream>
#include <string.h>
using namespace std;

int main()
{   int n ;
    cin >> n ;

    while (n--)
    {string s1 ;
    cin >> s1 ;
    string s2 = "101" ;
    string s3 = "010" ;
    if (s1.find(s2) != std::string::npos) {
    std::cout << "Good" << '\n';
                                        }
    else if (s1.find(s3) != std::string::npos) {
    std::cout << "Good" << '\n';
                                        }
    else {
         std::cout << "Bad" << '\n';
    }

}    return 0;
}
