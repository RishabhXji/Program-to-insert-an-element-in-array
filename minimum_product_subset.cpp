#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n)) return 0;

    if (n <= 0) {
        cout << "Invalid size\n";
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    if (n == 1) {
        cout << "Minimum product subset: " << arr[0] << "\n";
        return 0;
    }

    int negativeCount = 0, zeroCount = 0;
    int maxNegative = INT_MIN;
    int minPositive = INT_MAX;
    long long product = 1;

    for (int value : arr) {
        if (value == 0) {
            ++zeroCount;
            continue;
        }

        if (value < 0) {
            ++negativeCount;
            maxNegative = max(maxNegative, value);
        } else {
            minPositive = min(minPositive, value);
        }

        product *= value;
    }

    if (zeroCount == n || (negativeCount == 0 && zeroCount > 0)) {
        cout << "Minimum product subset: 0\n";
        return 0;
    }

    if (negativeCount == 0) {
        cout << "Minimum product subset: " << minPositive << "\n";
        return 0;
    }

    if (negativeCount % 2 == 0) {
        product /= maxNegative;
    }

    cout << "Minimum product subset: " << product << "\n";
    return 0;
}
