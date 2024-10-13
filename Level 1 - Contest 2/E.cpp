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


void solve() {
    string s;cin>>s;
    int pieces = 1;
    bool zo = false;
    for(int i = 0; i < s.size() - 1; i++){
        if((s[i]=='0') and (s[i+1]=='1')) {
            zo = true;
        }
        if(s[i]!=s[i+1]) {
            pieces++;
        }

    }
    if(zo)
        cout << pieces - 1 << '\n';
    else
        cout << pieces << '\n';
}

signed main(){
    fileIO();
    fastIO();
      tests
    solve();
    return 0;
}

