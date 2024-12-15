#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

//Selection Sort
void solve(vector<int> &arr, int arr_size) {

	for (int i = 0; i < arr_size - 1; i++) {
		int min_index = i;
		for (int j = i + 1; j < arr_size; j++) {
			if (arr[min_index] > arr[j]) {
				min_index = j;
			}
		}

		swap(arr[min_index], arr[i]);
	}

}

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	vector<int> a(n);

	for (auto &k : a) cin >> k;

	solve(a, n);

	for (auto &l : a) cout << l << ' ';

	return 0;
}