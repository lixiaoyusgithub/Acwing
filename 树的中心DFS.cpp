#include<iostream>
#include<cstring>
using namespace std;
const int  N = 1000010;
int n;
int h[N], e[N], ne[N], idx;
int ans = N;
bool st[N];
void add(int a, int b)
{
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx++;
}
int dfs(int u)
{
	st[u] = true;
	int sum = 1, res = 0;
	for (int i = h[u]; i != -1; i = ne[i])
	{
		int j = e[i];
		if (!st[j])
		{
			int s = dfs(j);
			res = max(res, s);
			sum += s;
		}
	}
	res = max(res, n - sum);
	ans = min(ans, res);
	return sum;
}
int main()
{
	cin >> n;
	memset(h, -1, sizeof h);
	for (int i = 1; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		add(a, b), add(b, a);
	}
	dfs(1);
	cout << ans;
	return 0;
}