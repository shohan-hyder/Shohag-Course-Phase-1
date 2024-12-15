#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

const int N = 1e4 + 7;
int n, k, a[N];

bool check(int mid) {

    ll curr_dis = a[1];
    ll cows = 1;
    //cout << "Mid = " << mid << endl;
    for (int i = 2; i <= n; i++) {
        if ( a[i] - curr_dis >= mid) {
            cows++;
            curr_dis = a[i];
            //cout << "Current Distance = " << curr_dis << endl;
        }
    }

    //cout << "cows = " << cows << endl;
    return cows >= k;
}

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int l = 0, r = 1e9, ans = 0;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (check(mid)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}