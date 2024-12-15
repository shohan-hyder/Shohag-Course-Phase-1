#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
int factorial(int n)
{
	if (n == 0)
		return 1;

	return n * factorial(n - 1);
}

int32_t main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	//Sum of Number Inversions in Permutation

	int n;
	cin >> n;
	vector<int> a(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	int ans = (factorial(n) / 2) * (n * (n - 1)) / 2;

	cout << ans << endl;




	return 0;
}