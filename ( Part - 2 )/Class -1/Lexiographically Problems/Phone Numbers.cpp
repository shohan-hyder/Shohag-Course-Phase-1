//link: https://codeforces.com/problemset/problem/940/C
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, k;
	cin >> n >> k;
	string word;
	cin >> word;
	set<char> c;
	for (auto x : word) {
		c.insert(x);
	}

	auto first_char = *(c.begin());

	if (k > n) {
		cout << word;
		for (int i = 1; i <= k - n; i++) {
			cout << first_char;
		}
		cout << endl;
	}
	else { // (k<=n)
		for (int i = k - 1; i >= 0; i--) {
			auto it = c.upper_bound(word[i]);
			if (it != c.end()) {
				string ans;
				ans.resize(k);
				char next_big_char = *it;
				ans[i] = next_big_char;

				for (int m = 0; m < i; m++) {
					ans[m] = word[m];
				}

				for (int s = i + 1; s < k; s++) {
					ans[s] = first_char;
				}

				cout << ans << endl;
				break;
			}

		}
	}


	return 0;
}