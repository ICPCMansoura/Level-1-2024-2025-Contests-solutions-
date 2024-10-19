#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}



#define ll long long
const int N = 1e6;

vector<bool> isprime(N + 1, true);
void prime_range_sieve(ll num) {

    isprime[0] = isprime[1] = false;

    for (ll i = 2; i * i <= num; i++) {
        for (ll j = i * i; isprime[i] && j <= num; j += i) {
            isprime[j] = false;
        }
    }

    return;
}
signed main()
{
    fastIO();
    prime_range_sieve(N);

    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            v[i] =  (v[i] % 2 == 1) - isprime[v[i]];
        }

        for (int i = 1; i < n; ++i) {
            v[i] += v[i - 1];
        }

        int mn = 0, ans = -1;
        for (int i = 0; i < n; ++i) {
            ans = max(ans, v[i] - mn);
            mn = min(mn, v[i]);
        }

        cout << ans << "\n";
    }
}
