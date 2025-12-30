#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    int operations = 0;
   
    while (operations <= 6) {
        if (x.find(s) != string::npos) {
            cout << operations << endl;
            return;
        }
        x += x; 
        operations++;
    }

    cout << -1 << endl;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}