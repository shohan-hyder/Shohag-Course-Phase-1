//link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

struct Segment {
	multiset<ll> num;
	void add(ll x) {
		num.insert(x);
	}

	ll get_max() {
		return *(--num.end());
	}

	ll get_min() {
		return *num.begin();
	}

	void erase(ll x) {
		num.erase(num.find(x));
	}

	ll check() {
		return get_max() - get_min();
	}


} Segment;


int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ll n, k;
	cin >> n >> k;

	vector<ll> a(n);

	for (auto &p : a) cin >> p;
	ll ans = 0;
	ll r = 0;
	for (int i = 0; i < n; i++) {
		while (r < n) {
			Segment.add(a[r]);
			ll check_num = Segment.check();
			if (check_num > k) {
				Segment.erase(a[r]);
				break;
			}

			r++;
		}

		ans += r - i;
		//cout << i << " -- " << r << " " << ans << endl;
		Segment.erase(a[i]);
	}

	cout << ans << endl;

	return 0;
}
