#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
//naive approach
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    //square root approach
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cout << i << " " << n / i << " ";
        }
    }
    cout << endl;
    //Taking ll values un square root approach
    ll num = 1e12;
    for (int i = 1; 1ll * i * i <= num; i++) {
        if (num % i == 0) {
            cout << i << " " << num / i << endl;
        }
    }
    cout << endl;


    return 0;
}