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
      int n, q;
      cin >> n >> q;

      vector<ll> a(n + 1, 0), cnt(n + 1, 0);

      while (q--) {
         int l, r;
         cin >> l >> r;
         a[l] += 1;
         if (r < n) {
            a[r + 1] -= 1;
            cnt[r + 1] -= (r - l + 1);
         }
      }

      for (int i = 1; i <= n; i++) {
         a[i] += a[i - 1];
         cnt[i] += a[i] + cnt[i - 1];

         cout << cnt[i] << ' ';
      }
      cout << endl;
   }

   return 0;
}