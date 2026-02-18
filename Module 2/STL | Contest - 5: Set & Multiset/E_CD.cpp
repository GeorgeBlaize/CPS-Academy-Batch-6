#include <bits/stdc++.h>
using namespace std;

int main() {
  

    while (true) {
        int N, M;
        cin >> N >> M;

        if (N == 0 && M == 0)
            break;

        vector<long long> jack(N), jill(M);

        for (int i = 0; i < N; i++)
            cin >> jack[i];

        for (int i = 0; i < M; i++)
            cin >> jill[i];

        int i = 0, j = 0;
        int common = 0;


        while (i < N && j < M) {
            if (jack[i] == jill[j]) {
                common++;
                i++;
                j++;
            }
            else if (jack[i] < jill[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        cout << common << "\n";
    }

    return 0;
}
