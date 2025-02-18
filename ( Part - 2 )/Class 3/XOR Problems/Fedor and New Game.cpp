//link: https://codeforces.com/problemset/problem/467/B
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m + 2);
    for (int i = 1; i <= m + 1; i++) {
        cin >> a[i];
    }
    int fedor = a[m + 1];
    int ans = 0;
    for (int j = 1; j <= m; j++) {
        int cnt = 0;

        /*        for (int i = 0; i < n; i++) {
                    int player = (a[j] >> i) & 1;
                    int fedor_player = (fedor >> i) & 1;

                    if (player != fedor_player) {
                        cnt++;
                    }
                }
        */
        // To check number of 1 bits in the number
        cnt = __builtin_popcount(a[j] ^ fedor); // TC - almost 1 sec
        if (k >= cnt) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}