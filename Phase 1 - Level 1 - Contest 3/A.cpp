#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

signed main()
{
    fastIO(); 
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            freq[x]++;
        }

        vector<int> ans(n + 1);
        for(auto [frog, f] : freq){
            for (int j = frog; j <= n; j += frog) {
                ans[j] += f;
            }
        }

        cout << (*max_element(ans.begin(), ans.end())) << "\n";
    }
}
