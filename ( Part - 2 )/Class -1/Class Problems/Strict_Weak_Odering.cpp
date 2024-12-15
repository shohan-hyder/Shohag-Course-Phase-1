#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

bool cmp (string a, string b) {

	return a + b < b + a;
}

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	vector<string> word(n);

	for (auto &k : word) cin >> k;

	sort(word.begin(), word.end(), cmp);

	for (auto &k : word) cout << k;

	return 0;
}