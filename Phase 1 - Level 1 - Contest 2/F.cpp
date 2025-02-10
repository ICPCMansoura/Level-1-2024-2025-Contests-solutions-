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
    string s; cin>>s;
    int res = 0;
    vector<pair<char,int>>v;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i] != '0') {
            v.push_back(make_pair(s[i], s.size() - 1 - i ));
        }
    }
    cout<<v.size()<<'\n';
    for (int i = 0; i < v.size(); ++i) {
        cout<<v[i].first;
        for (int j = 0; j < v[i].second; ++j) {
            cout<<0;
        }
        cout<<' ';
    }
    cout<<'\n';
}

signed main(){
    fileIO();
    fastIO();
      tests
    solve();
    return 0;
}

