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
    string a, b; cin >> a >> b;
    string oddA, evenA, oddB, evenB;

    int n = a.size();
    for(int i = 0; i < n; ++i)
    {
        if((a[i] - 'a') % 2 == 0)
            evenA += a[i];
        else
            oddA += a[i];

        if((b[i] - 'a') % 2 == 0)
            evenB += b[i];
        else
            oddB += b[i];
    }

    if(oddA == oddB && evenA == evenB)
        cout << "Yes";
    else
        cout << "No";
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