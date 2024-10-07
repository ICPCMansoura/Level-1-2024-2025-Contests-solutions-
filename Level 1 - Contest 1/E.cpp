#include <bits/stdc++.h>
using namespace std;

#define int long long


void solve() {
    int n , k;
    cin >> n >> k;
    vector <int> arr(n + 1) , wake(n + 1);
    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int i = 1; i <= n; i++) cin >> wake[i];

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if(wake[i]) {
            ans += arr[i];
            arr[i] = 0;
        }
    }

    for (int i = 1; i <= n; i++) arr[i] += arr[i - 1];

    int maxi = 0;
    for (int i = 0; i <= n - k; i++) {
        if(arr[i + k] - arr[i] > maxi)
            maxi = arr[i + k] - arr[i];
    }

    ans += maxi;
    cout << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int testCases = 1;
 //   cin >> testCases;
    for (int testCase = 1 ; testCase <= testCases ; ++testCase){
        solve();
    }
}