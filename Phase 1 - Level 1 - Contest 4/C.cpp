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
    int n, m;
    cin >> n >> m;
    int a[m];
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    sort(a, a+m);
    vector <int> diff;
    for(int i = 1; i < m; i++){
        diff.push_back(a[i] - a[i-1] - 1);
    }
    diff.push_back(a[0] - 1 + n - a[m-1]);
    sort(diff.begin(), diff.end(), greater());
    int save = 0, day = 0;

    for(auto val : diff){
        val -= 2 * day;
        if(val > 0){
            if(val == 1){
                day ++;
                save ++;
            }
            else{
                day += 2;
                save += val - 1;
            }
        }
    }
    cout << n - save << endl;
}

signed main() {
    fast
    int T = 1;
    cin >> T;


    while (T--) {
        solve();
    }
}

