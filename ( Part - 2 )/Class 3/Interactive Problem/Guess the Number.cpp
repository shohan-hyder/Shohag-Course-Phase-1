#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

string check(ll mid) {
	cout << mid << endl;
	string s;
	cin >> s;
	cout.flush();
	return s;
}

int32_t main() {
	ios_base :: sync_with_stdio(0);

	ll l = 1, r = 1e6, ans = 0;

	while (l <= r) {
		ll mid = (l + r) / 2;

		if (check(mid) == ">=") {

			ans = mid;
			l = mid + 1;
		}
		else {

			r = mid - 1;
		}
	}

	cout << "! " << ans << endl;

	return 0;
}
