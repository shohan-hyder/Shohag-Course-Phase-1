#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
const int N = 1e7 + 7;
int a[N];


// Sum of pair XOR --- Contribution Technique
int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	ll bit[30][2];
	memset(bit, 0, sizeof(bit));

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		for (int j = 0; j < 30; j++) {
			if (a[i] >> j & 1) {
				bit[j][1]++;
			}
			else {
				bit[j][0]++;
			}
		}
	}

	ll ans = 0;

	for (int j = 0; j < 30; j++) {
		ll contribution = 2 * bit[j][0] * bit[j][1];
		ans += contribution *  (1 << j);
		//cout << contribution << ' ';
	}


	cout << ans << endl;

//Brute Force --
	/*	ll sum = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				sum += (a[i] ^ a[j]) ;
				//cout << sum << endl;
			}
		}
		cout << sum << endl;*/


	return 0;
}