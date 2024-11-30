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

int n;
vector<ll> asd;
bool rec(ll pos, ll indx)
{
    if (indx == n)
    {
        if (pos == 0)
            return true;
        else
            return false;
    }
    return rec((pos + asd[indx]) % 360, indx+1) || rec((pos - asd[indx]) % 360, indx+1);
}


void AC() {
    cin >> n;
    asd.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> asd[i];
    }
    cout << (rec(0, 0) ? "YES\n" : "NO\n");
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