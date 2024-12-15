#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
int n, x, y;
bool check(ll copy) {

    if (min(x, y) > copy) return false;

    ll cnt = 1;
    copy -= min(x, y);
    cnt += (copy / x) + (copy / y);

    return cnt >= n;

}

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> x >> y;

    ll l = 1, r = 2e9, ans = 0;

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

    cout << ans << endl;



    return 0;
}