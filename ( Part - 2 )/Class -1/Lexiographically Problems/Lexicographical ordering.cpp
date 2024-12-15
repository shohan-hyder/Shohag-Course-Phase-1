//Link: https://www.spoj.com/problems/MAIN71/
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		string serial;
		cin >> serial;

		string a, b;
		cin >> a >> b;
		int n = a.size();
		vector<int> first(n), second(n);
		for (int k = 0; k < n; k++) {

			for (int i = 0; i < serial.size(); i++) {
				if ( a[k] == serial[i] ) {
					first[k] = i;
					break;
				}
			}

			for (int i = 0; i < serial.size(); i++) {
				if ( b[k] == serial[i] ) {
					second[k] = i;
					break;
				}
			}

		}

		bool c = true;
		for (int i = 0; i < n; i++) {
			if (first[i] > second[i]) {
				cout << ">" << endl;
				c = false;
				break;
			}
			else if (first[i] < second[i]) {
				cout << "<" << endl;
				c = false;
				break;
			}
			else {
				continue;
			}
		}

		if (c) cout << "=" << endl;

	}

	return 0;
}