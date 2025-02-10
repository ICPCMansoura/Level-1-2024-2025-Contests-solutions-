#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class T>
using Ordered_Set = tree< T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T>
using Ordered_Multiset = tree< T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// *find_by_order, order_of_key
#define int long long
#define Sonic ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
void File()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
#define File File();
const int oo = 1e18 + 5;
const int MOD = 1e9 + 7;
const int N = 1e6 + 6;
//===========================\\

void solve()
{
    int n; cin >> n;

    vector<int>v(n + 1);
    for(int i = 1; i <= n; ++i)
        cin >> v[i];

    vector<int>pref(n + 2), suff(n + 2);
    pref[0] = 1, suff[n + 1] = 1;
    for(int i = 1; i <= n; i++)
        pref[i] = (pref[i - 1] % MOD * v[i] % MOD) % MOD;

    for(int i = n; i >= 1; i--)
        suff[i] = (suff[i + 1] % MOD * v[i] % MOD) % MOD;

    for(int i = 1; i <= n; i++)
        cout << (pref[i - 1] % MOD * suff[i + 1] % MOD) % MOD << ' ';
}

signed main()
{
    Sonic File
    int T = 1; // cin >> T;
    while( T-- )
    {
        solve();
//         I HATE UVA
        if( T > 0 )
            cout << endl;
    }
    return 0;
}