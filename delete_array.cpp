#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n)) return 0;
    int arr[100];
    if (n < 0 || n > 100) { cout << "Invalid size\n"; return 0; }
    cout << "Enter elements:\n";
    for (int i = 0; i < n; ++i) cin >> arr[i];
    int pos;
    cout << "Enter position (0-based) to delete: ";
    cin >> pos;
    if (pos < 0 || pos >= n) { cout << "Invalid position\n"; return 0; }
    for (int i = pos; i < n - 1; ++i) arr[i] = arr[i + 1];
    --n;
    cout << "Array after deletion:\n";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << "\n";
    return 0;
}
