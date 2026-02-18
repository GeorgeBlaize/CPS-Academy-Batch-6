#include <bits/stdc++.h>
using namespace std;

int main() {
   
    set<pair<int,int>> clients;  


    while (true) {
        int type;
        cin >> type;

        if (type == 0) {
            break;
        }
        else if (type == 1) {
            int k, p;
            cin >> k >> p;
            clients.insert({p, k});
        }
        else if (type == 2) {
            if (clients.empty()) {
                cout << 0 << "\n";
            } else {
                auto it = prev(clients.end()); // highest priority
                cout << it->second << "\n";
                clients.erase(it);
            }
        }
        else if (type == 3) {
            if (clients.empty()) {
                cout << 0 << "\n";
            } else {
                auto it = clients.begin(); // lowest priority
                cout << it->second << "\n";
                clients.erase(it);
            }
        }
    }

    return 0;
}
