#include <bits/stdc++.h>
using namespace std;

#define int long long


void solve() {
    int n; cin >> n;
    vector <int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int l = 0 , r = n - 1;
    int b3dsh = 0 , ammar = 0;
    int a = 0 , b = 0;
    while (l <= r) {
        if(b3dsh <= ammar) {
            b3dsh += arr[l++];
            a++;
        } else {
            ammar += arr[r--];
            b++;
        }
    }
    cout << a << ' ' << b << '\n';
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
        cout << '\n';
    }
}