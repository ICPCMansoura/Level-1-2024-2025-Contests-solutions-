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
    int x, y, z;
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr, arr + 3);
    if(arr[0] != arr[1] && arr[1] != arr[2]) cout<<"NO\n";
    else if(arr[0] == arr[1] && arr[1] == arr[2]) {
        cout<<"YES\n";
        cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << '\n';
    }
    else if(arr[0] == arr[1]) {
        cout<<"NO\n";
    }
    else {
        cout<<"YES\n";
        cout<< arr[0] << ' ' << arr[0] << ' ' << arr[1] << ' ' << '\n';
    }
}


signed main(){
    fileIO();
    fastIO();
      tests
    solve();
    return 0;
}
