#include <bits/stdc++.h>
using namespace std;

#define int long long


void solve() {
    int n; cin >> n;
    set <int> st;
    int sz; cin >> sz;
    for (int i = 0; i < sz; i++) {
        int x; cin >> x;
        st.insert(x);
    }
    cin >> sz;
    for (int i = 0; i < sz; i++) {
        int x; cin >> x;
        st.insert(x);
    }
    cout << (st.size() == n ? "Pilgrims will survive" : "Pilgrims won't survive");
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int testCases = 1;
 //   cin >> testCases;
    for (int testCase = 1 ; testCase <= testCases ; ++testCase){
        solve();
    }
}