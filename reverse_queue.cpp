#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    int n;
    cout << "Enter number of queue elements: ";
    if (!(cin >> n)) return 0;

    if (n < 0) {
        cout << "Invalid size\n";
        return 0;
    }

    queue<int> q;
    cout << "Enter queue elements:\n";
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        q.push(value);
    }

    stack<int> st;
    while (!q.empty()) {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    cout << "Queue after reversing:\n";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";

    return 0;
}
