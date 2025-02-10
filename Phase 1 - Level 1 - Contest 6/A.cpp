#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define int ll

void RUN() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

////////////////////////////////////////////////////////////

void AC() {
    int n; cin >> n;
    if(!(n & 1)) {
        cout << "We Love ICPC Mansoura";
    } else {
        cout << "See You In Phase 2!";
    }

}



signed main() {
    RUN();
    int testCases = 1;

   // cin >> testCases;
    for (int testCase = 1 ; testCase <= testCases ; ++testCase) {
        AC();
    }

    return 0;
}