#include <iostream>
#include <string>

using namespace std;
int removeZeros (int num)
{
     string num_str= to_string (num) ;
     string noZerostr = "";
     for (char c : num_str )
     {
         if ( c!= '0')
         {
            noZerostr +=c ;
         }
     }
    return stoi (noZerostr)  ;
}
int main()
{
    int a, b ;
    cin >> a >> b ;
    int sum = a+ b ;
     int a_Str = removeZeros (a) ;
     int  b_Str =removeZeros (b) ;
     int sum_str= removeZeros (sum) ;

if (a_Str + b_Str ==sum_str )
{
    cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

        return 0;
}
