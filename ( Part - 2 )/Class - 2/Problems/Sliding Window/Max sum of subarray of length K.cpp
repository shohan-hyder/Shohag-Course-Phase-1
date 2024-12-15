#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
const int N = 1e6 + 7;
vector<int> a(N);


int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, k;
	cin >> n >> k;
	int ans = 0;
	int sum = 0;

	for (int i = 1; i <= n; i++) cin >> a[i];

	for (int i = 1; i <= n; i++) {
		sum += a[i];

		if (i >= k) {
			sum -= a[i - k];
			ans = max(sum, ans);
		}
	}

	cout << ans << endl;

	return 0;
}