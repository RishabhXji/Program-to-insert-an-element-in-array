#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Activity {
    int start;
    int finish;
    int index;
};

int main() {
    int n;
    cout << "Enter number of activities: ";
    if (!(cin >> n)) return 0;

    if (n <= 0) {
        cout << "Invalid number of activities\n";
        return 0;
    }

    vector<Activity> activities(n);
    cout << "Enter start and finish time of each activity:\n";
    for (int i = 0; i < n; ++i) {
        cin >> activities[i].start >> activities[i].finish;
        activities[i].index = i + 1;
    }

    sort(activities.begin(), activities.end(), [](const Activity& a, const Activity& b) {
        return a.finish < b.finish;
    });

    cout << "Selected activities:\n";
    int lastFinish = activities[0].finish;
    cout << "Activity " << activities[0].index << " (" << activities[0].start << ", " << activities[0].finish << ")\n";

    for (int i = 1; i < n; ++i) {
        if (activities[i].start >= lastFinish) {
            cout << "Activity " << activities[i].index << " (" << activities[i].start << ", " << activities[i].finish << ")\n";
            lastFinish = activities[i].finish;
        }
    }

    return 0;
}
