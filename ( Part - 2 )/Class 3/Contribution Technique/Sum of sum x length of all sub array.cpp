#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int func(int x) {
	return (x * (x + 1)) / 2;
}

int sum(int l, int r) {
	return func(r) - func(l - 1);
}

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	vector<int> a(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		// 4
		// 2 3 4 5
		int contribution = sum(i, n) * i - (n - i + 1) * sum(1, i) + (n - i + 1) * i;
		//cout << "contribution = " << contribution << endl;
		ans += contribution * a[i];
		//cout << ans << endl;
	}

	cout << ans << endl;


	return 0;
}