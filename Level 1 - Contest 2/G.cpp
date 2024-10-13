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
int freq[MAX];
void solve() {
    int n; cin>> n;
    vector<int> machines(n);

    for (int i = 0; i < n; ++i) {
        cin>>machines[i];
        freq[machines[i]]++;
    }

    vector<int> products(MAX);
    for (int i = 1; i < MAX; ++i) {
        for (int j = i; j < MAX; j+=i) {
            products[j] += freq[i];
        }
    }

    for (int i = 1; i < MAX; ++i) {
        products[i] += products[i-1];
    }

    int q; cin >> q;
    while (q--) {
        int x; cin >> x;
        int l = 0, r = MAX - 1, ans;
        while (l <= r) {
            int mid = (l+r)/2;
            if(products[mid] >= x) {
                ans = mid ;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        cout<< ans<<'\n';
    }
}


signed main(){
    fileIO();
    fastIO();
   //   tests
    solve();
    return 0;
}
