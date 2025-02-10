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

int n , ans;
void rec(ll num, ll a, ll b)
{
    if (a + b == 13)
        return;
    if (num >= n && a == b)
    {
        ans = min(ans, num);
        return;
    }
    rec(num * 10 + 4, a + 1, b);
    rec(num * 10 + 7, a , b+1);
}

void AC() {
    cin >> n;
    ans = 1e12;
    rec(0, 0, 0);
    cout << ans;
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