#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;


bool check(int mid, string line, string matching, vector<int> &per_num ) {
    for (int i = 0; i <= mid; i++) {
        line[per_num[i] - 1] = '$';
        //cout << per_num[i] << ", ";
    }

    int j = 0;
    for (int i = 0; i < line.size(); i++) {
        if (line[i] == matching[j]) {
            j++;
        }
    }

    if (j == matching.size()) return true;
    else return false;
}

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string t, p;
    cin >> t >> p;
    int size = t.size();
    vector<int> per(size);
    for (int i = 0; i < size; i++) {
        cin >> per[i];
    }

    int l = 0, r = size - 1, ans = 0;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (check(mid, t, p, per)) {
            l = mid + 1;
            ans = l;
        }
        else {
            r = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}