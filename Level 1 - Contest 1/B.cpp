#include <bits/stdc++.h>
using namespace std;

#define int long long


void solve() {
    int n , d; cin >> n >> d;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    set <int> st;
    map <int,int> freq;
    int l = 0 , r = 0 , ans = 0;
    int ansl = 0 , ansr = 0;
    while (r < n) {
        st.insert(arr[r]);
        freq[arr[r]]++;
        if(st.size() <= d) {
            if(r - l + 1 > ans) {
                ansr = r , ansl = l;
            }
            ans = max(ans , r - l + 1);
            r++;
        } else {
            while (st.size() > d) {
                freq[arr[l]]--;
                if(!freq[arr[l]]) st.erase(arr[l]);
                l++;
            }
            r++;
        }
    }
    cout << ansl + 1 << ' ' << ansr + 1 << '\n';
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
