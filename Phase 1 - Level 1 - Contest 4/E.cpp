#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ordered_set2 tree<int, null_type, greater_equal<int>, rb_tree_tag, tree_order_statistics_node_update>


#define int long long
#define ll long long
#define all(x) x.begin(), x.end()

#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


const int mod = 1e9 + 7;


void solve(){
    
    int n, k;
    string s;
    cin >> n >> k >> s;

    int l = 0, r = 0, a = 0, b = 0, ans = 0;
    while(l < n){
        while(r < n && (a + (s[r] == 'a' ? 1 : 0) <= k || b + (s[r] == 'b' ? 1 : 0) <= k)){
            if(s[r] == 'a') a++;
            else b++;
            ans = max(ans, r - l + 1);
            r ++;
        }

        if(s[l] == 'a')
            a --;
        else
            b --;
        l ++;
    }
    cout << ans;
}

signed main() {
    fast
    int T = 1;
    //cin >> T;


    while (T--) {
        solve();
    }
}

