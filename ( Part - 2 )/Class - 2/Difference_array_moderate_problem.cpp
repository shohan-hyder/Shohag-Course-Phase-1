#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
const int N = 1e5 + 7;

using namespace std;
vector<vector<int>> addition(N);
vector<vector<int>> dele(N);
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, q;
    cin >> n >> q;


    while (q--) {
        int l, r, x;
        cin >> l >> r >> x;

        addition[l].push_back(x);
        dele[r + 1].push_back(x);
    }

    map<int, int> mp;

    for (int i = 1; i <= n; i++) {
        // adding x from l to n
        for (auto x : addition[i]) {
            mp[x]++;
        }

        // removing x from r+1 to n
        for (auto k : dele[i]) {
            mp[k]--;
            if (mp[k] == 0) {
                mp.erase(k);
            }
        }
        cout << mp.size() << endl;





    }
    return 0;
}
