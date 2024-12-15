//link: https://vjudge.net/problem/SPOJ-INVCNT
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;


ll mergesort(vector<int> &a, ll start, ll end) {
	ll ans = 0;
	if (start < end) {
		ll mid = (start + end) / 2;

		ans += mergesort(a, start, mid);

		ans += mergesort(a, mid + 1, end);

		vector<int> s;

		for (int i = mid + 1; i <= end; i++) s.push_back(a[i]);

		sort(s.begin(), s.end());


		for (int i = start; i <= mid; i++) {
			ans += lower_bound(s.begin(), s.end(), a[i]) - s.begin();
		}
	}
	return ans;
}

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		ll i = 0;
		while (i < n) {
			ll x;
			cin >> x;
			a[i] = x;
			i++;
		}

		ll lo = 0;
		ll hi = n - 1;

		cout << mergesort(a, lo, hi) << endl;


	}


	return 0;
}