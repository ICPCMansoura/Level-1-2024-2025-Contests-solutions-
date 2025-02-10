#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}


#define ll long long
const int N = 5e6;

vector<int> lp(N + 1);
vector<int> primes;
void sieve()
{
    for (int i = 2; i <= N; ++i) {
        if(lp[i] == 0) {
            lp[i] = i;
            primes.push_back(i);
        }
        for (int j = 0; i * primes[j] <= N; ++j) {
            lp[i * primes[j]] = primes[j];
            if (primes[j] == lp[i]) {
                break;
            }
        }
    }
}

signed main()
{
    fastIO();
    sieve();
    vector<int> pre(N + 1);

    for (int i = 2; i <= N; ++i) {
        int num = i, cnt = 0;
        while (num != 1){
            num /= lp[num];
            cnt++;
        }
        pre[i] = pre[i - 1] + cnt;
    }

    int t; cin >> t;
    while (t--){
        int a, b; cin >> a >> b;
        cout << pre[a] - pre[b] << "\n";
    }

}
