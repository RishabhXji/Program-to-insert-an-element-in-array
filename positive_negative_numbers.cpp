#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n)) return 0;

    if (n < 0) {
        cout << "Invalid size\n";
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    cout << "Positive numbers:\n";
    for (int value : arr) {
        if (value >= 0) cout << value << " ";
    }

    cout << "\nNegative numbers:\n";
    for (int value : arr) {
        if (value < 0) cout << value << " ";
    }
    cout << "\n";

    return 0;
}
