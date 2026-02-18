#include <bits/stdc++.h>
using namespace std;

int main() {
  

    int N, Q;
    cin >> N >> Q;

    multiset<long long> S;

   
    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        S.insert(x);
    }

    while (Q--) {
        int type;
        cin >> type;

        if (type == 0) {
            long long x;
            cin >> x;
            S.insert(x);
        }
        else if (type == 1) {
            
            auto it = S.begin();
            cout << *it << "\n";
            S.erase(it);
        }
        else if (type == 2) {
           
            auto it = prev(S.end());
            cout << *it << "\n";
            S.erase(it);
        }
    }

    return 0;
}
