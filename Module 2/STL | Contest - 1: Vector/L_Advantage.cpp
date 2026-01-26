#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        
        long long mx = -1, smx = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] > mx) {
                smx = mx;
                mx = s[i];
            } else if (s[i] > smx) {
                smx = s[i];
            }
        }

        
        for (int i = 0; i < n; i++) {
            if (s[i] == mx)
                cout << s[i] - smx << " ";
            else
                cout << s[i] - mx << " ";
        }
        cout <<endl;
    }

    return 0;
}
