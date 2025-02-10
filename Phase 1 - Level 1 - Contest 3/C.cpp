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
        int n; string s;
        cin >> n >> s;
        int l = 0, r = n - 1;
        while (s[l] != s[r] && l < r){
            l++;
            r--;
        }
        cout << r - l + 1 << "\n";
    }
}
