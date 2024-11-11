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

    vector<int>v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    vector<int>divs;
    for(int i = 1; i * i <= n; ++i)
    {
        if(n % i == 0)
        {
            divs.push_back(i);
            divs.push_back(n / i);
        }
    }

    int ans = -1e12;
    for(int div : divs)
    {
        int total = 0;
        for(int i = 0; i < n / div; i++)
        {
            vector<int>cur;
            for(int j = i * div; j < (i + 1) * div; j++ )
                cur.push_back(v[j]);

            std::sort(cur.begin(), cur.end());
            total += cur[(cur.size() - 1) / 2];
        }

        ans = max(total, ans);
    }

    cout << ans;
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