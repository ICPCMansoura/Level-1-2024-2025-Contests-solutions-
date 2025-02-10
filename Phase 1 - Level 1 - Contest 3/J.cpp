#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

#define ll long long


signed main()
{
    fastIO(); 
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        stack<int> upper, lower;
        vector<bool> isDeleted(s.size(), false);

        for (int i = 0; i < s.size(); ++i) {
            if(s[i] == 'b'){
                if(!lower.empty()){
                    isDeleted[lower.top()] = true;
                    lower.pop();
                }
            }
            else if(s[i] == 'B'){
                if(!upper.empty()){
                    isDeleted[upper.top()] = true;
                    upper.pop();
                }
            }
            else if(isupper(s[i])){
                upper.push(i);
            }
            else if(islower(s[i])){
                lower.push(i);
            }
        }

        for (int i = 0; i < s.size(); ++i) {
            if(!isDeleted[i] && s[i] != 'b' && s[i] != 'B'){
                cout << s[i];
            }
        }
        cout << "\n";
    }

}
