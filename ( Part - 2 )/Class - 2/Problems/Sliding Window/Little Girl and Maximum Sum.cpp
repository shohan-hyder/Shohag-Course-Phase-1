//link: https://codeforces.com/contest/276/problem/C
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, q;
	cin >> n >> q;
	vector<int> a(n + 1);
	vector<int> prefix(n + 1, 0);

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	while (q--) {
		int l, r;
		cin >> l >> r;
		prefix[l]++;

		if (r + 1 <= n) prefix[r + 1]--;
	}
	int temp_sum = 0;
	for (int i = 1; i <= n; i++) {
		temp_sum += prefix[i];
		prefix[i] = temp_sum;
	}

	sort(prefix.begin(), prefix.end());
	ll ans = 0;

	for (int i = 1; i <= n; i++) {
		ans += (1ll * a[i] * prefix[i]);
	}



	cout << ans << endl;

	return 0;
}