//link: https://cses.fi/problemset/task/2428/
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;
    vector<ll> a(n + 1);

    for (int i = 1; i <= n; i++) cin >> a[i];

    map<ll, ll> mp;
    ll ans = 0, left = 1, size = 0;
    for (int right = 1; right <= n; right++) {

        mp[a[right]]++;
        while (left <= right && mp.size() > k ) {
            mp[a[left]]--;
            if (mp[a[left]] == 0) {
                mp.erase(a[left]);
            }
            left++;
        }

        ans += right - left + 1;
        //cout << "right  = " << right << " Left = " << left << " , ans = " << ans << endl;


    }

    cout << ans << endl;



    return 0;
}