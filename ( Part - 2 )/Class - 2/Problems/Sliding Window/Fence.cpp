//link: https://codeforces.com/problemset/problem/363/B
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

struct solve {

   multiset<int> num;
   void insert(int x) {
      num.insert(x);
   }

   void remove(int x) {
      num.erase(x);
   }

   int max_elm() {
      return *(--num.end());
   }

   int min_elm() {
      return *num.begin();
   }


} solve;


int32_t main() {
   ios_base :: sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n, k;
   cin >> n >> k;

   vector<int> a(n + 1);
   vector<int> x, y;
   for (int i = 1; i <= n; i++) cin >> a[i];

   for (int i = 1; i <= n; i++) {
      solve.insert(a[i]);

      if (i >= k) {
         x.push_back(solve.max_elm());
         y.push_back(solve.min_elm());
         solve.remove(a[i - k + 1]);
      }
   }


   for (int i = 0; i < y.size(); i++) {
      cout << y[i];

      if (i != y.size() - 1) {
         cout << " ";
      }
   }

   cout << endl;

   for (int i = 0; i < x.size(); i++) {
      cout << x[i] ;
      if (i != x.size() - 1) {
         cout << " ";
      }
   }

   return 0;
}