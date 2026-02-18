#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int N, K;
    cin >> N >> K;

    unordered_set<int> s;
    s.reserve(N);

    int x;
    for (int i = 0; i < N; i++) {
        cin >> x;
        s.insert(x);
    }

    long long countPairs = 0;

    for (auto num : s) {
        if (s.count(num + K)) {
            countPairs++;
        }
    }

    cout << countPairs << "\n";

    return 0;
}
