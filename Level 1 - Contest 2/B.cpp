#include <bits/stdc++.h>
using namespace std;

void fileIO(void)
{

#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif

}

void fastIO(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}
#define ll long long
#define int ll
#define tests int t; cin >> t; int o = -1; while(++o < t)
#define MAX (int)(1e5 + 10)

void solve() {
    int l,r, k; cin>>l>>r>>k;
    int m; cin>>m;
    set<int>deleted;
    while (m--) {
        int x; cin>>x;
        deleted.insert(x); // i    k - i
    }

    for (int i = l; i <= r; ++i) {
        if(deleted.find(i) == deleted.end() && deleted.find(k - i) == deleted.end() && (k - i >= l) && (k - i <= r)) {
            cout << "mission passed + respect";
            return;
        }
    }
    cout<<"wasted";

}


signed main(){
    fileIO();
    fastIO();
   //   tests
    solve();
    return 0;
}
