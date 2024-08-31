#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    // Cost if using only single-ride tickets
    int single_ticket_cost = n * a;

    // Cost if using only m-ride tickets
    int m_tickets_needed = n / m;
    int remaining_rides = n % m;
    int special_ticket_cost = m_tickets_needed * b + min(remaining_rides * a, b); // min for covering remainder with either single rides or an extra m-ride ticket

    // Take the minimum of both options
    int minimum_cost = min(single_ticket_cost, special_ticket_cost);

    cout << minimum_cost << endl;
    return 0;
}
