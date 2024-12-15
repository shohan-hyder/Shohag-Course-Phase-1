//link: https://atcoder.jp/contests/abc217/tasks/abc217_a
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s, t;
	cin >> s >> t;

	int ans = s.compare(t);
	if (ans < 0) { // if(s<t)
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}