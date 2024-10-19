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
    int n; cin >> n;
    vector<int> v(n);
    set<int> difs, ans;
    map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 1; i < n; ++i) {
        difs.insert(v[i] - v[i - 1]);
        freq[v[i] - v[i - 1]]++;
    }

    if(n == 1){
        cout << -1 << "\n";
        return 0;
    }

    if(difs.size() == 1){
        int myDif = *difs.begin();
        ans.insert(v[0] - myDif);
        ans.insert(v.back() + myDif);
    }
    else if(difs.size() == 2 && freq[*difs.rbegin()] == 1){
        int myDif = *difs.begin();
        for (int i = 1; i < n; ++i) {
            if(v[i] - v[i - 1] == myDif)
                continue;
            int newNumber = v[i - 1] + myDif;
            if(newNumber + myDif == v[i]){
                ans.insert(v[i - 1] + myDif);
                break;
            }
        }
    }

    if(n == 2 && (v[0] + v[1]) % 2 == 0){
        ans.insert((v[0] + v[1])/2);
    }

    cout << ans.size() << "\n";
    for(auto sol : ans){
        cout << sol << " ";
    }

}
