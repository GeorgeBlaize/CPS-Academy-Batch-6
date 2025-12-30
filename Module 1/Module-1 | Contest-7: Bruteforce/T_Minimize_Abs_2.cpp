#include <bits/stdc++.h>
using namespace std;

int main() {
    long long D;
    cin >> D;

    long long ans = LLONG_MAX;
    long long y = sqrt(D);

    for (long long x = 0; x * x <= D; x++) {
        while (y >= 0 && x * x + y * y > D) {
            y--;
        }

        if (y >= 0) {
            long long val = x * x + y * y;
            ans = min(ans, llabs(val - D));
        }

        if (y + 1 >= 0) {
            long long val = x * x + (y + 1) * (y + 1);
            ans = min(ans, llabs(val - D));
        }
    }

    cout << ans << endl;
    return 0;
}
