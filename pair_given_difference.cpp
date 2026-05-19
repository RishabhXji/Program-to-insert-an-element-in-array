#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, diff;
    cout << "Enter number of elements: ";
    if (!(cin >> n)) return 0;

    if (n <= 0) {
        cout << "Invalid size\n";
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    cout << "Enter difference: ";
    cin >> diff;
    diff = abs(diff);

    sort(arr.begin(), arr.end());

    int i = 0, j = 1;
    while (i < n && j < n) {
        if (i != j && arr[j] - arr[i] == diff) {
            cout << "Pair found: " << arr[i] << " " << arr[j] << "\n";
            return 0;
        }

        if (arr[j] - arr[i] < diff) {
            ++j;
        } else {
            ++i;
        }

        if (i == j) ++j;
    }

    cout << "No pair found\n";
    return 0;
}
