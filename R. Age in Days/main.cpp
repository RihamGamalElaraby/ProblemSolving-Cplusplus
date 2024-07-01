#include <iostream>

using namespace std;

int main()
{
    long long x ;
    cin >> x ;
     long long years = x / 365 ;
     long long  remainingDays = x % 365;
      long long months = remainingDays / 30 ;
      long long days = remainingDays % 30 ;
      cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}
