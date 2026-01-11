#include <bits/stdc++.h>
using namespace std;

int main() {
  

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string b;
        cin >> b;

        string a(n, '0');
        int last = -1; 
        for (int i = 0; i < n; i++) {
            if (b[i] == '1') {
               
                if (last != 2) {
                    a[i] = '1';
                    last = 2;
                } else {
                    a[i] = '0';
                    if (last != 1) last = 1;
                }
            } else { 
                
                if (last != 1) {
                    a[i] = '1';
                    last = 1;
                } else {
                    a[i] = '0';
                    if (last != 0) last = 0;
                }
            }
        }

        cout << a << "\n";
    }

    return 0;
}
