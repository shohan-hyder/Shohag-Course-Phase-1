//link: https://codeforces.com/problemset/problem/1601/A

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
const int N = 2e5 + 7;
int a[N];

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> bit(30, 0);
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			for (int j = 0; j < 30; j++) {
				if ( (a[i] >> j) & 1) { // is it true
					bit[j]++; // number or 1 bits there found
				}
			}
		}

		for (int i = 1; i <= n; i++) {
			bool check = true;
			for (int j = 0; j < 30; j++) {
				if (bit[j] % i != 0) {
					// if here bit[j] of count 1 numbers can modulo by i then it can not be make all the array elements in 0

					check = false;
				}
			}
			if (check) cout << i << ' ';
		}
		cout << endl;



	}

	return 0;
}