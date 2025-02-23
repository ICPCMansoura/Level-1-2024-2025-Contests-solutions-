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
	int n; cin >> n;
	vector<pair<int, int>>tree(n);
	for (int i = 0; i < n; i++)
	{
		cin >> tree[i].first >> tree[i].second;
	}
	
	sort(tree.begin(), tree.end());
	int ans = 1;
	if (tree.size() >= 2)
		ans++;
	bool can = 0;
	for (int i = 1; i < n-1; i++)
	{
		if (!can)
		{
			if (tree[i].first - tree[i].second > tree[i - 1].first)
			{
				ans++;
			}
			else if(tree[i].first + tree[i].second < tree[i+1].first)
			{
				ans++;
				can = 1;
			}
		}
		else
		{
			if (tree[i].first - tree[i].second > tree[i - 1].first + tree[i-1].second)
			{
				ans++;
			}
			else if (tree[i].first + tree[i].second < tree[i + 1].first)
			{
				ans++;
				continue;
			}
			can = 0;
		}
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