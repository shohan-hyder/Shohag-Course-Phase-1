//link: https://codeforces.com/problemset/problem/816/B
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
const int N = 2e5 + 7;
vector<int> prefix(N), ans(N);

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, k, q;
	cin >> n >> k >> q;

	while (n--) {
		int l, r;
		cin >> l >> r;
		prefix[l]++;
		prefix[r + 1]--;
	}

	for (int i = 1; i <= N - 1; i++) {
		prefix[i] += prefix[i - 1]; // here taking the counts which temp. values are present in the range that given

	}

	for (int i = 1; i <= N - 1; i++) {
		if (prefix[i] >= k) ans[i]++; // here that temp value allowed to the number of (K) temp. conditions from the recipes

		ans[i] += ans[i - 1];
	}

	while (q--) {
		int l, r;
		cin >> l >> r;
		cout << ans[r] - ans[l - 1] << endl;
	}

	return 0;
}