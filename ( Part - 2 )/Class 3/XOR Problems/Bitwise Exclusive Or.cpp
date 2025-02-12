#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = 0; i <= 255; i++) {
        // cout << (a ^ i) << endl;
        if ( (a ^ i) == b) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;





    return 0;
}