//link: https://vjudge.net/problem/codeforces-472a
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
   ios_base :: sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n;
   cin >> n;

   if (n & 1) cout << "9 " << n - 9;
   else cout << "4 " << n - 4;

   return 0;
}