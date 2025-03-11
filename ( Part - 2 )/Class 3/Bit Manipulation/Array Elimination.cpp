//link: https://codeforces.com/contest/1601/problem/A
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
		vector<int> a(n), bit_cnt(30, 0);

		for (auto &k : a) {
			cin >> k;
			for (int i = 0; i < 30; i++) {
				if ((k >> i) & 1) {
					bit_cnt[i]++;
				}
			}
		}

		for (int k = 1; k <= n; k++) {
			bool c = true;
			for (int i = 0; i < 30; i++) {
				if (bit_cnt[i] % k != 0 ) {
					c = false;
				}
			}
			if (c) {
				cout << k << ' ';
			}
		}
		cout << endl;

	}

	return 0;
}