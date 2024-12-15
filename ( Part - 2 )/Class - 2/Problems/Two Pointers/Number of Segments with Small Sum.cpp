//link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ll n, sum;
	cin >> n >> sum;

	vector<ll> a(n);

	for (auto &k : a) cin >> k;
	ll temp_sum = 0, ans = 0;
	int l = 0, r = 0;
	for (l = 0; l < n; l++) {

		while (r < n && temp_sum + a[r] <= sum) {
			temp_sum += a[r];
			r++;
		}
		ans += r - l;
		temp_sum -= a[l];
	}
	cout << ans << endl;



	return 0;
}