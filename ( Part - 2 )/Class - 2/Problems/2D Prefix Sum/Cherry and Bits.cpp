//link: https://www.codechef.com/problems/CENS20A
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
int a[1005][1005];
int prefix[1005][1005];


int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        for (int j = 1; j <= m; j++) {

            if (s[j - 1] == '1') {
                a[i][j] = 1;
            }

        }
    }

    int q;
    cin >> q;

    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        prefix[x1][y1]++;
        prefix[x2 + 1][y2 + 1]++;
        prefix[x2 + 1][y1]--;
        prefix[x1][y2 + 1]--;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {

            prefix[i][j] += prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
        }

    }


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {

            prefix[i][j] += a[i][j];
            if (prefix[i][j] & 1) {
                cout << "1";
            }
            else {
                cout << "0";
            }
        }
        cout << endl;
    }





    return 0;
}