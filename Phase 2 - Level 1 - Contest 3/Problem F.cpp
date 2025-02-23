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
vector<vector<int>>a(18, vector<int>(200005));
void Magek()
{
	int l, r;
	cin >> l >> r;
	int max_ones = 0;
	for (int i = 0; i < 18; i++)
	{
		max_ones = max(max_ones, a[i][r] - a[i][l - 1]);
	}
	cout << r - l + 1 - max_ones << "\n";
}
int32_t main() {
	ios::sync_with_stdio(false); cin.tie(0);
	for (int i = 0; i < 18; i++)
	{
		a[i][0] = 0;
		for (int j = 1; j <= 200000; j++)
		{
			a[i][j] = ((j >> i) & 1);
			a[i][j] += a[i][j - 1];
		}
	}
	int t = 1; cin >> t;
	while (t--)
	{
		Magek();
	}
	return 0;
}