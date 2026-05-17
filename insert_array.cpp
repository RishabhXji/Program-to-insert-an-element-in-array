#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n)) return 0;
    int arr[100];
    if (n < 0 || n > 99) { cout << "Invalid size\n"; return 0; }
    cout << "Enter elements:\n";
    for (int i = 0; i < n; ++i) cin >> arr[i];
    int pos, val;
    cout << "Enter position (0-based) to insert: ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> val;
    if (pos < 0 || pos > n) { cout << "Invalid position\n"; return 0; }
    for (int i = n; i > pos; --i) arr[i] = arr[i - 1];
    arr[pos] = val;
    ++n;
    cout << "Array after insertion:\n";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << "\n";
    return 0;
}
