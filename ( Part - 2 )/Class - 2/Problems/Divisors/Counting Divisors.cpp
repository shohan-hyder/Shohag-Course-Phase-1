//link: https://cses.fi/problemset/task/1713
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = 0;

        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                cnt++;
                if (i != (n / i)) cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}