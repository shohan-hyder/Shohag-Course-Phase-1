//link: https://codeforces.com/problemset/problem/550/B
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> a(n);
    for (auto &k : a) cin >> k;

    int ans = 0;
    for (int i = 0; i < (1 << n); i++) {
        int num_of_diff = 0, min_dif = 1e7, max_dif = 0, cnt_prblm = 0, sum = 0;
        for (int j = 0; j < n; j++) {
            if ((i >> j) & 1) {
                sum += a[j];
                max_dif = max(max_dif, a[j]);
                min_dif = min(min_dif, a[j]);
                cnt_prblm++;
            }
        }

        if (l <= sum && r >= sum && (max_dif - min_dif) >= x && cnt_prblm >= 2) {
            ans++;
        }
    }

    cout << ans << endl;


    return 0;
}