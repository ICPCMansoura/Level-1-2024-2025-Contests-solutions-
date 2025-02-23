#include <iostream>
#include <vector>
#include <bitset>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <cmath>
#include <iomanip>
#include <unordered_map>
#include<numeric>

using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9 + 7, N = 2e5 + 5;
void Magek()
{
	int n, m;
	cin >> n >> m;
	vector<int>a(n), b(m);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}

	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		auto it = lower_bound(b.begin(), b.end(), a[i]);
		int mini = LLONG_MAX;
		if (it != b.end())
			mini = min(mini, abs(*it - a[i]));
		if (it != b.begin())
			it--,mini = min(mini, abs(*it - a[i]));
		ans = max(mini, ans);

	}
	cout << ans;
}
int32_t main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int t = 1; //cin >> t;
	while (t--)
	{
		Magek();
	}
	return 0;
}