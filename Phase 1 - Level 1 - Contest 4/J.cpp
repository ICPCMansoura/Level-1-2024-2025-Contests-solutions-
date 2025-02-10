#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ordered_set2 tree<int, null_type, greater_equal<int>, rb_tree_tag, tree_order_statistics_node_update>


#define int long long
#define ll long long
#define all(x) x.begin(), x.end()

#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


const int mod = 1e9 + 7;


const int N = 1e7;
vector <bool> isprime(N, true);
vector <int> primes;

void linear_sieve(){
    isprime[0] = isprime[1] = false;
    for(int i = 2; i < N; i++){
        if(isprime[i]){
            primes.push_back(i);
        }
        for(auto p : primes){
            if(i * p > N){
                break;
            }
            isprime[i * p] = false;
            if(i % p == 0){
                break;
            }
        }
    }
}

vector <int> ans;
void solve(){
   int a, b, s;
   cin >> a >> b >> s;


   int sm = abs(a) + abs(b);
   if(s < sm){
        cout << "No";
        return;
   }
   if((sm + s) % 2 == 0){
     cout << "Yes";
   }
   else{
    cout << "No";
   }
}

signed main() {
    fast
    int T = 1;
    //cin >> T;

    while (T--) {
        solve();
    }
}

