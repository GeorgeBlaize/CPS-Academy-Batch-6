#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> s;
    int x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }

    if (s.size() < 2) {
        cout << "NO\n";
    } else {
        auto it = s.begin();
        ++it;  
        cout << *it << "\n";
    }

    return 0;
}
