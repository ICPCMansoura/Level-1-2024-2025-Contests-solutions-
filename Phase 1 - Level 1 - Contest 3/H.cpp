#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

#define ll long long

signed main()
{
    fastIO();
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;

        map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            freq[x]++;
        }

        vector<int> distincts;
        for(auto [v, f] : freq){
            if(f >= k)
                distincts.push_back(v);
        }

        if(distincts.empty()){
            cout << -1 << "\n";
            continue;
        }

        int l = 0, r = 1, ans = 1, ansL = distincts[0], ansR = distincts[0];
        while (r < distincts.size()){
            if(distincts[r] == distincts[r - 1] + 1){
                r++;
                if(r - l > ans){
                    ans = r - l;
                    ansL = distincts[l];
                    ansR = distincts[r - 1];
                }
            }
            else{
                l = r;
                r++;
                if(r - l > ans){
                    ans = r - l;
                    ansL = distincts[l];
                    ansR = distincts[r - 1];
                }
            }
        }

        cout << ansL << " " << ansR << "\n";
    }


}
