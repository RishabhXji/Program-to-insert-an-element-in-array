#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    if (!(cin >> n)) return 0;

    if (n <= 0) {
        cout << "Enter a positive number\n";
        return 0;
    }

    int count = 0;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            if (i == n / i) {
                ++count;
            } else {
                count += 2;
            }
        }
    }

    cout << "Total divisors: " << count << "\n";
    return 0;
}
