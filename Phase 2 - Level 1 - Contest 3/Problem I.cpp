#include <bits/stdc++.h>

using namespace std;
#define int long long




void SOLVE(){
    int n;cin >> n;
    vector<int> a(n),b;
    cin >> a;
    set<int>st;
    for (auto i : a) {
        st.insert(i);
    }
    std::sort(a.begin(), a.end());
    if(st.size() > 3){
        cout << "NO\n";
        return;
    }
    for(auto it : st) b.push_back(it);
    cout << (st.size() <= 2 || (st.size() == 3 &&( b[2] - b[1] == b[1] - b[0] )) ? "YES\n" : "NO\n");
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    while (t--) {
        SOLVE();
    }
    return 0;
}
