//Link: https://www.spoj.com/problems/SORT2D/
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {

	if (a.first > b.first) return true;
	else if (a.first == b.first) {
		if (a.second < b.second) {
			return true;
		}
	}


	return false;

}


int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<pair<int, int>> p;

		for (int i = 1; i <= n; i++) {
			int x, y;
			cin >> x >> y;
			p.push_back({x, y});
		}

		sort(p.rbegin(), p.rend(), cmp);

		for (auto &k : p) cout << k.first << ' ' << k.second << endl;
	}

	return 0;
}
