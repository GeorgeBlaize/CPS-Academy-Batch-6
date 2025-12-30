#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(const string &s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    string S;
    cin >> S;
    int n = S.length();
    int maxLength = 1; 

    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPalindrome(S, i, j)) {
                maxLength = max(maxLength, j - i + 1);
            }
        }
    }

    cout << maxLength << endl;
    return 0;
}
