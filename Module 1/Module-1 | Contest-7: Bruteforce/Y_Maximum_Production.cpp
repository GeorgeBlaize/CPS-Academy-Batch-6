#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int d, x, y, z;
        cin >> d >> x >> y >> z;

        int total1 = 7 * x;

        int total2 = y * d + z * (7 - d);

        cout << max(total1, total2) << endl;
    }
    return 0;
}
