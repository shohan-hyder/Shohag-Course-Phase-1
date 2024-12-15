//link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);

	for (auto &k : a) cin >> k;
	for (auto &l : b) cin >> l;
	vector<int> ans;

	int i = 0, j = 0;

	while (i < n and j < m) {
		if (a[i] < b[j]) {
			ans.push_back(a[i]);
			i++;
		}
		else {
			ans.push_back(b[j]);
			j++;
		}
	}

	while (i < n) {
		ans.push_back(a[i]);
		i++;
	}

	while (j < m) {
		ans.push_back(b[j]);
		j++;
	}

	for (auto k : ans) cout << k << " ";



	return 0;
}