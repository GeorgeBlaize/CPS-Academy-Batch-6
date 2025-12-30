#include <bits/stdc++.h>
using namespace std;


bool isBeautiful(int a, int b, int c, int d) {
    return (a < b && c < d && a < c && b < d);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool can = false;
        
        for (int i = 0; i < 4; i++) {
            if (isBeautiful(a, b, c, d)) {
                can = true;
                break;
            }
            
            int temp = a;
            a = c;
            c = d;
            d = b;
            b = temp;
        }

        cout << (can ? "YES" : "NO") << endl;
    }
    return 0;
}
