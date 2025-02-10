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
    int n , m , x;
    cin >> n >> m >> x;
    vector<ll> blocks(n),towers(n);
    priority_queue<pair<ll, ll>>asd;
    for (int i = 0; i < n; i++)
    {
        cin >> blocks[i];
    }
    for (int i = 0; i < m; i++)
    {
        asd.push({ 0,i + 1 });
    }
    int a = n - 1;
    while (a >= 0)
    {
        pair<ll, ll> temp = asd.top();
        asd.pop();
        temp.first -= blocks[a];
        towers[a] = temp.second;
        asd.push(temp);
        a--;
    }
    int b = abs(asd.top().first);
    while (asd.size() > 1)
        asd.pop();
    int c = abs(asd.top().first);
    if (c - b <= x)
    {
        cout << "Yes" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << towers[i] << " ";
        }
        cout << endl;
    }
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