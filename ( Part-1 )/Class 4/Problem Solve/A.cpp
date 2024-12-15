#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  int a[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int count = 0;
  for (int i = 1; i <= n; i++) {
    if (a[i] % k == 0) {
      count++;
    }
  }
  cout << count << '\n';
  return 0;
}