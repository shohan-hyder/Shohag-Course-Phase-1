#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
const int N = 1007;
int n, m;

int a[N][N], prefix[N][N], dif[N][N];

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    int q; cin >> q;
    while (q--) {
        int x1, y1, x2, y2, k;
        cin >> x1 >> y1 >> x2 >> y2 >> k;
        dif[x1][y1] += k;
        dif[x1][y2 + 1] -= k;
        dif[x2 + 1][y1] -= k;
        dif[x2 + 1][y2 + 1] += k;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + dif[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << a[i][j] + prefix[i][j] << ' ';
        }
        cout << endl;
    }



    return 0;
}