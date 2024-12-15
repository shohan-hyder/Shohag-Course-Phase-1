//link: https://cses.fi/problemset/task/1652/
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
const int N = 1007;
vector<vector<char>> a(N, vector<char>(N));
vector<vector<int>> val(N, vector<int>(N));
vector<vector<int>> prefix(N, vector<int>(N));


int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, query;
    cin >> n >> query;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (a[i][j] == '*') val[i][j] = 1;
            else val[i][j] = 0;
        }
    }


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + val[i][j];
        }
    }

    while (query--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int ans = prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1];
        cout << ans << endl;

    }

    return 0;
}