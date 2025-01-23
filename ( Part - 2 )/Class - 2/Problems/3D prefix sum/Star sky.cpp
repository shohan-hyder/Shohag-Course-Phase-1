//link: https://codeforces.com/problemset/problem/835/C
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int prefix[11][101][101];

int32_t main() {
   ios_base :: sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n, q, c;
   cin >> n >> q >> c;

   for (int i = 1; i <= n; i++) {
      int x, y, s;
      cin >> x >> y >> s;

      prefix[s][x][y]++;
   }

   for (int k = 0; k <= c; k++) {
      for (int i = 1; i <= 100; i++) {
         for (int j = 1; j <= 100; j++) {
            prefix[k][i][j] += prefix[k][i - 1][j] + prefix[k][i][j - 1] - prefix[k][i - 1][j - 1];
         }
      }
   }

   while (q--) {
      ll t, x1, y1, x2, y2;
      cin >> t >> x1 >> y1 >> x2 >> y2;
      ll ans = 0;
      for (int i = 0; i <= c; i++) {

         ll light = (i + t) % (c + 1);
         int amount = (prefix[i][x2][y2] - prefix[i][x1 - 1][y2] - prefix[i] [x2][y1 - 1] + prefix[i][x1 - 1][y1 - 1]);
         ans += light * amount;

      }
      cout << ans << endl;
   }


   return 0;
}