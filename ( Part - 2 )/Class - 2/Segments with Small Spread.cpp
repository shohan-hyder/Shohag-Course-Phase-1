#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
const int N = 1e5 + 7;
ll a[N];

struct FUNC {
    multiset<ll> num;
    fUNC() {}
    void insert(ll x) {
        num.insert(x);
    }

    void erase(ll x) {
        num.erase(num.find(x));
    }

    ll get_max_num() {
        return *(--num.end());
    }

    ll get_min_num() {
        return *num.begin();
    }

    ll get_ans() {

        return get_max_num() - get_min_num();
    }

    void print() {
        cout << "The values: ";
        for (auto &p : num) {
            cout << p << ' ';
        }
        cout << endl;
    }

} sh;

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int l, r = 1;
    ll ans = 0;
    for (l = 1; l <= n; l++) {
        while (r <= n) {
            sh.insert(a[r]);
            if (sh.get_ans() > k) {
                sh.erase(a[r]);
                break;
            }
            r++;
        }
        //sh.print();

        ans += r - l;
        //cout << "Ans = " << ans << endl;
        sh.erase(a[l]);
    }
    cout << ans << endl;






    return 0;
}