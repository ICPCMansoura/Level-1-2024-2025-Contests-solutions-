#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ordered_set2 tree<int, null_type, greater_equal<int>, rb_tree_tag, tree_order_statistics_node_update>


#define int long long
#define ll long long
#define all(x) x.begin(), x.end()

#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


const int mod = 1e9 + 7;

const int N = 1e6 + 4;
vector <bool> isprime(N, true);
vector <int> divide(N);
void sieve(){
    isprime[0] = isprime[1] = false;
    for(int i = 2; i <= 1e6; i++){
        if(isprime[i]){
            divide[i] = i;
            for(int j = i * 2; j <= 1e6; j += i){
                isprime[j] = false;
                divide[j] = i;
            }
        }
    }
}

int pf(int x){
    map <int, int> mp;
    while(x != 1){
        mp[divide[x]] ++;
        x /= divide[x];
    }
    return mp.size();
}
vector <int> cnt_primes(1e6);
vector <int> ans(N);

void solve(){
    int x;
    cin >> x;
    if(x == 1)
        cout << 0 << endl;
    else
        cout << ans[x] << endl;
}
signed main() {
    fast
    int T = 1;
    cin >> T;
    sieve();
    for(int i = 2; i <= 1e6; i++){
        cnt_primes[i] = pf(i);
    }

    for(int gcd = 1; gcd <= 1e6; gcd++){
        for(int x = 2 * gcd; x <= 1e6; x += gcd){
            int ab = x * gcd - gcd * gcd;
            if(ab < 0) continue;
            if(ab % gcd != 0) continue;
            ab /= (gcd * gcd);

            int cnt = cnt_primes[ab];
            int tmp = (1LL << cnt) / 2;
            if(ab == 1) 
                ans[x] ++;
            else
                ans[x] += tmp;
        }
    }

    while (T--) {
        solve();
    }
}

