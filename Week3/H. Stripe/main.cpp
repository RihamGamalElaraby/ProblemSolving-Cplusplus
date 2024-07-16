#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int count_partitions(int n, vector<int>& numbers) {
    int total_sum = 0;
    for (int i = 0; i < n; ++i) {
        total_sum += numbers[i];
    }

    if (total_sum % 2 != 0) {
        return 0;
    }

    int target_sum = total_sum / 2;
    int prefix_sum = 0;
    int count = 0;
    unordered_map<int, int> prefix_sum_count;

    for (int i = 0; i < n; ++i) {
        prefix_sum += numbers[i];

        if (prefix_sum == target_sum) {
            count++;
        }

        if (prefix_sum_count.find(prefix_sum - target_sum) != prefix_sum_count.end()) {
            count += prefix_sum_count[prefix_sum - target_sum];
        }

        prefix_sum_count[prefix_sum]++;
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    int result = count_partitions(n, numbers);
    cout << result << endl;

    return 0;
}
