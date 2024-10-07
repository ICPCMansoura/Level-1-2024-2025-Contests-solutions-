#include <bits/stdc++.h>
using namespace std;

#define int long long


void solve() {
    int n;
    cin >> n;
 
    vector<int> nums(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> nums[i];
    }
 
    if (nums[1] > n) {
        cout << "NO\n";
        return;
    }
 
    for (int i = 1; i <= n; ++i) {
        if (nums[nums[i]] < i) {
            cout << "No\n";
            return;
        }
    }
 
    cout << "Yes\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    int testCases = 1;
  //  cin >> testCases;
    for (int testCase = 1 ; testCase <= testCases ; ++testCase){
        solve();
    }
}
