#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;


    for(int i = 0; i < t; i++) {

        long long n;
        cin >> n;
        vector<long long> terms;
        long long power = 1;
        while(n > 0) {
            int digit = n % 10;
            if(digit != 0) {
                terms.push_back((long long)digit * power);
            }
            n /= 10;
            power *= 10;
        }
        cout << terms.size() << endl;
        
        for(auto term : terms) {
            cout << term << " ";
        }
        cout << endl;
    }


    return 0;
}