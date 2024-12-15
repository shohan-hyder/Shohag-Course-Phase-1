//link: https://www.spoj.com/problems/ABA12D/en/
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
const int N = 1e6 + 5;
vector<int> a(N);

void sum_of_divisors() { // TC - (n(logn))
    for (int i = 1; i < N; i++ ) {
        for (int j = i; j < N; j += i) {
            a[j] += i;
        }
    }
}

bool is_prime(int num) {
    if (num == 0 || num == 1) return false;
    else {

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
    }

    return true;
}

int32_t main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    sum_of_divisors();
    while (t--) {
        int n, k;
        cin >> n >> k;
        int ans = 0;

        for (int i = n; i <= k; i++) {
            int num = a[i];

            if (is_prime(num)) ans++;
        }
        cout << ans << endl;

    }

    return 0;
}