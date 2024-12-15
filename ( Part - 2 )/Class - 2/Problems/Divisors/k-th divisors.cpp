//link: https://codeforces.com/problemset/problem/762/A
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, k;
    cin >> n >> k;
    vector<ll> a;
    ll cnt = 1;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            a.push_back(i);

            if (i != (n / i)) a.push_back(n / i);
        }
    }

    sort(a.begin(), a.end());

    if (a.size() < k) cout << "-1" << endl;
    else cout << a[k - 1] << endl;


    return 0;
}