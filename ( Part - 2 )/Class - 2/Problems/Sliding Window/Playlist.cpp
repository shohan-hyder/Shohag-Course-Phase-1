//Link: https://cses.fi/problemset/task/1141
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<ll> a(n + 1);

    for (int i = 1; i <= n; i++) cin >> a[i];

    map<ll, ll> mp;
    ll ans = 0, r = 0;
    for (int i = 1; i <= n; i++) {

        while (r <= n && mp[a[r]] == 0) {
            mp[a[r]]++;
            r++;
        }

        ans = max(ans, r - i);

        mp[a[i]]--;

        if (mp[a[i]] == 0) {
            mp.erase(a[i]);
        }


        /*if (mp[x] > 1) {
            size = mp.size();
            ans = max(ans, size);
            mp.clear();
            mp[x]++;
        }*/
    }

    cout << ans << endl;



    return 0;
}