#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
const int N = 1e6 + 7;
vector<int> a(N);

struct Process {
	map<int, int> num;
	void add(int x) {
		num[x]++;
	}

	void erase(int k) {

		num[k]--;
	}

	int unique_elm() {
		int cnt = 0;
		for (auto k : num) {
			if (k.second != 0) {
				cnt++;
			}
		}
		return cnt;
	}


} Process;

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, k;
	cin >> n >> k;
	int temp_ans = 0;
	int ans = 0;
	for (int i = 1; i <= n; i++) cin >> a[i];

	for (int i = 1; i <= n; i++) {
		Process.add(a[i]);
		if (i >= k) {
			cout << "Unique Elm = " << Process.unique_elm() << endl;
			Process.erase(a[i - k + 1]);
		}
	}


	return 0;
}
