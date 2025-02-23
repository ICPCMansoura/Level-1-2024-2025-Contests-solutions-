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



int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void solve() {
    int n;
    cin >> n;

    vector <string> v(2*n-2);
    vector <string> s1, s2;
    for(int i = 0; i < 2*n-2; i++){
        cin >> v[i];
        if(v[i].size() == 1){
            s1.push_back(v[i]);
        }
        if(v[i].size() == n-1){
            s2.push_back(v[i]);
        }
    }

    reverse(s2[0].begin(), s2[0].end());
    if(s1[0] == s1[1] && s2[0] == s2[1]){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

signed main() {
    fast
    int T = 1;
    cin >> T;
    while(T--){
        solve();

    }
    return 0;
}