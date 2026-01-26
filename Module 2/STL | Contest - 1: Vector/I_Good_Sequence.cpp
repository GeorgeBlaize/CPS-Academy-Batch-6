#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int N;
    cin >> N;

    unordered_map<long long, long long> freq;
    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        freq[x]++;
    }

    long long removals = 0;

    for (auto &p : freq) {
        long long x = p.first;
        long long cnt = p.second;

        if (cnt >= x) {
            removals += (cnt - x);
        } else {
            removals += cnt;
        }
    }

    cout << removals << "\n";
    return 0;
}
