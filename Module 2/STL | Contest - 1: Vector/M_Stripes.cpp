#include <bits/stdc++.h>
using namespace std;

int main() {
   

    int t;
    cin >> t;

    while (t--) {
        vector<string> grid(8);
        for (int i = 0; i < 8; i++) {
            cin >> grid[i];
        }

        bool redLast = false;

        for (int i = 0; i < 8; i++) {
            bool fullRed = true;
            for (int j = 0; j < 8; j++) {
                if (grid[i][j] != 'R') {
                    fullRed = false;
                    break;
                }
            }
            if (fullRed) {
                redLast = true;
                break;
            }
        }

        cout << (redLast ? 'R' : 'B') <<endl;
    }

    return 0;
}
