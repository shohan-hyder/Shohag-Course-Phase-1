#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
const int N = 1e5 + 9;
int n, cows;
int a[N];
using namespace std;

bool check(ll min_dis) {

  int curr_dis = a[1], cows_cnt = 1;
  for (int i = 2; i <= n; i++) {
    if (a[i] - curr_dis >= min_dis) {
      cows_cnt++;
      curr_dis = a[i];
    }
  }

  //cout << "dis & cows = " << curr_dis << ' ' << cows_cnt << ' ' << min_dis << endl;
  return cows_cnt >= cows;
}



int32_t main() {
  ios_base :: sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> n >> cows;

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a + 1, a + n + 1);

  ll l = 0, r = 1e9, ans = 0;

  while (l <= r) {
    ll mid = (l + r) / 2;

    if (check(mid)) {
      ans = mid;
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
  }

  cout << ans << endl;


  return 0;
}