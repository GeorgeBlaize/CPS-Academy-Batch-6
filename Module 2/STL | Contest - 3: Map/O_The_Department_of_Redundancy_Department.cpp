#include<bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> freq;
    vector<int> order;
    int x;

  
    while (cin >> x) {
        if (freq.find(x) == freq.end()) {
            order.push_back(x);  // store first occurrence
        }
        freq[x]++;
    }

    for (int num : order) {
        cout << num << " " << freq[num] << "\n";
    }

    return 0;
}
