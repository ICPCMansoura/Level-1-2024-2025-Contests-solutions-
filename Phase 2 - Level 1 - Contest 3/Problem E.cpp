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
#include<numeric>
#include <cstring>

using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9 + 7, N = 2e5 + 5;
int n, m;
vector<string>a;
vector<char>need = { 'n', 'a' , 'r' , 'e' , 'k' };
int dp[1001][5];
int vis[1001][5];
int id = 1;
int solve(int i, int j)
{
	if (i == n)
		return -j;

	if (vis[i][j] == id)
		return dp[i][j];
	vis[i][j] = id;

	int ch1 = 0, ch2 = 0;
	ch1 = solve(i + 1, j);
	int sum = 0, jdx = j;
	for (int idx = 0; idx < m; idx++)
	{
		if (a[i][idx] == need[jdx])
		{
			jdx++;
			if (jdx == 5)
			{
				sum += 5;
				jdx = 0;
			}
		}
		else if (find(need.begin(), need.end(), a[i][idx]) != need.end())
			sum--;
	}
	ch2 = solve(i + 1, jdx) + sum;

	return dp[i][j] = max(ch1, ch2);
}
void Magek()
{
	cin >> n >> m;
	a.resize(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << solve(0, 0) << endl;
	id++;
}
int32_t main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int t = 1; cin >> t;
	while (t--)
	{
		Magek();
	}
	return 0;
}