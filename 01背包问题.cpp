#include<iostream>
using namespace std;

const int N = 10000;
int n, m;
int v[N], w[N];
int f[N];

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i] >> w[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = m; j >=v[i]; j--)
		{
			f[j] = max(f[j], f[j - v[i]] + w[i]);
		}
	}
	cout << f[m];
	return 0;
}
















//#include<iostream>
//using namespace std;
//const int N = 110;
//int n, m;
//int v[N], w[N];
//int s[N][N];
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> v[i] >> w[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//        for (int j = 0; j <= m; j++)
//		{
//			if(j < v[i])
//			    s[i][j] = s[i - 1][j];
//			else
//			{
//				s[i][j] = max(s[i-1][j], s[i - 1][j - v[i]] + w[i]);
//			}
//		}
//	}	
//	cout << s[n][m];
//	return 0;
//}