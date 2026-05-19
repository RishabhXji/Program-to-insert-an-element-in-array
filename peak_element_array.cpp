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

    cout << "Peak elements:\n";
    bool found = false;
    for (int i = 0; i < n; ++i) {
        bool leftOk = (i == 0 || arr[i] >= arr[i - 1]);
        bool rightOk = (i == n - 1 || arr[i] >= arr[i + 1]);

        if (leftOk && rightOk) {
            cout << arr[i] << " ";
            found = true;
        }
    }

    if (!found) cout << "No peak element";
    cout << "\n";

    return 0;
}
