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
    int n;
    cin >> n;
    int a[n], b[n];

    for(int i = 0; i < n; i ++){
        cin >> a[i];   
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    int m;
    cin >> m;
    int x[m];
    map <int, int> cnt;
    for(int i = 0; i < m; i++){
        cin >> x[i];
        cnt[x[i]] ++;
    }

    bool f = 1;
    for(int i = 0; i < n; i++){
        if(a[i] == b[i]){
            continue;
        }
        if(cnt[b[i]] > 0){
            cnt[b[i]] --;
        }
        else{
            f = 0;
            break;
        }
    }

    bool found = 0;
    for(int i = 0; i < n; i++){
        if(b[i] == x[m-1]){
            found = 1;
        }
    }

    cout << (f == 1 && found == 1 ? "YES" : "NO") << endl;
}

signed main() {
    fast
    int T = 1;
    cin >> T;


    while (T--) {
        solve();
    }
}

