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
    int n, m, k, t; cin >> n >> m >> k >> t;

    Ordered_Set<int>st;
    map<int,bool>frq;
    while(k--)
    {
        int x, y; cin >> x >> y;
        --x, --y;
        st.insert(x * m + y);
        frq[x * m + y] = 1;
    }

    vector<string>ans = {"Carrots", "Kiwis", "Grapes"};
    while(t--)
    {
        int x, y; cin >> x >> y;
        --x, --y;
        if(frq[x * m + y])
            cout << "Waste";
        else
            cout << ans[(x * m + y - st.order_of_key(x * m + y)) % 3];

        cout << endl;
    }
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