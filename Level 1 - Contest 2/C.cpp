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

typedef struct Dinasor {
    int health, pos, idx;
    char dir;
}dinasor;

bool cmp(dinasor a, dinasor b) {
    return a.pos < b.pos;
}

bool cmp2(dinasor a, dinasor b) {
    return a.idx < b.idx;
}

void solve() {
    string s;
    cin >> s;

    stack<char> st;

    for (char c : s) {
        if (!st.empty() && st.top() == c) st.pop();
        else st.push(c);
    }

    string result = "";
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    reverse(result.begin(), result.end());

    cout << result << endl;

}


signed main(){
    fileIO();
    fastIO();
   //   tests
    solve();
    return 0;
}
