#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        long long xK, yK, xQ, yQ;
        cin >> a >> b >> xK >> yK >> xQ >> yQ;

        vector<pair<long long, long long>> moves = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b},
            {b, a}, {b, -a}, {-b, a}, {-b, -a}
        };

        set<pair<long long, long long>> validPositions;

        
        for (auto &mk : moves) {
            long long x = xK - mk.first;
            long long y = yK - mk.second;

            
            for (auto &mq : moves) {
                if (x + mq.first == xQ && y + mq.second == yQ) {
                    validPositions.insert({x, y});
                    break;
                }
            }
        }

        cout << validPositions.size() << endl;
    }
    return 0;
}
