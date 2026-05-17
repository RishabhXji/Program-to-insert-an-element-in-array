#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n)) return 0;

    int arr[100];
    if (n < 0 || n > 100) {
        cout << "Invalid size\n";
        return 0;
    }

    cout << "Enter elements:\n";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Array in ascending order:\n";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << "\n";

    cout << "Array in descending order:\n";
    for (int i = n - 1; i >= 0; --i) cout << arr[i] << " ";
    cout << "\n";

    return 0;
}
