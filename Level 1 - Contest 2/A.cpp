#include <bits/stdc++.h>
using namespace std;

void fileIO(void)
{

#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif

}

void fastIO(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}
#define ll long long
#define int ll
#define tests int t; cin >> t; int o = -1; while(++o < t)
#define MAX (int)(1e5 + 10)

void solve() {
    int n, k; cin>>n >> k;
    vector<int>v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int left = 0, right = 0, res = 0;
    map<int,int>freq;
    while (right < n) {
        freq[v[right]]++;

        while(freq.size() > k) {
            freq[v[left]]--;
            if(freq[v[left]] == 0) {
                freq.erase(v[left]);
            }
            left++;
        }
        res += right - left + 1;
        right++;
    }

    left = 0, right = 0;
    freq.clear();
    while (right < n) {
        freq[v[right]]++;

        while(freq.size() > k - 1) {
            freq[v[left]]--;
            if(freq[v[left]] == 0) {
                freq.erase(v[left]);
            }
            left++;
        }
        res -= right - left + 1;
        right++;
    }
    cout << res ;

}


signed main(){
    fileIO();
    fastIO();
   //   tests
    solve();
    return 0;
}
