//link: https://www.hackerrank.com/challenges/ctci-bubble-sort/problem
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	vector<int> a(n);

	for (int i = 0; i < n; i++) cin >> a[i];
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (a[j] > a[j + 1]) {
				cnt++;
				swap(a[j], a[j + 1]);
				//break;
			}
		}
	}

	cout << "Array is sorted in " << cnt << " swaps." << endl;
	cout << "First Element: " << a[0] << endl;
	cout << "Last Element: " << a[n - 1] << endl;

	return 0;
}