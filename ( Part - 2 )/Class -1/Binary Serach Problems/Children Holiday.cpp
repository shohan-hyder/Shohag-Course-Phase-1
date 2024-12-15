#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
const int N = 1005;
int req_ballons, assist;
int t[N], rest_per_ballons[N], rest_time[N];
int ballons[N];

bool check(int curr_time) {
    ll left_ballons = req_ballons;
    ll total_ballons = 0;
    for (int i = 0; i < assist; i++ ) {
        // block time -- for every ballons infalted total time
        int block_time = (t[i] * rest_per_ballons[i]) + rest_time[i];
        // one assistant can infalted how many ballons thats ammount
        ll curr_ballons = ( 1LL * (curr_time / block_time) * rest_per_ballons[i]);
        // if there were some time left then without consider the rest time find out the
        //  how many ballons can inflated in those partial time
        int partial_block_time = curr_time % block_time;
        curr_ballons += min(rest_per_ballons[i], partial_block_time / t[i]);
        total_ballons += curr_ballons;
        // count how many ballons each participants can inflated and store it
        ballons[i] = min(curr_ballons, left_ballons);
        left_ballons -= ballons[i];

    }

    return total_ballons >= req_ballons;
}


int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> req_ballons >> assist;

    for (int i = 0; i < assist; i++) {
        cin >> t[i] >> rest_per_ballons[i] >> rest_time[i];
    }

    int l = 0, r = 1e7, ans = 0;

    while (l <= r) {
        int mid = (l + r) / 2;
        if (check(mid)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    cout << ans << endl;
    check(ans);

    for (int i = 0; i < assist; i++) {
        cout << ballons[i] << " ";
    }
    cout << endl;

    return 0;
}