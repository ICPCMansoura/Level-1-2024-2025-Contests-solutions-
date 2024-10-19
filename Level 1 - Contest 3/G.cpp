#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}


#define ll long long
int n, p;

bool can(long double time, vector<int> & consume, vector<int> & have){
    long double neededTime = 0;
    for (int i = 0; i < n; ++i) {
        if(time * consume[i] <= have[i])
            continue;
        neededTime += (time * consume[i] - have[i]) / p;
    }

    return neededTime <= time;
}

signed main()
{
    fastIO(); 
    cin >> n >> p;
    vector<int> consume(n), have(n);

    long long sumConsume = 0;
    for (int i = 0; i < n; ++i) {
        cin >> consume[i] >> have[i];
        sumConsume += consume[i];
    }

    if(p >= sumConsume){
        cout << -1;
        return 0;
    }

    long double l = 0, r = 1e18, mid;
    while (r - l > 1e-7){
        mid = l + (r - l)/2;
        if(can(mid, consume, have)){
            l = mid;
        }
        else{
            r = mid;
        }
    }

    cout << fixed << setprecision(7) << mid;

}
