#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;


bool check(ll x, ll width, ll height, ll cnt) {

    return (x / width) * (x / height) >= cnt;
}

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int w, h, n;
    cin >> w >> h >> n;
    int num = max(w, h);
    ll l = 1, r = 1, ans = 0;

    while (check(r, w, h, n) == false) {
        r *= 2;
    }

    while (l <= r) {
        ll mid = l + (r - l) / 2;

        if (check(mid, w, h, n)) {
            ans = mid;
            r = mid - 1;
            //cout << mid << " check " << endl;
        }
        else {
            //cout << mid << endl;
            l = mid + 1;
        }
    }

    cout << ans << endl;



    return 0;
}