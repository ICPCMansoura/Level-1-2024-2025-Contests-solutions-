#include <bits/stdc++.h>
using namespace std;

#define int long long


void solve() {
    int n , q; cin >> n >> q;

    vector <int> arr(n);
    for	(int i = 0; i < n; i++) cin >> arr[i];

    int maxa = *max_element(arr.begin() , arr.end());

    while (q--) {
        char c; cin >> c;
        int l , r; cin >> l >> r;
        if(maxa >= l && maxa <= r) {
            if(c == '-') cout << --maxa << ' ';
            else cout << ++maxa << ' ';
        } else {
            cout << maxa << ' ';
        }
    }

}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int testCases = 1;
    cin >> testCases;
    for (int testCase = 1 ; testCase <= testCases ; ++testCase){
        solve();
        cout << '\n';
    }
}