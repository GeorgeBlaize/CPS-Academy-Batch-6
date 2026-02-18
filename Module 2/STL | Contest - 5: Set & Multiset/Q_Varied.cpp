#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    vector<bool> visited(26, false);

    for (char c : S) {
        if (visited[c - 'a']) {
            cout << "no\n";
            return 0;
        }
        visited[c - 'a'] = true;
    }

    cout << "yes\n";
    return 0;
}
