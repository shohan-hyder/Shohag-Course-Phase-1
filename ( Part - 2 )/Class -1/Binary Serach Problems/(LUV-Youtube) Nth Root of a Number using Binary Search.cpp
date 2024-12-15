#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
const double val = 1e-6;
double multiply(double x, int n) {
    double ans2 = 1.0;

    for (int i = 1; i <= n; i++) {
        ans2 *= x;
    }

    return ans2;
}

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    double num, ans = 0.0;
    cin >> num;
    int n;
    cin >> n;

    double l = 1, r = num;

    while (r - l > val ) {
        double mid = (l + r) / 2;

        if (multiply(mid, n) >= num) {

            ans = mid;
            r = mid;
        }
        else {
            l = mid;
        }
    }

    //if we want x decimal spaces accuracy --
    // as (x -- x+1) -- 10^x
    // time complexity -- N * log(x * 10^x) --
    // N = nth time root of a number

    cout << fixed << setprecision(5) << ans << endl;
    cout << pow(num, 1.0 / n);
    return 0;
}