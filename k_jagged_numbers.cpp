#include <iostream>
using namespace std;

int main() {
    int k;
    cout << "Enter K: ";
    if (!(cin >> k)) return 0;

    if (k <= 0) {
        cout << "Invalid K\n";
        return 0;
    }

    cout << "K jagged number rows:\n";
    int value = 1;
    for (int row = 1; row <= k; ++row) {
        for (int col = 1; col <= row; ++col) {
            cout << value++ << " ";
        }
        cout << "\n";
    }

    return 0;
}
