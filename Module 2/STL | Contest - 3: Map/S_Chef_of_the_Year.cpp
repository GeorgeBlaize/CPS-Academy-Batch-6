#include<bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    map<string, string> chefCountry;
    map<string, int> chefVotes;
    map<string, int> countryVotes;

    string chef, country;

    for (int i = 0; i < N; i++) {
        cin >> chef >> country;
        chefCountry[chef] = country;
        chefVotes[chef] = 0;
        countryVotes[country] = 0;
    }

    
    for (int i = 0; i < M; i++) {
        cin >> chef;

        chefVotes[chef]++;
        countryVotes[chefCountry[chef]]++;
    }

   
    string bestChef;
    int maxChefVotes = -1;

    for (auto &p : chefVotes) {
        if (p.second > maxChefVotes) {
            maxChefVotes = p.second;
            bestChef = p.first;
        }
    }

   
    string bestCountry;
    int maxCountryVotes = -1;

    for (auto &p : countryVotes) {
        if (p.second > maxCountryVotes) {
            maxCountryVotes = p.second;
            bestCountry = p.first;
        }
    }

    cout << bestCountry << "\n";
    cout << bestChef << "\n";

    return 0;
}
