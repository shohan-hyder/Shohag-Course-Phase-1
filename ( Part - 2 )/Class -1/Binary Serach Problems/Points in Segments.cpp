#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	int k = 1;
	while (t--) {

		int n, q;
		cin >> n >> q;
		vector<int> a(n + 1);
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		cout << "Case " << k << ":" << endl;
		while (q--) {
			int l, r;
			cin >> l >> r;

			auto it_1 = lower_bound(a.begin() + 1, a.begin() + n + 1, l) - a.begin();
			auto it_2 = upper_bound(a.begin() + 1, a.begin() + n + 1, r) - a.begin();

			cout <<  it_2 - it_1 << endl;

		}

		k++;

	}

	return 0;
}