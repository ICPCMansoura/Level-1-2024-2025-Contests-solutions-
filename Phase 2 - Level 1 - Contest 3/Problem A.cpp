#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void File() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
#define Omda7 fastIO();  File();

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define vin(v) for(auto &i:(v))cin>>i
#define all(v) v.begin() ,v.end()
#define ceil_i(a, b) (((ll)(a)+(ll)(b-1))/(ll)(b))
#define floor_i(a, b) (a/b)
#define round_i(a, b) ((a+(b/2))/b)
#define  int long long
int const OO = 1e18+4;
int mod =1e9+7;
int const N =1e5;

void solve() {
    ll n, m;cin >> n >> m;
    if (m*2 >= n)
        cout <<"passed\n";
    else
        cout<<"failed\n";
}
signed main() {
    Omda7
    int T = 1;cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}