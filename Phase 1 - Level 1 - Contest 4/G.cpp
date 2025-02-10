#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ordered_set2 tree<int, null_type, greater_equal<int>, rb_tree_tag, tree_order_statistics_node_update>


#define int long long
#define ll long long
#define all(x) x.begin(), x.end()

#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


const int mod = 1e9 + 7;


void solve(){
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    vector <ordered_set> changes(26);
    for(int i = 0; i < n; i++){
        changes[s[i] - 'a'].insert(i);
    }


    while(q--){
        int op; cin >> op;
        if(op == 1){
            int l, r;
            cin >> l >> r;
            l --;
            r --;
            int ans = 0;
            for(int i = 0; i < 26; i++){
                int tmp = changes[i].order_of_key(r+1) - changes[i].order_of_key(l);
                if(tmp > 0)
                    ans ++;
            }
            cout << ans << endl;;
        }
        else{
            int idx;
            char ch;
            cin >> idx >> ch;
            idx --;
            changes[s[idx] - 'a'].erase(idx);
            changes[ch - 'a'].insert(idx);
            s[idx] = ch;
        }
    }
}

signed main() {
    fast
    int T = 1;
    //cin >> T;


    while (T--) {
        solve();
    }
}

