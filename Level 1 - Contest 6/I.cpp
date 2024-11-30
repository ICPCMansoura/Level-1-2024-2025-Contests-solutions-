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
    int n , k;
    string s1;
    cin >> n >> k;
    cin >> s1;
    map<char, ll> asd;
    int l = 0, r = 0;
    while (r < k)
    {
        asd[s1[r]]++;
        r++;
    }
    int ans = asd['W'];
    while (r < n)
    {
        asd[s1[r]]++;
        asd[s1[l]]--;
        ans = min(ans, asd['W']);
        l++;
        r++;
    }
    cout << ans << endl;
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