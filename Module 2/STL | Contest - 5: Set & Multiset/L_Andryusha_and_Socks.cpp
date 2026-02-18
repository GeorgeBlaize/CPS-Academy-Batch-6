#include <bits/stdc++.h>
using namespace std;

int main() {
   

    int n;
    cin >> n;

    vector<int> socks(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> socks[i];
    }

    vector<bool> onTable(n + 1, false);

    int current = 0;
    int maximum = 0;

    for (int i = 0; i < 2 * n; i++) {
        int pairNumber = socks[i];

        if (!onTable[pairNumber]) {
           
            onTable[pairNumber] = true;
            current++;
            maximum = max(maximum, current);
        } else {
         
            onTable[pairNumber] = false;
            current--;
        }
    }

    cout << maximum << "\n";

    return 0;
}
