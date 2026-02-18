#include <bits/stdc++.h>
using namespace std;

int main() {
   

    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<bool> present(26, false);

    for (char c : s) {
        c = tolower(c);              
        present[c - 'a'] = true;     
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (present[i]) count++;
    }

    if (count == 26)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
