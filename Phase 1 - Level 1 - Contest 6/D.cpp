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
    int n;
    cin >> n;
    vector<ll> a(n),b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        b[i] = lcm(a[i], a[i - 1]);
    }
    bool f1 = true;
    for (int i = 1; i < n-1; i++)
    {
        if (__gcd(b[i], b[i + 1]) != a[i])
            f1 = false;
    }
    if (f1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}



signed main() {
    RUN();
    int testCases = 1;

    cin >> testCases;
    for (int testCase = 1 ; testCase <= testCases ; ++testCase) {
        AC();
    }

    return 0;
}