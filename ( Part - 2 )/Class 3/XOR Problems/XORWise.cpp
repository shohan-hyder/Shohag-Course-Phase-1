#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
   ios_base :: sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int t;
   cin >> t;
   while (t-- ) {
      int a, b;
      cin >> a >> b;

      int ans = a ^ b;
      cout << ans << endl;
   }

   return 0;
}