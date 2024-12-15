#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
const int N = 2e7;

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int k;
    cin >> k;
    int ans = 0;
    int num, i;
    for (i = 19; i <= N; i++) {
        int num_sum = 0;
        num = i;
        while (num) {
            num_sum += (num % 10);
            num /= 10;

        }

        if (num_sum == 10) {
            ans++;
        }

        if (ans == k) {
            cout << i << endl;
            break;
        }
    }




    return 0;
}