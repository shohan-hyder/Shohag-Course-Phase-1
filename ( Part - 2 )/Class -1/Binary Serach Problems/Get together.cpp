#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

const int N = 1e5 + 7;
int n, dis[N], speed[N];

bool check(double min_time) {
    double left_side_distance = -1e20;
    double right_side_distance = 1e20;
    for (int i = 0; i < n; i++) {
        double left_side_current_distance = dis[i] - (speed[i] * min_time);
        double right_side_current_distance = dis[i] + (speed[i] * min_time);
        left_side_distance = max(left_side_distance, left_side_current_distance);
        right_side_distance = min(right_side_distance, right_side_current_distance);

    }

    return left_side_distance <= right_side_distance;

}

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> dis[i] >> speed[i];
    }

    double l = 0, r = 1e9, ans = 0;
    int itr = 100;
    while (itr--) {
        double mid = (l + r) / 2;

        if (check(mid)) {
            ans = mid;
            r = mid;
        }
        else {
            l = mid;
        }
    }

    cout << fixed << setprecision(8) << ans << endl;


    return 0;
}