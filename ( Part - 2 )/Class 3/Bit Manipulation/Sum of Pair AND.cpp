#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
const int N = 1e7 + 7;
int a[N];


// Sum of pair AND --- Contribution Technique
int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	vector<ll> bit(30, 0);

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		for (int j = 0; j < 30; j++) {
			if (a[i] >> j & 1) {
				bit[j]++;
			}
		}
	}

	ll ans = 0;

	for (int j = 0; j < 30; j++) {
		ans += (bit[j] * bit[j]) * (1 << j);
	}
	cout << ans << endl;




	/*	ll sum = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				sum += (a[i] & a[j]);
			}
		}
		cout << "Brute Force = " << sum << endl;*/

	return 0;
}