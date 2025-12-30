#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> A(N - 1);
    for (int i = 0; i < N - 1; i++) {
        cin >> A[i];
    }

  
    for (int score = 0; score <= 100; score++) {
        vector<int> v = A;
        v.push_back(score);

        sort(v.begin(), v.end());

        int sum = 0;
       
        for (int i = 1; i <= N - 2; i++) {
            sum += v[i];
        }

        if (sum >= X) {
            cout << score << endl;
            return 0;
        }
    }

    
    cout << -1 << endl;
    return 0;
}
