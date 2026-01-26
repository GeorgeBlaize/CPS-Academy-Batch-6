#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    long long b, d;
    cin >> n >> b >> d;

    long long current = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;

        if (a > b) continue;

        current += a;
        if (current > d) {
            ans++;
            current = 0;
        }
    }

    cout << ans <<endl;
    return 0;
}
