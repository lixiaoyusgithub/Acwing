#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<queue>
using namespace std;
const int N = 1000010;
int e[N], ne[N], h[N], idx;
void add(int a, int b)
{
	e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}
int bfs(string start)
{

}
int main()
{
	string start, c;
	for (int i = 0; i < 9; i++)
	{
		cin >> c;
		start += c;
	}
	cout << bfs(start);
	return 0;
}