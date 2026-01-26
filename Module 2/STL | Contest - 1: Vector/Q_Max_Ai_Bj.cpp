#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int N;
    cin >> N;

    long long maxA = LLONG_MIN, maxB = LLONG_MIN;
    long long x;

    for (int i = 0; i < N; i++) {
        cin >> x;
        maxA = max(maxA, x);
    }

    for (int i = 0; i < N; i++) {
        cin >> x;
        maxB = max(maxB, x);
    }

    cout << maxA + maxB <<endl;

    return 0;
}
