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
    int n;
    cin >> n;
    string s;
    cin >> s;


    string ans;
    int mx = 0;
    for(char i = 'A'; i <= 'Z'; i++){
        for(int j = 'A'; j <= 'Z'; j++){
            int cnt = 0;
            for(int k = 0; k < n-1; k++){
                if(s[k] == i && s[k+1] == j){
                    cnt ++;
                }
            }
            if(cnt > mx){
                mx = cnt;
                ans = i;
                ans += j;
            }
        }
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

