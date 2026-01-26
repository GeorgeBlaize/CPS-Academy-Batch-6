#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    vector<bool> hasTaro(N + 1, false);

    for (int i = 0; i < M; i++) {
        int A;
        char B;
        cin >> A >> B;

        if (B == 'M' && !hasTaro[A]) {
            cout << "Yes\n";
            hasTaro[A] = true;
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
