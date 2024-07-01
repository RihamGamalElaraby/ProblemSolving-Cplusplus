#include <iostream>
#include <algorithm> // Include the algorithm header for the sort function

using namespace std;

int main()
{
       long long  x ,y ,z ;
      cin >> x >> y >> z ;
      long long  arr[3] = { x ,y ,z };
      sort (arr , arr+3);
      for (int i = 0 ; i < 3 ; i++)
      {
       cout << arr[i] << endl;
      }
     cout << endl;

    // Print the original numbers in the sequence they were read
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    return 0;
}
