//link: https://codeforces.com/problemset/problem/1097/B
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	vector<int> a(t);

	for (int i = 0; i < t; i++) cin >> a[i];

	for (int i = 0; i < (1 << t); i++) {
		int rotate = 0;
		for (int j = 0; j < t; j++) {
			if ( (i >> j) & 1) {
				rotate += a[j];
			}
			else {
				rotate -= a[j];
			}
			rotate %= 360;
			rotate = (rotate + 360) % 360;
		}

		if (rotate == 0) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	return 0;
}