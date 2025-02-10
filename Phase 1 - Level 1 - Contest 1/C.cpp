#include <bits/stdc++.h>
using namespace std;

#define int long long


double calc(int x1 , int x2 , int y1 , int y2){
    return sqrt(pow((x1 - x2) , 2) + pow((y1 - y2) , 2));
}

void solve() {
    int q , x , y;
    cin >> q >> x >> y;

    multiset < pair< double , pair <int,int> >> ms;
    map <pair<int,int> , int> vis;

    while(q--){
        int op; cin >> op;
        if(op == 1){
            int a , b; cin >> a >> b;
            if(vis[{a , b}]) continue;
            vis[{a , b}] = 1;
            double distance = calc(a , x ,b ,y);
            ms.insert( {distance , {a , b} } );
        }
        else{
            auto ans = *ms.begin();
            cout << ans.second.first << " " << ans.second.second << '\n';
            vis[{ans.second.first , ans.second.second}] = 0;
            ms.erase(ms.begin());
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    int testCases = 1;
  //  cin >> testCases;
    for (int testCase = 1 ; testCase <= testCases ; ++testCase){
        solve();
    }
}
