#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
const int N = 1e6 + 7;
using namespace std;
int a[N], d[N];
int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, q; cin >> n >> q;

    for (int i = 1; i <= n; i++)  cin >> a[i];

    for (int i = 1; i <= n; i++) {
        d[i] = a[i] - a[i - 1];
    }

    while (q--) {
        int l, r, x;
        cin >> l >> r >> x;
        d[l] += x;
        d[r + 1] -= x;
    }

    for (int i = 1; i <= n; i++) {
        a[i] = a[i - 1] + d[i];
    }


    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}