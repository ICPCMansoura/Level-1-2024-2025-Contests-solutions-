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
    int k;
    string s1;
    cin >> k;
    cin.ignore();
    getline(cin, s1);
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == ' ')
            cout << ' ';
        else
        {
            ll indx = s1[i] - 'a';
            indx += k;
            indx %= 26;
            indx += 'a';
            cout << char(indx);
        }
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