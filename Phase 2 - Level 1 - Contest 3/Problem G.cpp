#include <bits/stdc++.h>
using namespace std;

void InOutFast() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}

#define int long long
#define bye return 0
#define all(a) ((a).begin()), ((a).end())
#define ll long long
const int N = 2e5 + 5, oo = 1e9, MOD = 1e8;
int n, c;
vector<pair<int, int>> adj[N];
void DFS(int u, int p, int cnt, int i){
    c = max(c, cnt);
    for(auto v : adj[u]){
        if(v.first == p)
            continue;
        if(v.second < i)
            DFS(v.first, u, cnt+1, v.second);
        else
            DFS(v.first, u, cnt, v.second);
    }
}
signed main() {
    InOutFast();
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<= n; i++)
            adj[i].clear();
        for(int i=0; i<n-1; i++){
            int u, v;
            cin >> u >> v;
            adj[u].push_back({v, i+1});
            adj[v].push_back({u, i+1});
        }
        c = 0;
        DFS(1, 0, 1, 0);
        cout << c << '\n';
    }
    bye;
}
