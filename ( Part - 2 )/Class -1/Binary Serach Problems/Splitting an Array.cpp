#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
#define ll long long
int n, a[N], k;

// Maximize (Minimize) -- problem
bool check(ll ans) {

    ll curr_sum = 0;
    ll segment = 1;

    for (int i = 1; i <= n; i++) {

        if (a[i] > ans) return false;

        if (curr_sum + a[i] <= ans) {
            curr_sum += a[i];
        }
        else {

            curr_sum = a[i];
            segment++;
        }
    }

    return segment <= k;

}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    ll l = 1, r = 1e14, ans = 0;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (check(mid)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    cout << ans << '\n';
    return 0;
}