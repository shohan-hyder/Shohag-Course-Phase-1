#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
// Sum of number of inversions in Sub Array
	int n;
	cin >> n;
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	//sort(a.rbegin() + 1, a.rbegin() + n );
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (a[i] > a[j]) {
				cnt += i * (n - j + 1);
			}
		}
	}

	cout << cnt << endl;

	/*

	2 1 3

	sort = 3 2 1

	-- 3 2 1 , 3
	-- 2 1 , 4
	-- 3 2, 5
	--
	1 XX
	-- 2 3
	2 XXX
	3 XX
	*/


	return 0;
}