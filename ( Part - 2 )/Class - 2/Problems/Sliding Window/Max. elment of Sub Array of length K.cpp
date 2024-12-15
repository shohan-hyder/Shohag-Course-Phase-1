#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
const int N = 1e6 + 7;
vector<int> a(N);

struct Process {
	multiset<int> num;
	void add(int x) {
		num.insert(x);
	}

	int get_max() {
		return *(--num.end());
	}

	void erase(int k) {
		num.erase(num.find(k));
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
			temp_ans = Process.get_max();
			cout << temp_ans << " " ;
			ans = max(ans, temp_ans);
			Process.erase(a[i - k + 1]);
		}
	}

	cout << endl << ans << endl;

	return 0;
}
