//link: https://cses.fi/problemset/task/1641
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
   ios_base :: sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n, t;
   cin >> n >> t;

   vector<pair<ll, int>> a(n);

   for (int i = 0; i < n; i++) {
      cin >> a[i].first;
      a[i].second = i + 1;
   }

   sort(a.begin(), a.end());
   ll target_sum = 0;

   for (int i = 0; i < n; i++) {
      target_sum = t - a[i].first;
      int left = i + 1, right = n - 1;

      while (left < right) {
         ll temp_sum = a[left].first + a[right].first;

         if (temp_sum == target_sum) {
            cout << a[i].second << " " << a[left].second << " " << a[right].second << endl;
            return 0;
         }

         if (temp_sum < target_sum) {
            left++;
         }
         else {
            right--;
         }
      }

   }

   cout << "IMPOSSIBLE" << endl;

   return 0;
}