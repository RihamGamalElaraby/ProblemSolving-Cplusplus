#include <iostream>
#include <vector>
#include <numeric>  // For std::accumulate

using namespace std;

int solution(std::vector<int> &A) {
    int N = A.size();
    // Calculate the expected sum of integers from 1 to N+1
    long long expected_sum = static_cast<long long>(N + 1) * (N + 2) / 2;
    // Calculate the actual sum of the given array
    long long actual_sum = std::accumulate(A.begin(), A.end(), 0LL);
    // The missing element
    return static_cast<int>(expected_sum - actual_sum);
}

int main() {
    // Example test case
    vector<int> A = {2, 3, 1, 5};  // Missing element should be 4

    int missing_element = solution(A);
    cout << "The missing element is: " << missing_element << endl;

    return 0;
}
