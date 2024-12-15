#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

bool comperator(pair<int, int> a, pair<int, int> b) {

	if (a.second == b.second) {
		return a.first < b.first;
	}

	return a.second < b.second; // Small to Large number
	//return a.second > b.second; // Large to Small number
}


int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	vector < pair<int, int> > p = {{1, 2}, {2, 3}, {4, 2}, {2, 1}, {1, 1}};

	sort(p.begin(), p.end(), comperator);
	for (auto &x : p) {
		cout << x.first << ' ' << x.second << endl;
	}

	return 0;
}