#include <iostream>
#include <limits>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    double x, y;
    double costperkilo;
    double minimun = numeric_limits<double>::max(); // Initialize with a large number

    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        costperkilo = x / y;
        if (costperkilo < minimun) {
            minimun = costperkilo;
        }
    }

    cout.precision(8);
    cout << fixed << minimun * m << endl; // Multiply by m to get the total cost for m kilos

    return 0;
}




/* #include <iostream>




using namespace std ;

 int main (){
 int n , m ;
 cin >> n , m ;
  double x ,y ;
  double costperkilo ;
  double minimun ;
 for(int i = 0 ; i< n ; ++i )
 {
     cin >> x >> y ;
     costperkilo = x/y ;
     if (costperkilo < minimun )
     {
         minimun == costperkilo;
         cout >> minimun ;
     }
 }

 }

 return 0 ;}


/*


#include <vector>
#include <iomanip> // for std::setprecision
#include <limits>  // for std::numeric_limits
#include <utility> // for std::pair and std::make_pair

using namespace std;

double minimum_cost_apples(int n, int m, vector<pair<int, int>>& supermarkets) {
    double min_cost_per_kilo = numeric_limits<double>::infinity();

    // Iterate through each supermarket
    for (int i = 0; i < n; ++i) {
        int a = supermarkets[i].first;
        int b = supermarkets[i].second;

        // Calculate cost per kilo for this supermarket
        double cost_per_kilo = static_cast<double>(a) / b;

        // Update minimum cost per kilo found so far
        if (cost_per_kilo < min_cost_per_kilo) {
            min_cost_per_kilo = cost_per_kilo;
        }
    }

    // Calculate total minimum cost for m kilos
    double min_total_cost = m * min_cost_per_kilo;

    return min_total_cost;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> supermarkets(n);

    // Read each supermarket's prices
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        supermarkets[i] = make_pair(a, b);
    }

    // Calculate the minimum cost to buy m kilos of apples
    double result = minimum_cost_apples(n, m, supermarkets);

    // Output the result with precision up to 8 decimal places
    cout << fixed << setprecision(8) << result << endl;

    return 0;
}
*/
