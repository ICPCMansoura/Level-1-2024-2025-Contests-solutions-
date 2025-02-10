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
    int x, y; cin>>x >> y;
    int l = 0,  r =  2e9, ans;
    while (l <= r) {
        int mid = (r + l)/2;
        int notDiv = mid - mid / x;
        if(notDiv >= y) {
            r = mid -1;
            ans = mid;
        }
        else
            l = mid + 1;
    }
    cout<< ans<<'\n';

}


signed main(){
    fileIO();
    fastIO();
      tests
    solve();
    return 0;
}
