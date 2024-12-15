//link: https://www.spoj.com/problems/MERGSORT/
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;


void mergeprocess(vector<int> &a, ll start, ll mid, ll end) {

	ll p1 = mid - start + 1;
	ll p2 = end - mid;

	vector<int> f(p1);
	vector<int> s(p2);

	for (int i = 0; i < p1; i++) f[i] = a[start + i];

	for (int i = 0; i < p2; i++) s[i] = a[mid + i + 1];

	//pointers
	int lo = 0;
	int high = 0;
	int track = start;

	while (lo < p1 && high < p2) {

		if (f[lo] < s[high]) {
			a[track] = f[lo];
			lo++;
			track++;
		}
		else {
			a[track] = s[high];
			track++;
			high++;
		}
	}

	while (lo < p1) {
		a[track] = f[lo];
		lo++;
		track++;
	}

	while (high < p2) {
		a[track] = s[high];
		track++;
		high++;
	}

}

void mergesort(vector<int> &a, ll start, ll end) {

	if (start < end) {
		ll mid = (start + end) / 2;
		mergesort(a, start, mid);

		mergesort(a, mid + 1, end);

		mergeprocess(a, start, mid, end);
	}
}

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	vector<int> a;
	while (cin >> n) {
		a.push_back(n);
	}

	ll lo = 0;
	ll hi = a.size() - 1;

	mergesort(a, lo, hi);

	for (auto &k : a) cout << k << ' ';

	return 0;
}