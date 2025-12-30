#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int t;
    cin >> t;

    while (t--) {
        vector<string> g(3);
        for (int i = 0; i < 3; i++) {
            cin >> g[i];
        }

        string result = "DRAW";

     
        for (int i = 0; i < 3; i++) {
            if (g[i][0] != '.' &&
                g[i][0] == g[i][1] &&
                g[i][1] == g[i][2]) {
                result = string(1, g[i][0]);
            }
        }
        
        for (int j = 0; j < 3; j++) {
            if (g[0][j] != '.' &&
                g[0][j] == g[1][j] &&
                g[1][j] == g[2][j]) {
                result = string(1, g[0][j]);
            }
        }

        
        if (g[0][0] != '.' &&
            g[0][0] == g[1][1] &&
            g[1][1] == g[2][2]) {
            result = string(1, g[0][0]);
        }

        if (g[0][2] != '.' &&
            g[0][2] == g[1][1] &&
            g[1][1] == g[2][0]) {
            result = string(1, g[0][2]);
        }

        cout << result << "\n";
    }

    return 0;
}
