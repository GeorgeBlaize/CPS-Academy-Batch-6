#include<iostream>
#include <string>
#include <set>      
#include <sstream>
using namespace std;

int main() {
  

    string line;

    while (true) {
        getline(cin, line);

        if (line == "#")
            break;

        set<string> words;
        stringstream ss(line);
        string word;

        while (ss >> word) {
            words.insert(word);
        }

        cout << words.size() << "\n";
    }

    return 0;
}
