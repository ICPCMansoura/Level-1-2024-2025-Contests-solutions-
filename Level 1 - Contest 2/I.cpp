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
    int n; cin>>n;
    vector<dinasor> v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i].health;
        v[i].idx = i;
    }
    for (int i = 0; i < n; ++i) {
        cin>>v[i].pos;
    }
    string s; cin >> s;
    for (int i = 0; i < n; ++i) {
        v[i].dir = s[i];
    }

    sort(v.begin(),v.end(), cmp);
    stack<dinasor> st;
    vector<dinasor> res;
    for (int i = 0; i < n; ++i) {
        if(v[i].dir == 'R') {
            st.push(v[i]);
        }
        else {
            if(st.empty()) {
                res.push_back(v[i]);
                continue;
            }

            while (!st.empty()) {
                if(v[i].health > st.top().health) {
                    st.pop();
                    v[i].health--;
                }
                else if(v[i].health == st.top().health) {
                    v[i].health = 0;
                    st.pop();
                    break;
                }
                else {
                    v[i].health = 0; // L died
                    st.top().health--;
                    if(st.top().health == 0) {
                        st.pop();
                    }
                    break;
                }
            }
            if(st.empty() && v[i].health !=0) {
                res.push_back(v[i]);
            }
        }
    }

    while (!st.empty()) {
        res.push_back(st.top());
        st.pop();
    }

    if(res.empty()) {
        cout << "All killed!";
        return;
    }
    sort(res.begin(), res.end(), cmp2);
    cout<<res.size()<<'\n';
    for(auto & it : res) {
        cout << it.health << ' ';
    }
}


signed main(){
    fileIO();
    fastIO();
   //   tests
    solve();
    return 0;
}
