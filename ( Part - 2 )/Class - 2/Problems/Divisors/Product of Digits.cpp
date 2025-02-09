//link: https://vjudge.net/problem/ural-1014
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
   ios_base :: sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n;
   cin >> n;

   if (n == 0) {
      cout << "10" << endl;
      return 0;
   }

   if (n == 1) {
      cout << n << endl;
      return 0;
   }

   vector<int> num;
   for (int i = 9; i >= 2; i--) {

      while (n % i == 0) {
         num.push_back(i);
         n /= i;
      }
   }

   if (n != 1) {
      cout << "-1" << endl;
      return 0;
   }

   for (int i = num.size() - 1; i >= 0; i--) {
      cout << num[i];
   }



   return 0;
}