#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    map<string, int> freq;

    for (int i = 0; i < n - 1; i++) {
        string twoGram = s.substr(i, 2);
        freq[twoGram]++;
    }

    int mx = 0;
    string ans;

    for (auto &p : freq) {
        if (p.second > mx) {
            mx = p.second;
            ans = p.first;
        }
    }

    cout << ans << endl;
    return 0;
}
