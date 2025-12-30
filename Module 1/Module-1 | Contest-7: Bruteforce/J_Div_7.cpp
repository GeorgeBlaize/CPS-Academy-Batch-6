#include <bits/stdc++.h>
using namespace std;

int main() {
 

    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        int n = stoi(s);

       
        if (n % 7 == 0) {
            cout << n << "\n";
            continue;
        }

        int len = s.size();
        bool done = false;

        
        for (int i = 0; i < len && !done; i++) {
            char original = s[i];

            for (char d = '0'; d <= '9'; d++) {
                if (i == 0 && d == '0') continue; 
                if (d == original) continue;

                s[i] = d;
                int val = stoi(s);

                if (val % 7 == 0) {
                    cout << val << "\n";
                    done = true;
                    break;
                }
            }
            s[i] = original; 
        }
    }
    return 0;
}
