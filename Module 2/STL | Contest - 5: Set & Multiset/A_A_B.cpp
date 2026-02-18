#include <iostream>
#include <set>
using namespace std;

int main() {
  

    int n, m;

   
    while (cin >> n >> m) {

        set<int> s;
        int x;

       
        for (int i = 0; i < n; i++) {
            cin >> x;
            s.insert(x);
        }

        for (int i = 0; i < m; i++) {
            cin >> x;
            s.insert(x);
        }

     
        bool first = true;
        for (int val : s) {
            if (!first) cout << " ";
            cout << val;
            first = false;
        }
        cout << "\n";
    }

    return 0;
}
