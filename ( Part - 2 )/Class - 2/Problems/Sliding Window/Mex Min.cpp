//link: https://atcoder.jp/contests/abc194/tasks/abc194_e?lang=en
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

const int N = 1.5e6 + 7;
struct Solve {
   set<int> rmv_num;
   map<int, int> mp;

   void adding() {
      for (int i = 0; i < N; i++) {
         rmv_num.insert(i);
      }
   }

   void insert(int x) {
      mp[x]++;

      if (mp[x] == 1) rmv_num.erase(x);
   }

   void remove_num(int x) {
      mp[x]--;

      if (mp[x] == 0) rmv_num.insert(x);
   }

   int get_mex_min() {
      return *rmv_num.begin();
   }


} r;

int32_t main() {
   ios_base :: sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n, m;
   cin >> n >> m;

   vector<int> a(n + 1), ans;

   for (int i = 1; i <= n; i++) cin >> a[i];

   r.adding();

   for (int i = 1; i <= n; i++) {
      r.insert(a[i]);
      if (i >= m) {
         ans.push_back(r.get_mex_min());
         r.remove_num(a[i - m + 1]);
      }
   }

   cout << *min_element(ans.begin(), ans.end());





   return 0;
}