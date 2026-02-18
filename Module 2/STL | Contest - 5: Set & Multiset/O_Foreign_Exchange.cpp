#include <bits/stdc++.h>
using namespace std;

int main() {


    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<pair<long long, long long>, long long> mp;

        for (int i = 0; i < n; i++) {
            long long a, b;
            cin >> a >> b;
            mp[{a, b}]++;
        }

        bool possible = true;

        for (auto &it : mp) {
            long long a = it.first.first;
            long long b = it.first.second;

            if (mp[{a, b}] != mp[{b, a}]) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}
