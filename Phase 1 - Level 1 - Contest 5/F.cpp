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

int n, k, sum;
vector<int>v, cur;
vector<vector<int>>ans;

void go(int i)
{
    if(i == n)
    {
        if(sum >= k && cur.size())
            ans.push_back(cur);

        return;
    }

    // take
    sum += v[i];
    cur.push_back(v[i]);
    go(i + 1);

    // leave
    sum -= v[i];
    cur.pop_back();
    go(i + 1);
}

void solve()
{
    cin >> n >> k;
    v.resize(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    go(0);
    std::sort(ans.begin(), ans.end());
    for(auto i : ans)
    {
        for(int ii : i)
            cout << ii << ' ';

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