#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int div[n] = {0};
    for (int i = 1; i < n; i++) {
        ll ans = 0;
        for (int j = i; j < n; j += i) {
            div[j]++;

        }
        cout << i << " divisors ammount = " << div[i] << endl;

    }



    return 0;
}
//time complexity - 0( nlong(n) )