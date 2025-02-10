#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}


signed main()
{
    fastIO();
    string s, ans; cin >> s;
    int ones = count(s.begin(), s.end(), '1');

    bool addedOnes = false;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i] == '1')
            continue;
        if(s[i] == '0'){
            ans.push_back('0');
        }
        else if(s[i] == '2' && !addedOnes){
            ans += string(ones, '1');
            ans.push_back('2');
            addedOnes = true;
        }
        else if(s[i] == '2'){
            ans.push_back('2');
        }
    }

    if(!addedOnes){
        ans += string(ones, '1');
    }

    cout << ans << "\n";
}
