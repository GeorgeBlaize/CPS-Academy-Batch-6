#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int N;
    cin >> N;

    vector<int> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    int first = H[0];

    for (int i = 1; i < N; i++) {
        if (H[i] > first) {
            cout << i + 1 <<endl; 
            return 0;
        }
    }

    cout << -1 <<endl;
    return 0;
}
