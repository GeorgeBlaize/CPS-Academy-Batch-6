#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int N;
    cin >> N;

    vector<pair<long long, long long>> events;

    for (int i = 0; i < N; i++) {
        long long W, X;
        cin >> W >> X;

       
        long long L = 9 - X;
        long long R = 17 - X;

        
        auto norm = [](long long x) {
            x %= 24;
            if (x < 0) x += 24;
            return x;
        };

        L = norm(L);
        R = norm(R);

        if (L <= R) {
           
            events.push_back({L, +W});
            events.push_back({R + 1, -W});

           
            events.push_back({L + 24, +W});
            events.push_back({R + 1 + 24, -W});
        } else {
           
            events.push_back({L, +W});
            events.push_back({24, -W});

            
            events.push_back({0, +W});
            events.push_back({R + 1, -W});

            
            events.push_back({L + 24, +W});
            events.push_back({48, -W});

            events.push_back({24, +W});
            events.push_back({R + 1 + 24, -W});
        }
    }

    sort(events.begin(), events.end());

    long long current = 0, answer = 0;
    for (auto &[time, delta] : events) {
        current += delta;
        answer = max(answer, current);
    }

    cout << answer << "\n";
    return 0;
}
