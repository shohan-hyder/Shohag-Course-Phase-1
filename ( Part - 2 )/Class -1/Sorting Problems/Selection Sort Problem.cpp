//link: https://vjudge.net/problem/Aizu-ALDS1_2_B
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

//Selection Sort
int solve(vector<int> &arr, int arr_size) {
	int cnt = 0;
	for (int i = 0; i < arr_size - 1; i++) {
		int min_index = i;
		for (int j = i + 1; j < arr_size; j++) {
			if (arr[min_index] > arr[j]) {
				min_index = j;
			}
		}

		if (arr[min_index] < arr[i]) {
			swap(arr[min_index], arr[i]);
			cnt++;
		}
	}

	return cnt;

}

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	vector<int> a(n);

	for (auto &k : a) cin >> k;

	int ans = solve(a, n);

	for (int i = 0; i < n; i++) {
		cout << a[i];
		if (i != n - 1) cout << ' ';
	}
	cout << endl;
	cout << ans << endl;

	return 0;
}