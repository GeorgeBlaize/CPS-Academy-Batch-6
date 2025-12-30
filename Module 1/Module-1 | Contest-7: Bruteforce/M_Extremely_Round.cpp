#include <iostream>
using namespace std;

int countExtremelyRound(int n) {
    int count = 0;
    
    for (int power = 1; power <= n; power *= 10) {
       
        for (int digit = 1; digit <= 9; digit++) {
            int num = digit * power;
            if (num <= n)
                count++;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << countExtremelyRound(n) << endl;
    }
    return 0;
}
