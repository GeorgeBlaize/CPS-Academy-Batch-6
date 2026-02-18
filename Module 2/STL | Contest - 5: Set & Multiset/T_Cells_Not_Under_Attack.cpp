#include <bits/stdc++.h>
using namespace std;

int main() {
   

    long long n, m;
    cin >> n >> m;

    vector<bool> rowUsed(n + 1, false);
    vector<bool> colUsed(n + 1, false);

    long long R = 0; 
    long long C = 0; 

    for (int i = 0; i < m; i++) {
        long long x, y;
        cin >> x >> y;

        if (!rowUsed[x]) {
            rowUsed[x] = true;
            R++;
        }

        if (!colUsed[y]) {
            colUsed[y] = true;
            C++;
        }

        long long safeCells = (n - R) * (n - C);
        cout << safeCells << " ";
    }

    return 0;
}
