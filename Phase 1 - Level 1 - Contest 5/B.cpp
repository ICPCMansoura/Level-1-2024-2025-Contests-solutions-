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
#define endl "\n"
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

int n, m, k;
vector<int>a, b;

bool can(int sum)
{
    int total = 0;
    for(int i = 0; i < n; ++i)
    {
        int num = sum - a[i];
        int lessEqual = upper_bound(b.begin(), b.end(), num) - b.begin();
        total += lessEqual;
    }

    return total >= k;
}

void solve()
{
    cin >> n >> m >> k;

    a.resize(n), b.resize(m);
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    for(int i = 0; i < m; ++i)
        cin >> b[i];

    sort(b.begin(), b.end());
    int l = 1, r = 1e18, mid, ans = 0;
    while(l <= r)
    {
        mid = (l + r) / 2;
        if(can(mid))
            r = mid - 1, ans = mid;
        else
            l = mid + 1;
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