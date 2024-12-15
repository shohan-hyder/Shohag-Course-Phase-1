//Link: https://www.spoj.com/problems/MAIN8_C/
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
const int N = 5e4 + 7;
ll n, k;
ll a[N];

bool check( ll mid) {
	ll cnt = 0;

	for (int i = 1; i <= n; i++) {
		cnt += a[i] / mid;
	}

	return cnt >= k;
}

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tt;
	cin >> tt;
	while (tt--) {
		cin >> n >> k;

		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		ll l = 1, r = 1e9, ans = 0;

		while (l <= r) {
			ll mid = l + (r - l) / 2;

			if (check(mid)) {

				ans = mid;
				l = mid + 1;
			}
			else {
				r = mid - 1;
			}
		}

		cout << ans << endl;

	}


	return 0;
}