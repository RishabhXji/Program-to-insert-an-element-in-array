#include <algorithm>
#include <iostream>
#include <queue>
#include <set>
#include <tuple>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cout << "Enter size of arrays: ";
    if (!(cin >> n)) return 0;

    if (n <= 0) {
        cout << "Invalid size\n";
        return 0;
    }

    vector<int> a(n), b(n);
    cout << "Enter elements of first array:\n";
    for (int i = 0; i < n; ++i) cin >> a[i];

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < n; ++i) cin >> b[i];

    cout << "Enter K: ";
    cin >> k;

    if (k <= 0) {
        cout << "Invalid K\n";
        return 0;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    priority_queue<tuple<int, int, int>> pq;
    set<pair<int, int>> used;

    pq.push(make_tuple(a[n - 1] + b[n - 1], n - 1, n - 1));
    used.insert({n - 1, n - 1});

    cout << "K maximum sums:\n";
    int printed = 0;
    while (!pq.empty() && printed < k) {
        int sum, i, j;
        tie(sum, i, j) = pq.top();
        pq.pop();

        cout << sum << " ";
        ++printed;

        if (i - 1 >= 0 && used.count({i - 1, j}) == 0) {
            pq.push(make_tuple(a[i - 1] + b[j], i - 1, j));
            used.insert({i - 1, j});
        }

        if (j - 1 >= 0 && used.count({i, j - 1}) == 0) {
            pq.push(make_tuple(a[i] + b[j - 1], i, j - 1));
            used.insert({i, j - 1});
        }
    }

    cout << "\n";
    return 0;
}
