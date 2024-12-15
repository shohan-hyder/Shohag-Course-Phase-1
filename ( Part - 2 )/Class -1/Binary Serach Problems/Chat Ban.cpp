#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
ll k, x;

bool check(ll mid) {
	ll total_emotes = 0;
	if (mid <= k) {
		total_emotes = (mid * (mid + 1)) / 2;
		//cout << "I'm here" << endl;
	}
	else {
		ll remain = k - 1;
		ll one_time_emotes = (k * (k + 1)) / 2;
		ll remain_delete = k - (mid % k) - 1;
		ll remain_emotes = ((remain * (remain + 1)) / 2) - ((remain_delete * (remain_delete + 1)) / 2);
		total_emotes = one_time_emotes + remain_emotes;
	}

// cout << "total = " << total_emotes << ", Mid = " << mid << endl;
	return total_emotes >= x;
}

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		cin >> k >> x;

		ll l = 1, r = (2 * k) - 1, ans = (2 * k) - 1 ;

		while (l <= r) {
			ll mid = l + (r - l) / 2;

			if (check(mid)) {
				ans = mid;
				r = mid - 1;
			}
			else {
				l = mid + 1;
			}
		}

		cout << ans << endl;

	}

	return 0;
}