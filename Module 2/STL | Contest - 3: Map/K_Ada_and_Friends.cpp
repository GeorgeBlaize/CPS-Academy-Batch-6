#include<bits/stdc++.h>
using namespace std;

int main () {


	map < string, long long > totalCost;
	long long n, m;
	cin >> n >> m;
	string name;
	int cost = 0;
	vector < pair < long long, string > > sortedCost;
	for (long long i = 0; i < n; i++) {
		cin >> name >> cost;
		totalCost[name] += cost;
	}
	for (auto p : totalCost) {
		pair < long long, string > np = make_pair(p.second, p.first);
		sortedCost.push_back(np);
	}
	sort(sortedCost.begin(), sortedCost.end());
	long long savings = 0;
	while (sortedCost.size() && m) {
		savings += sortedCost.back().first;
		sortedCost.pop_back();
		m--;
	}
	cout << savings << endl;
} 