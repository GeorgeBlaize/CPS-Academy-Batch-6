#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    bool beautiful = false;
    for (int i = 1; i <= n; ++i) {
        long long a;
        cin >> a;
        if (a <= i) {
            beautiful = true;
        }
    }
    if (beautiful) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
