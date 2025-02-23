#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> a;


void SOLVE(){
    int n,k;cin >> n >> k;
    vector<int>divisors;
    for (int i = 1; i*i <= n; ++i) {
        if(n%i == 0){
            divisors.push_back(i);
            if(i!=n/i) divisors.push_back(n/i);
        }
       
    }
    std::sort(divisors.begin(), divisors.end());
    if(k > divisors.size()) cout << "-1\n";
    else  cout << divisors[k-1] << "\n";
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
