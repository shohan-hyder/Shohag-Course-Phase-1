#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n + 5, 0);
    vector<ll> l(m + 5, 0), r(m + 5, 0), d(m + 5, 0);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<ll> diff(n + 5, 0);

    for (int i = 1; i <= n; i++) {
        diff[i] = a[i] - a[i - 1];
    }

    for (int i = 1; i <= m; i++) {
        cin >> l[i] >> r[i] >> d[i];
    }

    vector<ll> op(m + 5, 0);

    for (int i = 1; i <= k; i++) {
        int x, y;
        cin >> x >> y;

        op[x]++;
        op[y + 1]--;
    }

    for (int i = 1; i <= m; i++) {
        op[i] += op[i - 1];
    }
    for (int i = 1; i <= m; i++) {
        diff[l[i]] += op[i] * d[i];
        diff[r[i] + 1] -= op[i] * d[i];
    }

    for (int i = 1; i <= n; i++) {
        diff[i] += diff[i - 1];
        cout << diff[i] << ' ';
    }

    cout << endl;

    return 0;
}