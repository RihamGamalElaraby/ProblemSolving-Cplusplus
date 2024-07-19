#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s ;
    cin >> s ;
      int upper = 0 ;
      int lower =0 ;
      for (int i = 0 ; i < s.length() ; i++)
      {
          if (s[i] >= 'A' && s[i] <= 'Z')
          {
               upper ++;
          } else if  (s[i] >= 'a' && s[i] <= 'z')
          {
               lower ++;
          }

      }
           if (lower < upper)
           {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
           } else if (lower > upper)
           {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
           } else
           {
                 transform(s.begin(), s.end(), s.begin(), ::tolower);

           }

           cout << s << endl ;
    return 0;
}
