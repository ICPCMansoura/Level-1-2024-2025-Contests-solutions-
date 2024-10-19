#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}



signed main()
{
    fastIO();
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        cout << (s[0] + s[1] + s[2] == s[3] + s[4] + s[5] ? "YES" : "NO") << "\n";
    }
}
