#include <bits/stdc++.h>
using namespace std;

bool isValid(const string &b) {
    int balance = 0;
    for (char c : b) {
        if (c == '(') balance++;
        else balance--;
        if (balance < 0) return false;
    }
    return balance == 0;
}

int main() {
   

    int t;
    cin >> t;

    while (t--) {
        string a;
        cin >> a;
        int n = a.size();

        bool ok = false;

        for (int mask = 0; mask < 8; mask++) {
            map<char, char> mp;
            mp['A'] = (mask & 1) ? '(' : ')';
            mp['B'] = (mask & 2) ? '(' : ')';
            mp['C'] = (mask & 4) ? '(' : ')';

            string b;
            for (char c : a) {
                b += mp[c];
            }

            if (isValid(b)) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
