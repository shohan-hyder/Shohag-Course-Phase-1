//link: https://vjudge.net/problem/SPOJ-BUBBLESORT
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
const int MOD = 10000007;

ll mergeprocess(vector<int> &a, ll start, ll mid, ll end) {

	ll ans = 0;
	ll p1 = mid - start + 1;
	ll p2 = end - mid;

	vector<int> f(p1);
	vector<int> s(p2);

	for (int i = 0; i < p1; i++) f[i] = a[start + i];

	for (int i = 0; i < p2; i++) s[i] = a[mid + i + 1];

	int lo = 0;
	int high = 0;
	int track = start;

	while (lo < p1 && high < p2) {

		if (f[lo] > s[high]) {
			a[track] = s[high];
			ans += ( p1 - lo );
			ans %= MOD;
			track++;
			high++;
		}
		else {
			a[track] = f[lo];
			lo++;
			track++;
		}
	}

	while (lo < p1) {
		a[track] = f[lo];
		lo++;
		track++;
	}

	while (high < p2) {
		a[track] = s[high];
		track++;
		high++;
	}

	return ans % MOD;

}

ll mergesort(vector<int> &a, ll start, ll end) {
	ll ans = 0;
	if (start < end) {
		ll mid = (start + end) / 2;
		ans += mergesort(a, start, mid);
		ans %= MOD;

		ans += mergesort(a, mid + 1, end);
		ans %= MOD;

		ans += mergeprocess(a, start, mid, end);
		ans %= MOD;
	}

	return ans;
}

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	int k = 1;
	while (k <= t) {
		int n;
		cin >> n;
		vector<int> a(n);
		int i = 0;
		while (i < n) {
			int x;
			cin >> x;
			a[i] = x;
			i++;
		}

		ll lo = 0;
		ll hi = n - 1;

		cout << "Case " << k << ": " << mergesort(a, lo, hi) % MOD << endl;

		k++;
	}



	return 0;
}