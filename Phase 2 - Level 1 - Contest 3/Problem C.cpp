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
	int l, r, a;
	cin >> l >> r >> a;
	int ans = r / a + r % a;
	int z = r / a * a - 1;

	if(z >= l)
	ans = max(ans, z / a + z % a);
	cout << ans << '\n';
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