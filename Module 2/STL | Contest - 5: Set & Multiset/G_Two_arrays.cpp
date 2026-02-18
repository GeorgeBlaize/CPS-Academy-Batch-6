#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main() {
   

    int n, m;

   
    if (!(std::cin >> n)) return 0;
    vector<int> firstArray(n);
    for (int i = 0; i < n; ++i) {
        cin >> firstArray[i];
    }

    
    if (!(cin >> m)) return 0;
    set<int> secondArraySet;
    for (int i = 0; i < m; ++i) {
        int val;
        cin >> val;
        secondArraySet.insert(val);
    }

   
    vector<int> result;
    for (int x : firstArray) {
        if (secondArraySet.find(x) == secondArraySet.end()) {
            result.push_back(x);
        }
    }


    cout << result.size() << "\n";


    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << (i == result.size() - 1 ? "" : " ");
    }
       cout << endl;

    return 0;
}
