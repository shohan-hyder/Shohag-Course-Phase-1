//Link: https://codeforces.com/problemset/problem/932/B
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
const int N = 1e6;
int a[10][N + 5];

int func(int val) {
	if (val < 10) return val;
	int mul = 1;
	while (val) {
		if (val % 10 != 0) mul *= (val % 10);
		val /= 10;
	}
	return func(mul);

}


int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;


	for (int j = 1; j <= N; j++) {
		a[func(j)][j]++;
	}

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= N; j++) {
			a[i][j] += a[i][j - 1];
		}
	}



	while (t--) {
		int l, r, k;
		cin >> l >> r >> k;

		cout << a[k][r] - a[k][l - 1] << endl;
	}


	return 0;
}