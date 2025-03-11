//link: https://codeforces.com/contest/1559/problem/A
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		int ans = 0;
		for (auto &k : a) cin >> k;



		int num = (1 << 30) - 1;
		for (auto k : a) {
			num &= k;
		}

		cout << num << endl;

	}

	return 0;
}