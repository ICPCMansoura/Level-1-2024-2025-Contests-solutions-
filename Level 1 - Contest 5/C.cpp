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

int n, m, k;
char grid[505][505];
bool vis[505][505];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool valid(int i, int j){
    return i >= 0 && i < n && j >= 0 && j < m && grid[i][j] != '#' && !vis[i][j];
}

void go(int i, int j)
{
    vis[i][j] = 1;
    for(int c = 0; c < 4; c++)
    {
        int x = i + dx[c];
        int y = j + dy[c];

        if(valid(x, y))
            go(x, y);
    }

    if(k-- > 0)
        grid[i][j] = 'X';
}

void solve()
{
    cin >>  n>>  m>> k;
    for(int i  =0; i < n; i++)
        for(int j = 0; j < m;j++)
            cin >> grid[i][j];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(grid[i][j] == '.' && !vis[i][j])
                go(i, j);

    for(int i  =0; i < n; i++)
    {
        for(int j = 0; j < m;j++)
            cout << grid[i][j];

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