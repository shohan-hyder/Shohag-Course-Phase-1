//link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	ll sum;
	cin >> sum;
	vector<int> a(n);

	for (auto &k : a) cin >> k;

	int r = 0;
	ll temp_sum = 0;
	int ans = 0;
	for (int l = 0; l < n; l++) {

		while (r < n && a[r] + temp_sum <= sum) {
			temp_sum += a[r];
			r++;
		}

		//cout << r << ' ';
		ans = max(ans, r - l);
		temp_sum -= a[l];
	}

	cout << ans;

	return 0;
}