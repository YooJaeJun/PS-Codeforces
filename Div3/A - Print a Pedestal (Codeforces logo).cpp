#include <bits/stdc++.h>
using namespace std;
#define int int64_t
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
#define yes cout << "YES\n";
#define no cout << "NO\n";
const int maxn = 1e9 + 7;
const double mod = 1e9 + 7;


void output(int first, int second, int third)
{
	cout << second << ' ' << first << ' ' << third << '\n';
}

void solution()
{
	int n;
	cin >> n;
	if (n % 3 == 0) output(n / 3 + 1, n / 3, n / 3 - 1);
	else if (n % 3 == 1) output(n / 3 + 2, n / 3, n / 3 - 1);
	else output(n / 3 + 2, n / 3 + 1, n / 3 - 1);
}

int32_t main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	cin >> t;
	for (int i = 0; i != t; i++) solution();
	return 0;
}